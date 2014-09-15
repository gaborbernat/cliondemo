cmake_minimum_required(VERSION 3.0.0 FATAL_ERROR)

SET (CMAKE_CXX_COMPILER "/usr/bin/clang++")
set(CMAKE_CXX_FLAGS "-std=c++11")

project(demo)

set(SOURCE_FILES main.cpp)
add_executable(demo ${SOURCE_FILES})
