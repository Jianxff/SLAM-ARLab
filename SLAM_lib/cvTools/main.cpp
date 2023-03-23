//
// Created by jianxff on 2023/3/20.
//
//
// Created by jianxff on 2023/3/8.
//

#include "common.hpp"

using namespace std;
using namespace cv;

extern "C" void rotate(unsigned char img[],int channels,int w,int h, int r_angle, unsigned char dst[]);
extern "C" void flip(unsigned char img[],int channels,int w, int h, int fcode, unsigned char dst[]);
extern "C" void transpose(unsigned char img[],int channels,int w,int h, unsigned char dst[]);

void rotate(unsigned char img[],int channels,int w,int h, int angle, unsigned char dst[]){
    int rotate_code = (angle == 90 ? ROTATE_90_CLOCKWISE :
                       angle == 180 ? ROTATE_180 :
                       angle == 270 ? ROTATE_90_COUNTERCLOCKWISE : -1);
    if(rotate_code == -1) return;


    Mat srcMat;
    switch(channels){
        case 1:
            srcMat = cv::Mat(h, w, CV_8UC1, img);
            break;
        case 3:
            srcMat = cv::Mat(h, w, CV_8UC3, img);
            break;
        case 4:
            srcMat = cv::Mat(h, w, CV_8UC4, img);
            break;
        default:
            return;
    }

    cv::rotate(srcMat, srcMat, rotate_code);
    memcpy(dst, srcMat.data, w * h * channels);
}

void flip(unsigned char img[],int channels,int w, int h, int fcode,unsigned char dst[]){
    Mat srcMat;
    switch(channels){
        case 1:
            srcMat = cv::Mat(h, w, CV_8UC1, img);
            break;
        case 3:
            srcMat = cv::Mat(h, w, CV_8UC3, img);
            break;
        case 4:
            srcMat = cv::Mat(h, w, CV_8UC4, img);
            break;
        default:
            return;
    }

    cv::flip(srcMat, srcMat, fcode);
    memcpy(dst, srcMat.data, w * h * channels);
}

void transpose(unsigned char img[],int channels,int w,int h,unsigned char dst[]){
    Mat srcMat;
    switch(channels){
        case 1:
            srcMat = cv::Mat(h, w, CV_8UC1, img);
            break;
        case 3:
            srcMat = cv::Mat(h, w, CV_8UC3, img);
            break;
        case 4:
            srcMat = cv::Mat(h, w, CV_8UC4, img);
            break;
        default:
            return;
    }
    cv::transpose(srcMat, srcMat);
    memcpy(dst, srcMat.data, w * h * channels);
}

