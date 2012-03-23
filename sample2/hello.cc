#include "hello.h"

Hello::Hello(std::string name) : name_(name) {}

void Hello::sayHello() {
  std::cout << "Hello " << name_ << "!" << std::endl;
}
