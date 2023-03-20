//
// Created by jianxff on 2023/3/8.
//

#include "visual.hpp"

using namespace std;
using namespace cv;

Visual::Visual() {
    mpSLAM = nullptr;
    mfTimeStamps = std::chrono::steady_clock::now();
}

void Visual::release() {
    mpSLAM->Shutdown();
}

void Visual::setDebug(bool d) {
    mDebug = d;
}

void Visual::init(string path, Size sz) {
    string image_path = path + "/indicator.png";
    string voc_path = path + "/ORBvoc.bin";
    string settings_path = path + "/ORB.yaml";

    // read settings
    FileStorage fSetting(settings_path, FileStorage::READ);
    mImageSize.width = fSetting["Image.width"];
    mImageSize.height = fSetting["Image.height"];
    mDebug = (int)fSetting["Debug"];

//    mKMat = (Mat_<float>(3, 3) << fSetting["Camera.fx"],0,fSetting["Camera.cx"],
//            0,fSetting["Camera.fy"],fSetting["Camera.cy"],
//            0,0,1);
    if(sz.width != 0 && sz.height != 0) mImageSize = sz;

    mKMat = (Mat_<float>(3, 3) << mImageSize.width,0,mImageSize.width / 2,
            0,mImageSize.width,mImageSize.height / 2,
            0,0,1);
    fSetting.release();

    // read indicator
    mIndicatorImage = cv::imread(image_path, cv::IMREAD_UNCHANGED);
    mIndicatorCorner = {
            Point2f (0,0),
            Point2f (mIndicatorImage.rows - 1,0),
            Point2f (mIndicatorImage.rows - 1,mIndicatorImage.cols - 1),
            Point2f (0,mIndicatorImage.cols - 1),
    };
    // black mask
    mImageMask = cv::Mat::zeros(mImageSize.height, mImageSize.width, CV_8UC4);

    // orb-slam system init
    mpSLAM = new ORB_SLAM2::System(voc_path, settings_path, ORB_SLAM2::System::MONOCULAR);
}

int Visual::process(Mat &img, Mat &output) {
    if(img.channels() == 3) cvtColor(img, output, COLOR_BGR2BGRA);
    else img.copyTo(output);

    // tracking
    chrono::steady_clock::time_point timeStamp = std::chrono::steady_clock::now();
    float diff = chrono::duration_cast<chrono::duration<float> >(timeStamp - mfTimeStamps).count();
    mTcw = mpSLAM->TrackMonocular(img, diff);
    if(!mTcw.empty()) mTwc = mTcw.inv();
    int status = mpSLAM->GetTrackingState();

    Point2f center = Point2f(mImageSize.width / 2, mImageSize.height / 2);

    // slam not on, draw black mask
    if(status != 2){
        mPlane.reset();
        addWeighted(output, 0.3, mImageMask, 0.9, 0, output);
        // set not transparent
        putText(output, "move your device", Point(center.x - 165,center.y), FONT_HERSHEY_DUPLEX, 1.2, Scalar(255, 255, 255), 2);
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
    if(mDebug){
        Point3f offset = Point3f(0,0,0.6);
        Point2f po = world2image(Point3f(0,0,0) + offset);
        Point2f px = world2image(Point3f(0.3,0,0) + offset);
        Point2f py = world2image(Point3f(0,0.3,0) + offset);
        Point2f pz = world2image(Point3f(0,0,0.3) + offset);
        cv::line(output, po, px, cv::Scalar(0, 0, 255),2);
        cv::line(output, po, py, cv::Scalar(0, 255, 0) ,2);
        cv::line(output, po, pz, cv::Scalar(255, 0, 0) ,2);
    }

//    Point2f po = world2image(mDebugPoint);
//    Point3f cameraPose = Point3f(mTwc.at<float>(0,3), mTwc.at<float>(1,3), mTwc.at<float>(2,3));
//    //Point2f poc = world2image(cameraPose);
//    Point2f po2 = world2image(2 * mDebugPoint - cameraPose);
////    logging << "PO : " << mDebugPoint.x << "," << mDebugPoint.y << "," << mDebugPoint.z << endl;
//    cv::circle(output, po, 4, cv::Scalar( 211,0,148),-1);
//    cv::circle(output, po2, 4, cv::Scalar( 0,165,25),-1);
//    cv::line(output, po, po2, cv::Scalar(186,231,255 ),1);


    return 0;
}


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
//    cout << "theta: " << theta << endl;
    if(theta <= 75) plane.copyTo(mPlane);

    return mPlane.available();
}



// test function

Point3f Visual::getCameraCenterWorld(Plane plane) {
    Mat camera = mTwc.rowRange(0, 3).col(3).clone();
    Mat V = mTwc.rowRange(0, 3).col(2).clone();
    float t = abs(plane.count(camera) / (plane.count(V) - plane.D()));
    Mat P = camera + t * V;  //// P = [x;y;z]
    return Point3f(P.at<float>(0), P.at<float>(1), P.at<float>(2));
}


void Visual::showIndicator(cv::Mat &dest) {
    if(!mPlane.available()) return;
    Point3f center = getCameraCenterWorld(mPlane);  // get camera line in the plane
//    Point3f center = mPlane.avgCenter();

    if(mDebug){
        Mat normal = mPlane.normal();
        if(normal.at<float>(1) > 0) normal = -normal;  // make sure normal is in the same direction with camera visual line
        Point3f n = Point3f(normal.at<float>(0), normal.at<float>(1), normal.at<float>(2));
        Point3f c1 = center + n * 0.06;
        Point2f c1c = world2image(c1), cc = world2image(center);
        cv::line(dest, cc, c1c, cv::Scalar(0, 240, 0), 2);
    }

    const float plane_range = 0.05 * world2camera(center).z;
    vector<Point3f> points = {
            Point3f(center.x - plane_range, center.y + plane_range, 0),
            Point3f(center.x - plane_range, center.y - plane_range, 0),
            Point3f(center.x + plane_range, center.y - plane_range, 0),
            Point3f(center.x + plane_range, center.y + plane_range, 0)
    };
    vector<Point2f> points2f;
    for(int i = 0; i < points.size(); i++){
        mPlane.countZ(points[i]);
        points2f.push_back(world2image(points[i]));
    }

    Mat transform_mat = getPerspectiveTransform(mIndicatorCorner, points2f);
    Mat warped(dest.size(), CV_8UC4, Scalar(0, 0, 0, 1));
    warpPerspective(mIndicatorImage, warped, transform_mat, dest.size());

    addWeighted(dest, 1.0, warped, 1.0, 0.0, dest);
}

//void Visual::preDrawPoint3D(cv::Point3f p){
//    // mDebugPoint = p;
//    mDebugPoint = getCameraCenterWorld(mPlane);
//}

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

// point convert functions

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