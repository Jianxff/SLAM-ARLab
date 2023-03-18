//
// Created by jianxff on 2023/3/8.
//

#ifndef ARAR_VISUAL_HPP
#define ARAR_VISUAL_HPP

#include "common.hpp"
#include "plane.hpp"
#include "SLAM/include/System.h"

class Visual {
    // debug
    bool mDebug = false;

    // integrated images and params
    cv::Size2d mImageSize;
    cv::Mat mImageMask;
    cv::Mat mIndicatorImage;
    std::vector<cv::Point2f> mIndicatorCorner;

    // Camera Intrinsic Matrix K
    cv::Mat mKMat;

    // time stamp
    std::chrono::steady_clock::time_point mfTimeStamps;

    // orb-slam and tracking
    ORB_SLAM2::System *mpSLAM;
    std::vector<ORB_SLAM2::MapPoint *> mvpMapPoints;
    std::vector<cv::KeyPoint> mvKeyPoints;
    std::vector<cv::Point3f>  mvPlanePoints;
    cv::Mat mTcw, mTwc;

    // Plane detect
    const float mChooseRange = 80;
    Plane mPlane;

    // functions
    cv::Point2f world2image(cv::Point3f);
    cv::Point3f camera2world(cv::Point3f);
    cv::Point3f world2camera(cv::Point3f);

public:
    Visual();
    void setDebug(bool);
    void release();
    void init(std::string path);
    int process(cv::Mat &img, cv::Mat &output);
    bool detect(int iterations = 500, float threshold = 0.01);
    void showIndicator(cv::Mat &dest);
    Plane getCurrnetPlane();
    cv::Mat getTcw();
    cv::Mat getTwc();
//    cv::Mat getR();
//    cv::Mat getT();
    // test function
    cv::Point3f getCameraCenterWorld(Plane);
};


#endif //ARAR_VISUAL_HPP
