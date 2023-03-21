//
// Created by jianxff on 2023/3/21.
//

#include "visual.hpp"

using namespace std;
using namespace cv;

Point3f Visual::getVisualCenterWorld(Plane plane) {
    Mat camera = mTwc.rowRange(0, 3).col(3).clone();
    Mat V = mTwc.rowRange(0, 3).col(2).clone();
    float t = abs(plane.count(camera) / (plane.count(V) - plane.D()));
    Mat P = camera + t * V;  //// P = [x;y;z]
    return Point3f(P.at<float>(0), P.at<float>(1), P.at<float>(2));
}


Point3f Visual::camera2world(cv::Point3f p) {
    Mat P = (Mat_<float>(4,1) << p.x, p.y, p.z, 1.0);
    Mat c2w = mTwc * P; // c2w = [x;y;z;1]
    return Point3f(c2w.at<float>(0), c2w.at<float>(1), c2w.at<float>(2));
}

Point3f Visual::world2camera(cv::Point3f p) {
    Mat P = (Mat_<float>(4,1) << p.x, p.y, p.z, 1.0);
    Mat w2c = mTcw * P; // w2c = [x;y;z;1]
    return Point3f(w2c.at<float>(0), w2c.at<float>(1), w2c.at<float>(2));
}

Point2f Visual::world2image(Point3f p) {
    Mat P = (Mat_<float>(4,1) << p.x, p.y, p.z, 1.0);
    Mat w2c = mTcw * P;
    Mat c2i = mKMat * w2c.rowRange(0, 3).clone();
    c2i /= c2i.at<float>(2,0);
    return Point2f(c2i.at<float>(0,0), c2i.at<float>(1,0));
}

Point2f Visual::camera2image(Point3f p) {
    Mat P = (Mat_<float>(4,1) << p.x, p.y, p.z, 1.0);
    Mat c2i = mKMat * P.rowRange(0, 3).clone();
    c2i /= c2i.at<float>(2,0);
    return Point2f(c2i.at<float>(0,0), c2i.at<float>(1,0));
}

Point3f Visual::getCameraPosition() {
    return mCameraPosition;
}