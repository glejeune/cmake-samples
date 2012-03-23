#include "hello.h"
#include "gtest/gtest.h"

TEST(Mime, TestMime) {
  Hello hello("CMake");
  EXPECT_EQ("Hello CMake", hello.sayHello());
}
