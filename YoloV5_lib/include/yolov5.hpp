//
// Created by jianxff on 2023/3/24.
//

#ifndef YOLOV5_YOLOV5_HPP
#define YOLOV5_YOLOV5_HPP

#include <iostream>
#include <vector>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

#include "layer.h"
#include "net.h"


namespace yolo_v5 {

static inline float sigmoid(float x);

static std::vector<std::string> class_names = {
        "person", "bicycle", "car", "motorcycle", "airplane", "bus", "train", "truck", "boat", "traffic light",
        "fire hydrant", "stop sign", "parking meter", "bench", "bird", "cat", "dog", "horse", "sheep", "cow",
        "elephant", "bear", "zebra", "giraffe", "backpack", "umbrella", "handbag", "tie", "suitcase", "frisbee",
        "skis", "snowboard", "sports ball", "kite", "baseball bat", "baseball glove", "skateboard", "surfboard",
        "tennis racket", "bottle", "wine glass", "cup", "fork", "knife", "spoon", "bowl", "banana", "apple",
        "sandwich", "orange", "broccoli", "carrot", "hot dog", "pizza", "donut", "cake", "chair", "couch",
        "potted plant", "bed", "dining table", "toilet", "tv", "laptop", "mouse", "remote", "keyboard", "cell phone",
        "microwave", "oven", "toaster", "sink", "refrigerator", "book", "clock", "vase", "scissors", "teddy bear",
        "hair drier", "toothbrush"
};

class Object{
public:
    cv::Rect_<float> rect;
    int label;
    float prob;

    float intersection(const Object&) const;

};

class YoloV5{
private:
    bool inited = false;

    ncnn::Net yolov5;

    std::string model_path;
    int target_size;
    float prob_threshold;
    float nms_threshold;



    void qsort_descent_inplace(std::vector<Object>&, int left, int right);
    void qsort_descent_inplace(std::vector<Object>&);
    void nms_sorted_bboxes(const std::vector<Object>& faceobjects,
                           std::vector<int>& picked,
                           float nms_threshold,
                           bool agnostic = false
    );
    void generate_proposals(const ncnn::Mat& anchors,
                            int stride,
                            const ncnn::Mat& in_pad,
                            const ncnn::Mat& feat_blob,
                            float prob_threshold,
                            std::vector<Object>& objects
    );
public:
    bool init(std::string model_path = ".", int target_size = 640, float prob_threshold = 0.25f, float nms_threshold = 0.45f);
    int detect(const cv::Mat& img, std::vector<Object>& objects);
    void draw(cv::Mat& img, const std::vector<Object>& objects);

};






}

#endif //YOLOV5_YOLOV5_HPP
