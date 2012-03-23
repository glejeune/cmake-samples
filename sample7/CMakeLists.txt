cmake_minimum_required (VERSION 2.8) 
include(FindJava)
include(UseJava)
project (JAVA_SAMPLE Java) 

set(SAMPLE_VERSION "1.0.0-SNAPSHOT")
set(CMAKE_JAVA_TARGET_OUTPUT_NAME sample-${SAMPLE_VERSION})

add_jar(sample
  com/vidal/example/Sample.java
  )
