package com.vidal.example;

import org.junit.Test;
import static org.junit.Assert.assertEquals;

public class SampleTest {
  @Test
  public void test() {
    Sample sample = new Sample("Java");
    assertEquals("Hello Java", sample.sayHello());
  }   
}
