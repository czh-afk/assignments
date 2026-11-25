cmake_minimum_required(VERSION 3.16)
project(hw1-read-image CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(OpenCV_DIR "D:/msys64/ucrt64/lib/cmake/opencv5" CACHE PATH "")
find_package(OpenCV REQUIRED)

add_executable(hw1-read-image main.cpp)
target_include_directories(hw1-read-image PRIVATE ${OpenCV_INCLUDE_DIRS})
target_link_directories(hw1-read-image PRIVATE ${OpenCV_LIB_DIRS})
target_link_libraries(hw1-read-image ${OpenCV_LIBS})
