//
// Created by jianxff on 2023/3/21.
//

#include "visual.hpp"

using namespace std;
using namespace cv;

typedef pair<vector<Point3f>,Scalar_<double>> surface;

Plane chosenPlane;

void Visual::drawCubeCenter(cv::Mat &img,float scale){
    if(!mPlane.available()) {
        draw_cube = false;
        return;
    }
    if(!chosen){
        mPlane.copyTo(chosenPlane);
        chosen = true;
    }

    const float a = scale > 0 ? scale : 0.4;
    const float q2a = sqrt(2) * a;
    const float q3a = sqrt(3) * a;
    vector<Point3f> ppc = {
        world2camera(chosenPlane.plane2world(Point2f(a, 0))),
        world2camera(chosenPlane.plane2world(Point2f(-a / 2, q3a / 2))),
        world2camera(chosenPlane.plane2world(Point2f(-a / 2, -q3a / 2))),
        world2camera(chosenPlane.plane2world(Point3f(0, 0, q2a)))
    };

    vector<surface> cube = {
        surface({ppc[0],ppc[1],ppc[2]},Scalar(255,0,0)),
        surface({ppc[0],ppc[1],ppc[3]},Scalar(0,255,0)),
        surface({ppc[0],ppc[2],ppc[3]},Scalar(0,0,255)),
        surface({ppc[1],ppc[2],ppc[3]},Scalar(255,255,0)),
    };
    sort(cube.begin(),cube.end(),
         [&](surface& a, surface& b){
                float avg_az = (a.first[0].z + a.first[1].z + a.first[2].z) / 3;
                float avg_bz = (b.first[0].z + b.first[1].z + b.first[2].z) / 3;
                return avg_az > avg_bz;
    });

    for(int i = 0; i < cube.size(); i++){
        vector<Point> points2D;
        for(int j = 0; j < cube[i].first.size(); j++){
            Point2f p = camera2image(cube[i].first[j]);
            points2D.push_back(Point((int)p.x,(int)p.y));
        }
        cv::fillPoly(img,points2D,cube[i].second);
    }

}

