//
// Created by jianxff on 2023/3/21.
//
#include "visual.hpp"

using namespace std;
using namespace cv;

/**
 * tracking and process image output
 * @param img input image
 * @param output output image
 * @return
 */
int Visual::process(Mat &img, Mat &output, const vector<Rect2f>& exceptArea) {
    img.copyTo(output);

    // tracking
    chrono::steady_clock::time_point timeStamp = std::chrono::steady_clock::now();
    float diff = chrono::duration_cast<chrono::duration<float> >(timeStamp - mfTimeStamps).count();

    // resize image and change it to gray only

//    float scale_x = mImageSize.width / 300, scale_y = mImageSize.height / 400;
    Mat img_gray;
//    cv::resize(img, img, cv::Size(),0.5,0.5);

    cvtColor(img, img_gray, COLOR_BGR2GRAY);
    mTcw = mpSLAM->TrackMonocular(img_gray, diff, exceptArea);
    if(!mTcw.empty()){
        mTwc = mTcw.inv();
        mCameraPosition = Point3f(mTwc.at<float>(0,3), mTwc.at<float>(1,3), mTwc.at<float>(2,3));
    }
    int status = mpSLAM->GetTrackingState();

    Point2f center = Point2f(mImageSize.width / 2, mImageSize.height / 2);
    // slam not on, draw black mask
    if(status != 2){
        mPlane.reset();
//        addWeighted(output, 0.3, mImageMask, 0.9, 0, output);
//        // set not transparent
        putText(output, "code " + to_string(status), Point(mImageSize.width - 120, 40), FONT_HERSHEY_DUPLEX, 0.8, Scalar(0, 215, 255), 1);
        return -1;
    }

    // get tracked points
    mvPlanePoints.clear();
    mvpMapPoints = mpSLAM->GetTrackedMapPoints();
    mvKeyPoints = mpSLAM->GetTrackedKeyPointsUn();

    // get points to fit plane
    for(int i = 0; i < mvKeyPoints.size(); i++){
        if(mvpMapPoints[i] != nullptr){
            Mat point_mat = mvpMapPoints[i]->GetWorldPos();
            Point3f mp(point_mat.at<float>(0), point_mat.at<float>(1), point_mat.at<float>(2));
            Point2f kp = mvKeyPoints[i].pt;

            // choose points in the center to fit plane
            if(center.x - mChooseRange <= kp.x && kp.x <= center.x + mChooseRange &&
               center.y - mChooseRange <= kp.y && kp.y <= center.y + mChooseRange)
            {
                mvPlanePoints.emplace_back(mp);
                if(mDebug) cv::circle(output, kp, 3, cv::Scalar(255, 255, 0));
            }
            else{
                if(mDebug) cv::circle(output, kp, 3, cv::Scalar(0, 255, 0));
            }
        }
    }

    // put origin world point
//    if(mDebug){
//        Point3f offset = Point3f(0,0,0);
//        Point2f po = world2image(Point3f(0,0,0) + offset);
//        Point2f px = world2image(Point3f(0.1,0,0) + offset);
//        Point2f py = world2image(Point3f(0,0.1,0) + offset);
//        Point2f pz = world2image(Point3f(0,0,0.1) + offset);
//        cv::line(output, po, px, cv::Scalar(0, 0, 255),2);
//        cv::line(output, po, py, cv::Scalar(0, 255, 0) ,2);
//        cv::line(output, po, pz, cv::Scalar(255, 0, 0) ,2);
//    }

    return 0;
}


/**
 * plane detection
 * @param iterations iter times
 * @param threshold iter threshold
 * @return
 */
bool Visual::detect(int iterations, float threshold) {

    Plane plane;
    if(mvPlanePoints.size() < 3){
        mPlane.reset();
        return false;
    }

    if(!plane.fit(mvPlanePoints, iterations, threshold))
        return false;

    // calculate angle between camera visual line and plane normal
    Point3f p_o = camera2world(Point3f(0, 0, 0));
    Point3f p_z = camera2world(Point3f(0, 0, 1));
    Mat plane_c = (Mat_<float>(1,3) << p_z.x - p_o.x, p_z.y - p_o.y, p_z.z - p_o.z);
    Mat plane_n = plane.normal();

    // choose proper angle
    Mat temp = plane_c * plane_n.t();
    float cos_theta = temp.at<float>(0) / (norm(plane_c) * norm(plane_n));
    float theta = acos(cos_theta) * 180 / CV_PI;

    theta = theta > 90 ? 180 - theta : theta;
//    if(mDebug)  cout << "theta: " << theta << endl;

    if(theta <= 80){
        plane.copyTo(mPlane);
        mPlane.computeTwp(getVisualCenterWorld(mPlane));  // compute plane to world transform matrix
    }

    Point3f cp = getCameraPosition();
    Point3f vc = getVisualCenterWorld(mPlane);


    return mPlane.available();
}


/**
 * show plane indicator
 * @param dest
 */
//void Visual::showIndicator(cv::Mat &dest) {
//    if(!mPlane.available()) return;
//
//    Point3f center = getVisualCenterWorld(mPlane);  // get camera line in the plane
//
//    float dist = norm(center - mCameraPosition);
//    const float offset = 0.12 * dist / 1.15;
//    vector<Point2f> pps = {
//            Point2f(-offset,offset),Point2f(-offset,-offset),Point2f(offset,-offset),Point2f(offset,offset)
//    };
//
//    vector<Point2f> ppw;
//    for(int i = 0; i < pps.size(); i++){
//        ppw.push_back(world2image(mPlane.plane2world(pps[i])));
//    }
//
//    Mat transform_mat = getPerspectiveTransform(mIndicatorCorner, ppw);
//    Mat warped(dest.size(), CV_8UC4, Scalar(0, 0, 0, 0));
//    warpPerspective(mIndicatorImage, warped, transform_mat, dest.size());
//    addWeighted(dest, 1.0, warped, 1.0, 0.0, dest);
//}