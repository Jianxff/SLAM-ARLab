//
// Created by jianxff on 2023/3/21.
//
#include "visual.hpp"

using namespace std;
using namespace cv;


Visual::Visual() {
    mpSLAM = nullptr;
    mfTimeStamps = std::chrono::steady_clock::now();
    mCameraPosition = Point3f(0,0,0);
}

void Visual::release() {
    mpSLAM->Shutdown();
}

void Visual::setDebug(bool d) {
    mDebug = d;
}

bool Visual::debug() {
    return mDebug;
}

void Visual::init(string path, Size sz) {
    mImageSize = sz;
    if(sz.width == 0 || sz.height == 0) {
        cout << "No Image Size Set" << endl;
        ::abort();
    }

//    string image_path = path + "/indicator.png";
    string voc_path = path + "/ORBvoc.bin";
    string settings_path = path + "/ORB.yaml";

    // read settings
    FileStorage fSetting(settings_path, FileStorage::READ);

    mDebug = (int)fSetting["Debug"];

    float camera_fx = fSetting["Camera.fx"];
    float camera_fy = fSetting["Camera.fy"];
    camera_fx = camera_fx == 0 ? mImageSize.width : camera_fx;
    camera_fy = camera_fy == 0 ? mImageSize.width : camera_fy;


    mKMat = (Mat_<float>(3, 3) << camera_fx,0,mImageSize.width / 2,
            0,camera_fy,mImageSize.height / 2,
            0,0,1);

    float choose_range = fSetting["ChooseRange"];
    if(choose_range > 0)
        mChooseRange = choose_range;

    fSetting.release();

    // read indicator
//    mIndicatorImage = cv::imread(image_path, cv::IMREAD_UNCHANGED);
//    mIndicatorCorner = {
//            Point2f (0,0),
//            Point2f (0,mIndicatorImage.rows - 1),
//            Point2f (mIndicatorImage.rows - 1,mIndicatorImage.cols - 1),
//            Point2f (mIndicatorImage.cols - 1,0),
//
//    };
//    // black mask
//    mImageMask = cv::Mat::zeros(mImageSize.height, mImageSize.width, CV_8UC4);

    // orb-slam system init
    mpSLAM = new ORB_SLAM2::System(voc_path, settings_path, ORB_SLAM2::System::MONOCULAR);
}

// get functions
Mat Visual::getTcw() {
    return mTcw.clone();
}

Mat Visual::getTwc() {
    return mTwc.clone();
}

Size Visual::getImageSize() {
    return mImageSize;
}

Plane Visual::getCurrnetPlane() {
    return mPlane;
}

