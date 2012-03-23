cmake_minimum_required (VERSION 2.8) 
project (SAMPLE_JAVA Java) 

set(CMAKE_MODULE_PATH ${SAMPLE_JAVA_SOURCE_DIR}/cmake ${CMAKE_MODULE_PATH})

include(FindJava)
include(UseJava)
include(Maven)
include(JUnit)

set(JUNIT_VERSION "4.10")
set(MAVEN_DEFAULT_REPOSITORY_ID "central-proxy")
set(MAVEN_DEFAULT_URL "https://repository.sonatype.org/service/local/repositories/central-proxy/")

enable_testing()

add_subdirectory(main)
add_subdirectory(test)
