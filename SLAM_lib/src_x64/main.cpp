//
// Created by jianxff on 2023/3/8.
//

#include "common.hpp"
#include "visual.hpp"

using namespace std;
using namespace cv;

extern "C" __declspec(dllexport) bool init();
extern "C" __declspec(dllexport) void set_debug(bool);
extern "C" __declspec(dllexport) int process(unsigned char img[], float R[], float T[], bool show_indicator);
extern "C" __declspec(dllexport) bool detect(float normal[], float center[]);
extern "C" __declspec(dllexport) void release();

VideoCapture cap;
Visual visual;

bool init(){
    FileStorage fs("./Config/ORB.yaml", FileStorage::READ);
    if(!fs.isOpened())  return false;

    int index = fs["Camera.index"];
    int width = fs["Image.width"];
    int height = fs["Image.height"];

    if(index == -1){
        string filename = fs["Camera.filename"];
        cap.open(filename);
    }else{
        cap.open(index);
        cap.set(CAP_PROP_FRAME_WIDTH, width);
        cap.set(CAP_PROP_FRAME_HEIGHT, height);
    }
    fs.release();
    visual.init("./Config");
    return true;
}

void set_debug(bool d){
    visual.setDebug(d);
}

int process(unsigned char img[], float R[], float T[], bool show_indicator){
    Mat src, output;
    cap >> src;
    if(src.empty())
        return -1;

    int res = visual.process(src, output);
    if(res == 0){
        visual.detect();
        if(show_indicator)
            visual.showIndicator(output);
    }

    cvtColor(output,output,COLOR_BGRA2RGB);
    memcpy(img, output.data, output.cols * output.rows * 3);

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

bool detect(float normal[], float center[]){
    Plane pl;
    visual.getCurrnetPlane().copyTo(pl);
    if(!pl.available())
        return false;

    Mat n = pl.normal();
    Point3f c = visual.getCameraCenterWorld(pl);

    normal[0] = n.at<float>(0,0);
    normal[1] = n.at<float>(0,1);
    normal[2] = n.at<float>(0,2);

    center[0] = c.x;
    center[1] = c.y;
    center[2] = c.z;

    return true;
}

void release(){
    visual.release();
    cap.release();
}


//int testapi(){
//    init();
//
//    float R[9];
//    float T[3];
//    float normal[3];
//    float center[3];
//    unsigned  char * img = new unsigned char[640*480*3];
//
//    while(1){
//        int res = process(img, R, T, true);
//        cv::Mat output(480, 640, CV_8UC3, img);
//        imshow("output", output);
//        waitKey(2);
//        if(res == 0){
//            detect(normal, center);
//        }
//    }
//    return 0;
//}


//int test(){
//    VideoCapture cap;
//    cap.open("../test/dataset01.avi");
//
//    Mat img, output;
//    Visual visual;
//    visual.init("../config");
//    int key = 0;
//    cout << "slam start" << endl;
//    while (key != 27 && key != 'p'){
//        cap >> img;
////        vwr.write(img);
//        int res = visual.process(img, output);
//        if(res == 0){
//            Mat twc = visual.getTwc();
//
//            visual.detect(600,0.08);
//            Plane pl = visual.getCurrnetPlane();
//            visual.showIndicator(output);
//        }
//        imshow("output", output);
//        key = waitKey(2);
//    }
//    cv::destroyAllWindows();
//
//    return 0;
//}


