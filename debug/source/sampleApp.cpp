/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
//         File: debug/source/multipleFiles1.cpp
//               A simple code to demonstrate to how to debug multiple file
//               program.
//   Created by: vikki
//   Created on: 2022/08/25
//  Modified by: vikki
//  Modified on: 2022/08/25
//      Version: 0.0.0
//      Example:
//              build: g++ -g -c debug/source/multipleFiles1.cpp -o debug/obj/multipleFiles1.o
//                     g++ -g -c debug/source/multipleFiles2.cpp -o debug/obj/multipleFiles2.o
//                     g++ -g debug/obj/multipleFiles1.o  debug/obj/multipleFiles2.o -o debug/bin/multipleFiles
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
#include "include/sampleLibrary.h"
#include <iostream>

int add(int x, int y) {
  return (x+y);
}

float add(float x, float y) {
  return (x+y);
}


int main() {
  add(1,2);
  add(1.0f,2.0f);
  library::add(1,2);
  int sum{0};
  for (int i = 0; i < 10; ++i) {
   sum += i; 
  }
  std::cout << "sample" << std::endl;
  return 0;
}
