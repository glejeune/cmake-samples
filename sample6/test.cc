#include "hello.h"

int main(void) {
  Hello hi("CMake");

  std::cout << hi.sayHello() << std::endl;

  return 0;
}
