# SLAM_lib For ARLab

## Introduction
Built shared library `locator` with **`ORB-SLAM2`**

## Environment
- Windows 11
- Android Studio 2022.1.1
- Visual Studio 2019
- Android NDK 21.3.6528147
- OpenCV 4.6

## Schedule
#### Onworking
- [ ] improve plane detector with more precise
- [ ] filter tracking points on dynamic objects using `yolov5`

#### 2023.3.21
- [x] add building target at `arm64` for Android devices

#### 2023.3.19
- [x] accomplish plane detector using `RANSAC` algorithm
- [x] successfully build shared lib **locator.dll** for `Unity` Render

#### 2023.3.12
- [x] successfully build `ORB-SLAM2` on `windows 11`
- [x] making simplification of `Viewer` in `ORB-SLAM2`

## Notice
> when building on arm64, you may need to add the following properties to your compiler
> -DCMAKE_TOOLCHAIN_FILE=${NDK_CMAKE_PATH}/android.toolchain.cmake
> -DCMAKE_SYSTEM_NAME=Android
> -DANDROID_ABI=arm64-v8a
> -DCMAKE_ANDROID_NDK=${NDK_PATH}
> -DCMAKE_SYSTEM_VERSION=24
> -DCMAKE_ANDROID_NDK_TOOLCHAIN_VERSION=clang
> -DCMAKE_CXX_STANDARD=14
> -DCMAKE_MAKE_PROGRAM=${NDK_MAKE_PROGRAM_PATH}