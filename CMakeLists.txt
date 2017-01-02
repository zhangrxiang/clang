cmake_minimum_required(VERSION 3.5)
project(clang)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp one.c mymath.c mymath.h array/array.c array/array.h taiji.cpp point/point1.c point/point2.c point/point3.c structure/structure1.c structure/structure2.c union/union1.c typedef/typedef.c typedef/define.c ioput/put.c file/file.c)
add_executable(clang ${SOURCE_FILES})