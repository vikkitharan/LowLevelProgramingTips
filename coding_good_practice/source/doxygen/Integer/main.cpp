/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
//         File: main.cpp
//               Integer class example
//   Created by: vikki
//   Created on: 2022/09/03
//  Modified by: vikki
//  Modified on: 2022/09/03
//      Version: 0.0.0
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
#include <iostream>
#include "Integer.h"
Integer Add (const Integer a, const Integer b) {
  Integer tmp;
  tmp.setValue(a.getValue() + b.getValue());
  return tmp;
}
int main(int argc, char *argv[]) {
  Integer a{1}, b{2};
  a.setValue(Add(a,b).getValue());
  return 0;
}
