//
// Created by jianxff on 2023/3/15.
//

#ifndef LABAR_PLANE_H
#define LABAR_PLANE_H
#include "common.hpp"

class Plane{
    bool mAvailable = false;
    float mA = 0,mB = 0,mC = 0,mD = 0;
    const float mSameLineThreshold = 1e-3;
    cv::Mat mTwp;
    cv::Mat mTpw;

public:
    Plane();
    void reset();
    // parameter fitting
    bool available();
    bool compute(cv::Point3f, cv::Point3f, cv::Point3f);
    bool fit(std::vector<cv::Point3f>&, int iterations = 500, float threshold = 0.01);

    // calculate Twp
    void computeTwp(cv::Point3f original);
    cv::Point3f plane2world(cv::Point3f pp);
    cv::Point3f plane2world(cv::Point2f pp);


    // calculation
    float distance(cv::Point3f);
    float countZ(float x, float y);
    float countZ(cv::Point3f &);
    float count(cv::Mat);
    float count(cv::Point3f);

    // getter
    cv::Mat normal();
    float A(){return mA;}
    float B(){return mB;}
    float C(){return mC;}
    float D(){return mD;}

    // copy
    void copyTo(Plane&);
};
#endif //LABAR_PLANE_H
