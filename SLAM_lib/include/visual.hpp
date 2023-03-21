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
    cv::Point3f mCameraPosition;

    // Plane detect
    float mChooseRange = 80;
    Plane mPlane;

    // points transform
    cv::Point3f camera2world(cv::Point3f);
    cv::Point3f world2camera(cv::Point3f);
    cv::Point2f world2image(cv::Point3f);
    cv::Point2f camera2image(cv::Point3f);



public:
    // initialize
    Visual();
    void init(std::string path, cv::Size imageSize = cv::Size(0,0));

    // tracking points and process image
    int process(cv::Mat &img, cv::Mat &output);

    // plane detect and indicator
    bool detect(int iterations = 500, float threshold = 0.01);
    void showIndicator(cv::Mat &dest);
    Plane getCurrnetPlane();

    // debug and release
    void setDebug(bool);
    void release();

    // get visual center points in the world coordinate
    cv::Point3f getVisualCenterWorld(Plane);

    // getter functions
    cv::Size getImageSize();
    cv::Point3f getCameraPosition();
    cv::Mat getTcw();
    cv::Mat getTwc();

    /**
     * test functions
     */
     // draw cubes
     bool draw_cube = false;
     bool chosen = false;
     void drawCubeCenter(cv::Mat &img, float scale = 0.2);

};


#endif //ARAR_VISUAL_HPP
