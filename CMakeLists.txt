cmake_minimum_required(VERSION 3.1.0) 
set (CMAKE_CXX_STANDARD 11)
project (helloworld)
include_directories(${PROJECT_SOURCE_DIR})
add_executable(main 
main.cpp helper.h helper.cpp)