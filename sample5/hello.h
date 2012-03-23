#ifndef __HELLO_H
#define __HELLO_H

#include <iostream>
#include <string>

class Hello {
  public:
    Hello(std::string name);
    virtual void sayHello();

  private:
    std::string name_;
};

#endif

