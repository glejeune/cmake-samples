#include "hello.h"

Hello::Hello(std::string name) : name_(name) {}

std::string Hello::sayHello() {
  return std::string("Hello ").append(name_);
}
