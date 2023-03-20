//
// Created by jianxff on 2023/3/14.
//

#include "plane.hpp"
using namespace std;
using namespace cv;
Plane::Plane() {
    mA = 0;mB = 0;mC = 0;mD = 0;
    mAvailable = false;
}

void Plane::copyTo(Plane & p) {
    p.mA = mA;p.mB = mB;p.mC = mC;p.mD = mD;
    p.mAvailable = mAvailable;
}

void Plane::reset() {
    mA = 0;mB = 0;mC = 0;mD = 0;
    mAvailable = false;
}

bool Plane::available() {
    return mAvailable;
}

bool Plane::compute(Point3f p1, Point3f p2, Point3f p3) {
    // whether in the same line
    if( abs(p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y)) <= mSameLineThreshold){
        mAvailable = false;
    }else{
        // compute plane parameters
        mA = (p2.y - p1.y) * (p3.z - p1.z) - (p2.z - p1.z) * (p3.y - p1.y);
        mB = (p2.z - p1.z) * (p3.x - p1.x) - (p2.x - p1.x) * (p3.z - p1.z);
        mC = (p2.x - p1.x) * (p3.y - p1.y) - (p2.y - p1.y) * (p3.x - p1.x);
        mD = -(mA * p1.x + mB * p1.y + mC * p1.z);
        mAvailable = true;
    }
    return mAvailable;
}

float Plane::distance(Point3f p) {
    return abs(mA * p.x + mB * p.y + mC * p.z + mD) / sqrt(mA * mA + mB * mB + mC * mC);
}

bool Plane::fit(std::vector<cv::Point3f>& p, int iterations, float threshold) {
    if(p.size() < 3)  return false;

    // RANSAC plane detection
    srand(time(nullptr));
    int max_inliers = 0;

    mAvailable = false;

    while(--iterations){
        int index1 = rand() % p.size();
        int index2 = rand() % p.size();
        int index3 = rand() % p.size();
        if(index1 == index2 || index1 == index3 || index2 == index3){
            ++iterations;
            continue;
        }

        Plane tmp;
        tmp.compute(p[index1], p[index2], p[index3]);
        if(!tmp.available()) {
            continue;
        }

        // count points inliers
        int inliers = 0;
        for(auto& itPt:p) {
            if (tmp.distance(itPt) < threshold) {
                inliers++;
            }
        }
        if(inliers > max_inliers){
            max_inliers = inliers;
            tmp.copyTo(*this);
        }

        if(inliers >= p.size() * 0.9)  break;
    }
//    cout << "max inliers: " << max_inliers <<" total: " << p.size()  << endl;
    return mAvailable;
}

Mat Plane::normal() {
    Mat n = (Mat_<float>(1,3) << mA, mB, mC);
    cv::normalize(n, n);
    return n;
}

float Plane::count(Mat p) {
    return mA * p.at<float>(0,0) + mB * p.at<float>(1,0) + mC * p.at<float>(2,0) + mD;
}

float Plane::count(Point3f p) {
    return mA * p.x + mB * p.y + mC * p.z + mD;
}

float Plane::countZ(float x, float y) {
    return -1 * (mA * x + mB * y + mD) / mC;
}

float Plane::countZ(cv::Point3f &p) {
    p.z = -1 * (mA * p.x + mB * p.y + mD) / mC;
    return p.z;
}