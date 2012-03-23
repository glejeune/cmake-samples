cmake_minimum_required (VERSION 2.6) 
project (SAMPLE_JAVA_TEST Java) 

set(JUNIT_JAR ${SAMPLE_JAVA_TEST_SOURCE_DIR}/junit-${JUNIT_VERSION}.jar)

maven_get_dependency(
  GROUP_ID junit
  ARTIFACT_ID junit
  VERSION ${JUNIT_VERSION}
  PACKAGING jar
  DESTINATION ${JUNIT_JAR}
  )

set(CMAKE_JAVA_INCLUDE_PATH
   ${JUNIT_JAR}
   ${SAMPLE_JAVA_MAIN_SOURCE_DIR}/${SAMPLE_JAR} 
   )
add_jar(sample-test
  com/vidal/example/SampleTest.java
  )
get_target_property(SAMPLE_TEST_JAR sample-test JAR_FILE)

add_junit_test(SAMPLE_UNITTEST
   CLASSPATH 
   ${CMAKE_JAVA_INCLUDE_PATH}
   ${SAMPLE_TEST_JAR}
   TESTS
   com.vidal.example.SampleTest
   )
