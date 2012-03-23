package com.vidal.example;

public class Sample {
  private String name;

  Sample(String name) {
    this.name = name;
  }

  public String sayHello() {
    return "Hello " + name;
  }
}
