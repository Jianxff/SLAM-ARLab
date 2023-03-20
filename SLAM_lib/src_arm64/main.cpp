//
// Created by jianxff on 2023/3/8.
//
#include "common.hpp"
#include "visual.hpp"
ofstream logging;
using namespace std;
using namespace cv;


extern "C" bool init(int, int);
extern "C" void set_debug(bool);
extern "C" int process(unsigned char img[], float R[], float T[], bool show_indicator);
extern "C" bool detect(float normal[], float center[]);
extern "C" void release();


Visual visual;

void initLog(std::string path){
    logging.open(path, ios::out);
}

bool init(int w, int h){
    visual.init("/storage/emulated/0/Android/data/com.LabX.ARLab/files/Config", Size(w, h));
    initLog("/storage/emulated/0/Android/data/com.LabX.ARLab/files/log.txt");
    return true;
}

void set_debug(bool d){
    visual.setDebug(d);
}

int process(unsigned char img[], float R[], float T[], bool show_indicator){
    Mat src, output;
    Size sz = visual.getImageSize();

    src = Mat(sz.height, sz.width, CV_8UC4, img);
    cvtColor(src, src, COLOR_RGBA2BGRA);

    if(src.empty()){
        return -1;
    }

    int res = visual.process(src, output);
    if(res == 0){
        visual.detect();
        if(show_indicator)
            visual.showIndicator(output);
    }

    // RGBA and set not transparent
    cvtColor(output,output,COLOR_BGRA2RGBA);
    for(int i = 0; i < output.rows; i++){
        for(int j = 0; j < output.cols; j++){
            output.at<Vec4b>(i,j)[3] = 255;
        }
    }
    memcpy(img, output.data, output.cols * output.rows * 4);

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
}



