cmake_minimum_required(VERSION 3.24)
project(ARLab)
set(CMAKE_CXX_STANDARD 14)
set(YOLO_V5 ON)



# set target type for x64 or arm64
#set(TARGET_TYPE "x64")
set(TARGET_TYPE "arm64")

include_directories(include)
include_directories(Thirdparty/SLAM/include)
include_directories(Thirdparty)

#build for x64 platform
if(TARGET_TYPE STREQUAL "x64")
    message("Building for x64")
    set(LIBS_DIR  ${CMAKE_BINARY_DIR}/../libs)
    set(SLAM_LIB_NAME slam.dll)
    set(G2O_LIB_NAME g2o.dll)
    set(OpenCV_DIR D:/.env/opencv4.6/build/x64/vc15/lib)
    find_package( OpenCV REQUIRED )
    include_directories( ${OpenCV_INCLUDE_DIRS})

elseif(TARGET_TYPE STREQUAL "arm64")
    message("Building for arm64")
    set(LIBS_DIR  ${CMAKE_BINARY_DIR}/../libs/Android)
    set(SLAM_LIB_NAME libslam.so)
    set(G2O_LIB_NAME libg2o.so)
    add_library(OpenCV_Java SHARED IMPORTED)
    set_target_properties(OpenCV_Java PROPERTIES IMPORTED_LOCATION
            D:/.env/opencv4.6-android/OpenCV-android-sdk/sdk/native/libs/arm64-v8a/libopencv_java4.so)
    set_target_properties(OpenCV_Java PROPERTIES IMPORTED_IMPLIB
            D:/.env/opencv4.6-android/OpenCV-android-sdk/sdk/native/libs/arm64-v8a/libopencv_java4.so)

    set(OpenCV_INCLUDE_DIRS D:/.env/opencv4.6-android/OpenCV-android-sdk/sdk/native/jni/include)
    include_directories( ${OpenCV_INCLUDE_DIRS})


    if(YOLO_V5)
        # ncnn
        message("Linking YoloV5")
        include_directories("D:/.env/ncnn-20230223-android-vulkan-shared/arm64-v8a/include/ncnn")
        add_library(ncnn SHARED IMPORTED)
        set_target_properties(ncnn PROPERTIES IMPORTED_LOCATION
                D:/.env/ncnn-20230223-android-vulkan-shared/arm64-v8a/lib/libncnn.so)
        set_target_properties(ncnn PROPERTIES IMPORTED_IMPLIB
                D:/.env/ncnn-20230223-android-vulkan-shared/arm64-v8a/lib/libncnn.so)

        add_library(yolov5 SHARED IMPORTED)
        set_target_properties(yolov5 PROPERTIES IMPORTED_LOCATION ${LIBS_DIR}/libyolov5.so)
        set_target_properties(yolov5 PROPERTIES IMPORTED_IMPLIB ${LIBS_DIR}/libyolov5.so)

    endif()
else()
    message("Unknown target type")
endif()

# g2o
if(EXISTS ${LIBS_DIR}/${G2O_LIB_NAME})
    message("Linking g2o")
    add_library(g2o SHARED IMPORTED)
    set_target_properties(g2o PROPERTIES IMPORTED_IMPLIB ${LIBS_DIR}/${G2O_LIB_NAME})
    if(TARGET_TYPE STREQUAL "arm64")
        set_target_properties(g2o PROPERTIES IMPORTED_LOCATION ${LIBS_DIR}/${G2O_LIB_NAME})
    endif()

else()
    message("Rebuilding g2o")
    file(GLOB_RECURSE g2o_types "Thirdparty/g2o/g2o/types/*.h" "Thirdparty/g2o/g2o/types/*.hpp"  "Thirdparty/g2o/g2o/types/*.cpp" )
    file(GLOB_RECURSE g2o_solvers "Thirdparty/g2o/g2o/solvers/*.h")
    file(GLOB_RECURSE g2o_core "Thirdparty/g2o/g2o/core/*.h" "Thirdparty/g2o/g2o/core/*.hpp" "Thirdparty/g2o/g2o/core/*.cpp")
    file(GLOB_RECURSE g2o_stuff "Thirdparty/g2o/g2o/stuff/*.h" "Thirdparty/g2o/g2o/stuff/*.c" "Thirdparty/g2o/g2o/stuff/*.cpp")

    add_library(g2o SHARED
            ${g2o_types}
            ${g2o_solvers}
            ${g2o_core}
            ${g2o_stuff}
            )
endif()

# slam
if(EXISTS ${LIBS_DIR}/${SLAM_LIB_NAME})
    message("Linking SLAM")
    add_library(slam SHARED IMPORTED)
    set_target_properties(slam PROPERTIES IMPORTED_IMPLIB ${LIBS_DIR}/${SLAM_LIB_NAME})
    if(TARGET_TYPE STREQUAL "arm64")
        set_target_properties(slam PROPERTIES IMPORTED_LOCATION ${LIBS_DIR}/${SLAM_LIB_NAME})
    endif()

else()
    message("Rebuilding SLAM")
    file(GLOB_RECURSE slam_include "Thirdparty/SLAM/include/*.h")
    file(GLOB_RECURSE slam_src "Thirdparty/SLAM/src/*.cc")
    file(GLOB_RECURSE dbow2 "Thirdparty/DBoW2/DBoW2/*.h" "Thirdparty/DBoW2/DBoW2/*.cpp")
    file(GLOB_RECURSE dutils "Thirdparty/DBoW2/DUtils/*.h" "Thirdparty/DBoW2/DUtils/*.cpp")

    add_library(slam SHARED
            ${slam_include}
            ${slam_src}
            ${dbow2}
            ${dutils}
            )

    target_link_libraries(slam
            g2o
            OpenCV_Java
            )
endif()

# main shared library
file(GLOB_RECURSE include "include/*.hpp")
file(GLOB_RECURSE src_x64 "src_x64/*.cpp")
file(GLOB_RECURSE src_arm64 "src_arm64/*.cpp")

if(TARGET_TYPE STREQUAL "x64")
    add_library(locator SHARED
            ${include}
            ${src_x64}
            )

    target_link_libraries(locator
            ${OpenCV_LIBS}
            slam
            g2o
            )

elseif(TARGET_TYPE STREQUAL "arm64")
    add_library(locator SHARED
            ${include}
            ${src_arm64}
            )

    target_link_libraries(locator
            OpenCV_Java
            slam
            g2o
            yolov5
            ncnn
            )
endif()


# extend cvTools
file(GLOB_RECURSE cvtool_src "cvTools/*.cpp")
add_library(cvTools SHARED
        ${cvtool_src}
        )

target_link_libraries(cvTools
        OpenCV_Java
        )


