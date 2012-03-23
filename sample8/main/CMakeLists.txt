cmake_minimum_required (VERSION 2.8) 
project (SAMPLE_JAVA_MAIN Java) 

set(SAMPLE_VERSION "1.0.0-SNAPSHOT")
set(CMAKE_JAVA_TARGET_OUTPUT_NAME sample-${SAMPLE_VERSION})

add_jar(sample
  com/vidal/example/Sample.java
  )
get_target_property(SAMPLE_JAR sample JAR_FILE)
