cmake_minimum_required(VERSION 3.24)
project(YoloV5)
set(CMAKE_CXX_STANDARD 14)

include_directories(include)
include_directories("D:/.env/ncnn-20230223-android-vulkan-shared/arm64-v8a/include/ncnn")

# opencv
add_library(OpenCV_Java SHARED IMPORTED)
set_target_properties(OpenCV_Java PROPERTIES IMPORTED_LOCATION
        D:/.env/opencv4.6-android/OpenCV-android-sdk/sdk/native/libs/arm64-v8a/libopencv_java4.so)
set_target_properties(OpenCV_Java PROPERTIES IMPORTED_IMPLIB
        D:/.env/opencv4.6-android/OpenCV-android-sdk/sdk/native/libs/arm64-v8a/libopencv_java4.so)

set(OpenCV_INCLUDE_DIRS D:/.env/opencv4.6-android/OpenCV-android-sdk/sdk/native/jni/include)
include_directories( ${OpenCV_INCLUDE_DIRS})

# ncnn
set(ncnn_DIR D:/.env/ncnn-20230223-android-vulkan-shared/arm64-v8a/lib/cmake/ncnn)
find_package(ncnn REQUIRED)

file(GLOB_RECURSE include "include/*.hpp")
file(GLOB_RECURSE src "src/*.cpp")


add_library(yolov5 SHARED
        ${include}
        ${src}
        )

target_link_libraries(yolov5
        OpenCV_Java
        ncnn
        )
