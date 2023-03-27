//
// Created by jianxff on 2023/3/8.
//
#include "common.hpp"
#include "visual.hpp"
#include "yolov5.hpp"
#include "PlatformSleep.h"

using namespace std;
using namespace cv;
using namespace yolo_v5;


extern "C" bool slam_init(int, int);
extern "C" void slam_set_debug(bool);
extern "C" int  slam_process(unsigned char img[],unsigned char dst[], float R[], float T[]);
extern "C" bool slam_detect(float normal[], float center[]);
extern "C" void slam_release();
//// test functions
extern "C" void slam_draw_tetra(float scale);


Visual visual;
YoloV5 yolo;


mutex objvec_mutex;
mutex img_mutex;
mutex cnt_mutex;
mutex area_mutex;

vector<Object> objs;
vector<Rect2f> areas;
int cnt = 0;
Mat img_yolo;

ofstream fout("/storage/emulated/0/Android/data/com.labx.arlab/files/log.txt"); // redirect cout to file

std::set<std::string> dynamic_objects_labels = {
        "person", "bicycle", "car", "motorcycle", "airplane", "bus",
        "train","truck","boat","bird", "cat", "dog", "horse", "sheep",
        "cow","elephant", "bear", "zebra", "giraffe",
};


void yolo_detect(){
    while(1){
        int cur_cnt;
        {
            unique_lock<mutex> lock(cnt_mutex);
            cur_cnt = cnt;
        }

        if(cur_cnt == 0){
            Mat input_src;
            vector<Object> output_objs;

            {
                unique_lock<mutex> lock(img_mutex);
                if(img_yolo.empty())
                    continue;
                img_yolo.copyTo(input_src);
            }

            yolo.detect(input_src, output_objs);

            {
                unique_lock<mutex> lock(objvec_mutex);
                objs.clear();
                objs.insert(objs.end(), output_objs.begin(), output_objs.end());
                for(auto& obj : objs){
                    obj.rect.width *= 2;
                    obj.rect.height *= 2;
                    obj.rect.x *= 2;
                    obj.rect.y *= 2;
                }
            }
        }

        if(cur_cnt == 1){
            {
                unique_lock<mutex> lock(objvec_mutex);
                unique_lock<mutex> lock2(area_mutex);
                areas.clear();
                for(auto obj : objs){
                    if(dynamic_objects_labels.find(yolo_v5::class_names[obj.label]) != dynamic_objects_labels.end()){
                        areas.push_back(obj.rect);
                    }
                }
            }
        }

        {
            unique_lock<mutex> lock(cnt_mutex);
            ++cnt;
            if(cnt == 2) cnt = 0;
        }
    }

}


bool slam_init(int w, int h){
    cerr.rdbuf(fout.rdbuf());
    cout.rdbuf(fout.rdbuf());
    visual.init("/storage/emulated/0/Android/data/com.labx.arlab/files/Config", Size(w, h));

    yolo.init("/storage/emulated/0/Android/data/com.labx.arlab/files/Config",320);

    std::thread t(&yolo_detect);
    t.detach();

    return true;
}


int slam_process(unsigned char img[],unsigned char dst[], float R[], float T[]){
    Mat src, output;
    Size sz = visual.getImageSize();
    src = Mat(sz.height, sz.width, CV_8UC4, img);
    cvtColor(src, src, COLOR_RGBA2BGR);

    {
        unique_lock<mutex> lock(img_mutex);
        cv::resize(src, img_yolo, visual.getImageSize()/2);
    }

    vector<Rect2f> areas_copy;

    {
        unique_lock<mutex> lock(area_mutex);
        areas_copy.insert(areas_copy.end(), areas.begin(), areas.end());
    }

    int res = visual.process(src, output, areas_copy);

    if(visual.debug())
    {
        {
            unique_lock<mutex> lock(objvec_mutex);
            for (auto &obj: objs) {
                cv::rectangle(output, obj.rect, Scalar(0,215,255), 1);
                putText(output, yolo_v5::class_names[obj.label], Point(obj.rect.x, obj.rect.y),
                        FONT_HERSHEY_SIMPLEX,0.8, Scalar(0,215,255), 1);
            }
        }
    }



    if(res == 0){
        visual.detect();
//        if(show_indicator)
//            visual.showIndicator(output);
        if(visual.draw_cube)
            visual.drawCubeCenter(output);
    }

//    // RGBA and set not transparent
//    cvtColor(output,output,COLOR_BGRA2RGBA);
//    for(int i = 0; i < output.rows; i++){
//        for(int j = 0; j < output.cols; j++){
//            output.at<Vec4b>(i,j)[3] = 255;
//        }
//    }
    cvtColor(output, output, COLOR_BGR2RGB);
    memcpy(dst, output.data, output.cols * output.rows * 3);

    if(res == 0){
        // process R and T
        Mat pose = visual.getTwc();
        pose.convertTo(pose, CV_32F);
        Mat MatR = pose.rowRange(0,3).colRange(0,3).clone();
        Mat MatT = pose.rowRange(0,3).col(3).clone();

        memcpy(R, MatR.data, 9 * sizeof(float));
        memcpy(T, MatT.data, 3 * sizeof(float));
    }

    return res;
}

bool slam_detect(float normal[], float center[]){
    Plane pl;
    visual.getCurrnetPlane().copyTo(pl);
    if(!pl.available())
        return false;

    Mat n = pl.normal();
    Point3f c = visual.getVisualCenterWorld(pl);

    normal[0] = n.at<float>(0,0);
    normal[1] = n.at<float>(0,1);
    normal[2] = n.at<float>(0,2);

    center[0] = c.x;
    center[1] = c.y;
    center[2] = c.z;

    return true;
}

void slam_draw_tetra(float scale){
    if(scale < 0)   return;
    visual.draw_cube = true;
    visual.chosen = false;
}

void slam_set_debug(bool d){
    visual.setDebug(d);
}


void slam_release(){
    visual.release();
}


Mat cross(Mat A,Mat B){
    if(A.rows != 1 || A.cols != 3 || B.rows != 1 || B.cols != 3){
        cout << "corss type error" << endl;
        return Mat();
    }
    Mat C = (Mat_<float>(1,3) <<
                A.at<float>(0,1)*B.at<float>(0,2) - A.at<float>(0,2)*B.at<float>(0,1),
                A.at<float>(0,2)*B.at<float>(0,0) - A.at<float>(0,0)*B.at<float>(0,2),
                A.at<float>(0,0)*B.at<float>(0,1) - A.at<float>(0,1)*B.at<float>(0,0));
    return C;
}



