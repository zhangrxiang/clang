cmake_minimum_required(VERSION 3.5)
project(clang)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp one.c mymath.c mymath.h array/array.c array/array.h taiji.cpp point/point1.c point/point2.c point/point3.c structure/structure1.c structure/structure2.c union/union1.c typedef/typedef.c typedef/define.c ioput/put.c file/file.c preprocessors/preprocessors1.c c-error-handling/error.c c-recursion/recursion.c c-recursion/memory-management.c stdlib/assert/assert.c stdlib/ctype/isalnum.c stdlib/ctype/isalpha.c stdlib/ctype/iscntrl.c stdlib/ctype/isdigit.c stdlib/ctype/isgraph.c stdlib/ctype/islower.c stdlib/ctype/isprint.c stdlib/ctype/ispunct.c stdlib/ctype/isspace.c stdlib/ctype/isupper.c stdlib/ctype/isxdigit.c stdlib/ctype/tolower.c stdlib/ctype/toupper.c stdlib/float/float.c stdlib/limits/limits.c stdlib/time/asctime.c stdlib/time/clock.c stdlib/time/ctime.c)
add_executable(clang ${SOURCE_FILES})