#include <iostream>
#include <string>
#include "os/load.h"
#include "hello.h"

int main(int argc, char *argv[]) {
  if(argc <= 1) {
    std::cout << "Usage : " << argv[0] << " libhello.so" << std::endl;
    return EXIT_FAILURE;
  }

  DYNLIB_HANDLE Lib = DYNLIB_LOAD(argv[1]);
  if (!Lib) {
    std::cerr << DYNLIB_ERROR() << std::endl;
    return EXIT_FAILURE;
  }

  Hello * (*create_hello)(std::string);
  create_hello = (Hello * (*)(std::string))(DYNLIB_GETSYM(Lib, "create"));
  if (!create_hello) {
    std::cerr << DYNLIB_ERROR() << std::endl;
    return EXIT_FAILURE;
  }

  void (*destroy_hello)(Hello *);
  destroy_hello = (void (*)(Hello *))(DYNLIB_GETSYM(Lib, "destroy"));
  if (!destroy_hello) {
    std::cerr << DYNLIB_ERROR() << std::endl;
    return EXIT_FAILURE;
  }

  Hello *h = create_hello("Greg");
  h->sayHello();
  destroy_hello(h);

  DYNLIB_UNLOAD(Lib);

  return 0;
}
