//
// Created by jianxff on 2023/3/8.
//

#ifndef ARAR_COMMON_H
#define ARAR_COMMON_H


#include <iostream>
#include <vector>
#include <set>
#include <opencv2/opencv.hpp>
#include <fstream>

extern std::ofstream logging;
void logInit(std::string path);
cv::Mat cross(cv::Mat,cv::Mat);

#endif //ARAR_COMMON_H
