cmake_minimum_required(VERSION 2.8)
project(SAMPLE_TEST)

include_directories(
  ${SAMPLE_TEST_SOURCE_DIR}/../ext/gtest-1.6.0/include
  ${SAMPLE_TEST_SOURCE_DIR}/../ext/gtest-1.6.0
  ${SAMPLE_TEST_SOURCE_DIR}/..
  )

add_library(gtest ${SAMPLE_TEST_SOURCE_DIR}/../ext/gtest-1.6.0/src/gtest-all.cc)
add_library(gtest_main ${SAMPLE_TEST_SOURCE_DIR}/../ext/gtest-1.6.0/src/gtest_main.cc)

set(TEST_LIBS
  gtest
  gtest_main
  hello
  )

add_executable(hello_unittest hello_unittest.cc)
target_link_libraries(hello_unittest ${TEST_LIBS})
add_test(HELLO_UNITTEST hello_unittest --gtest_output=xml:TESTS-hello_unittest.xml)

