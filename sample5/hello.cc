#include "hello.h"

Hello::Hello(std::string name) : name_(name) {}

void Hello::sayHello() {
  std::cout << "Hello " << name_ << "!" << std::endl;
}

extern "C" Hello *create(std::string name) {
  return new Hello(name);
}

extern "C" void destroy(Hello *h) {
  delete h;
}
