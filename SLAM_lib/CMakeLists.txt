cmake_minimum_required(VERSION 3.24)
project(ARLab)
set(LIBS_DIR  ${CMAKE_BINARY_DIR}/../libs)
set(SLAM_LIB_NAME slam.lib)
set(G2O_LIB_NAME g2o.lib)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
include_directories(Thirdparty/SLAM/include)
include_directories(Thirdparty)


set(OpenCV_DIR D:/.env/opencv4.6/build/x64/vc15/lib)
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS})

if(EXISTS ${LIBS_DIR}/${SLAM_LIB_NAME})
    message("Coping SLAM")
    file(COPY ${LIBS_DIR}/${SLAM_LIB_NAME} DESTINATION ${CMAKE_BINARY_DIR})
endif()
if(EXISTS ${LIBS_DIR}/${G2O_LIB_NAME})
    message("Coping G2o")
    file(COPY ${LIBS_DIR}/${G2O_LIB_NAME} DESTINATION ${CMAKE_BINARY_DIR})
endif()

if(EXISTS ${CMAKE_BINARY_DIR}/${SLAM_LIB_NAME})
    message("Linking SLAM")
    add_library(libslam STATIC IMPORTED )
    set_target_properties(libslam PROPERTIES IMPORTED_LOCATION ${CMAKE_BINARY_DIR}/${SLAM_LIB_NAME})


else()
    message("Rebuilding SLAM")
    if(EXISTS ${CMAKE_BINARY_DIR}/${G2O_LIB_NAME})
        message("Linking g2o")
        add_library(g2o STATIC IMPORTED )
        set_target_properties(g2o PROPERTIES IMPORTED_LOCATION ${CMAKE_BINARY_DIR}/${G2O_LIB_NAME})

    else()
        message("Rebuilding g2o")
        file(GLOB_RECURSE g2o_types "Thirdparty/g2o/g2o/types/*.h" "Thirdparty/g2o/g2o/types/*.hpp"  "Thirdparty/g2o/g2o/types/*.cpp" )
        file(GLOB_RECURSE g2o_solvers "Thirdparty/g2o/g2o/solvers/*.h")
        file(GLOB_RECURSE g2o_core "Thirdparty/g2o/g2o/core/*.h" "Thirdparty/g2o/g2o/core/*.hpp" "Thirdparty/g2o/g2o/core/*.cpp")
        file(GLOB_RECURSE g2o_stuff "Thirdparty/g2o/g2o/stuff/*.h" "Thirdparty/g2o/g2o/stuff/*.c" "Thirdparty/g2o/g2o/stuff/*.cpp")

        add_library(libg2o STATIC
                ${g2o_types}
                ${g2o_solvers}
                ${g2o_core}
                ${g2o_stuff}
                )
    endif()

    file(GLOB_RECURSE slam_include "Thirdparty/SLAM/include/*.h")
    file(GLOB_RECURSE slam_src "Thirdparty/SLAM/src/*.cc")
    file(GLOB_RECURSE dbow2 "Thirdparty/DBoW2/DBoW2/*.h" "Thirdparty/DBoW2/DBoW2/*.cpp")
    file(GLOB_RECURSE dutils "Thirdparty/DBoW2/DUtils/*.h" "Thirdparty/DBoW2/DUtils/*.cpp")

    add_library(libslam STATIC
            ${slam_include}
            ${slam_src}
            ${dbow2}
            ${dutils}
            )

    target_link_libraries(libslam
            libg2o
            ${OpenCV_LIBS}
            )

endif()

file(GLOB_RECURSE include "include/*.hpp")
file(GLOB_RECURSE src "src/*.cpp")

#add_executable(LabARtest
#        ${include}
#        ${src}
#        )
#
#target_link_libraries(LabARtest
#        ${OpenCV_LIBS}
#        slam
#        g2o
#        )

add_library(locator SHARED
        ${include}
        ${src}
        )

target_link_libraries(locator
        ${OpenCV_LIBS}
        slam
        g2o
        )

