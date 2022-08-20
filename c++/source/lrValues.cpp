/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
//         File: c++/source/lrValues.cpp
//               L value and R value
//   Created by: vikki
//   Created on: 2022/08/20
//  Modified by: vikki
//  Modified on: 2022/08/20
//      Version: 0.0.0
//      compile: g++ ./c++/source/lrValues.cpp -o c++/bin/lrValues
//      run    : ./c++/bin/lrValues
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
#include <iostream>

/*++++++++++++++++++++++++++++++++ PRIVATE Function ++++++++++++++++++++++++/
//     Function: Add ()
//  Description: This function can NOT be in left side of an assignment
//      Return : return a r-value
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
int Add(int x, int y) {
  return x + y; // return r-value
}

/*++++++++++++++++++++++++++++++++ PUBLIC Function +++++++++++++++++++++++++/
//     Function: Transform ()
//  Description: This function can be in left side of an assignment
//      Return : a reference - l-value
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
int & Transform(int &x) {
  x *= x;
  return x; // return l-value
}

/*++++++++++++++++++++++++++++++++ PUBLIC Function +++++++++++++++++++++++++/
//     Function: Print ()
//   Parameters: l-value reference
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Print(int &x) {
  std::cout << "Print(int &)" << std::endl;
}

/*++++++++++++++++++++++++++++++++ PUBLIC Function +++++++++++++++++++++++++/
//     Function: Print ()
//   Parameters: r-value reference
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Print(int &&x) {
  std::cout << "Print(int &&)" << std::endl;
}

int main () {

  // l-value and r-value

  // x is l-value 
  // 5 is r-value
  int x = 5;

  // the expression returns r-value
  int result = x * x + 2 * x + 1; 

  // the expression returns l-value
  // so can be left side of the assignment
  ++x = 1;

  // Add() returns a r-value
  x = Add(4,5);

  // Transform() returns a l-value.
  // l-value return function can be in left side.
  Transform(x) = 4;


  // l-value reference

  // l1 is l-value reference
  int &l1 = x;

  // l-value reference can not bind to a r-value
  // compiler error
  //int &l2 = 10;

  //const l-value reference can bind to a r-value
  const int &l3 = 10;

  // l4 is a l-value reference
  int &l4 = Transform(x);


  // r-value reference
  // r1 is value reference, refers to a temporary
  int &&r1 = 10;

  // r2 is a r-value reference 
  // Add() returns r-value
  int &&r2 = Add(4,5);

  // r3 is a r-value reference
  // the expression returns r-value
  int &&r3 = 4 + 5;

  // r4 is a r-value and x is a l-value.
  // r-value reference can not bind to a l-value
  // compiler error
  //int &&r4 = x;

  // calle is l-value reference Print()
  Print(x);

  // calle is r-value reference Print()
  Print(3);

  return 0;
}
