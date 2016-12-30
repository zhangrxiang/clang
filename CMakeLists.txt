cmake_minimum_required(VERSION 3.5)
project(clang)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp one.c mymath.c mymath.h array/array.c array/array.h taiji.cpp point/point1.c point/point2.c)
add_executable(clang ${SOURCE_FILES})