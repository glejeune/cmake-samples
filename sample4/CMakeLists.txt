cmake_minimum_required(VERSION 2.8)
project(SAMPLE2)

add_library(hello SHARED hello.cc)

add_executable(sample2 test.cc)
target_link_libraries(sample2 hello)
