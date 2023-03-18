# SLAM_lib For ARLab

## Introduction
Built shared library `locator` with **`ORB-SLAM2`**

## Environment
- Windows 11
- Visual Studio 2019
- OpenCV 4.6

## Schedule
#### Onworking
- [ ] improve plane detector with more precise
- [ ] filter tracking points on dynamic objects using `yolov5`

#### 2023.3.19
- [x] accomplish plane detector using `RANSAC` algorithm
- [x] successfully build shared lib **locator.dll** for `Unity` Render

#### 2023.3.12
- [x] successfully build `ORB-SLAM2` on `windows 11`
- [x] making simplification of `Viewer` in `ORB-SLAM2`