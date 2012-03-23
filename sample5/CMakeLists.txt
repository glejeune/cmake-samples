cmake_minimum_required(VERSION 2.8)
project(SAMPLE2)

if(${CMAKE_SYSTEM_NAME} MATCHES "Windows")
  add_definitions(-D_WIN32)
elseif(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
  add_definitions(-D__linux)
elseif(${CMAKE_SYSTEM_NAME} MATCHES "Darwin")
  add_definitions(-D__darwin)
endif()

add_library(hello SHARED hello.cc)


add_executable(sample2 test.cc)
