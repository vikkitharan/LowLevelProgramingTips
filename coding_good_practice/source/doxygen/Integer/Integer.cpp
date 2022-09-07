/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
//         File: Integer.cpp
//               Integer class
//   Created by: vikki
//   Created on: 2022/09/03
//  Modified by: vikki
//  Modified on: 2022/09/03
//      Version: 0.0.0
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

#include "Integer.h"
#include <iostream>

/*++++++++++++++++++++++++++++++++ PUBLIC Function +++++++++++++++++++++++++/
//     Function: Integer ()
//  Description: Default constructor
//   Parameters: None.
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
Integer::Integer(){
  std::cout << "Integer()" << std::endl;
   _int_pt = new int();
}

/*++++++++++++++++++++++++++++++++ PUBLIC Function +++++++++++++++++++++++++/
//     Function: Integer ()
//  Description: constructor
//   Parameters: 
//              i: value
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
Integer::Integer(int i){
  std::cout << "Integer(int)" << std::endl;
   _int_pt = new int(i);
}

/*++++++++++++++++++++++++++++++++ PUBLIC Function +++++++++++++++++++++++++/
//     Function: Integer ()
//  Description: copy constructor
//   Parameters: 
//               &obj: reference object
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
Integer::Integer(const Integer &obj){
  std::cout << "copy: Integer(const Integer &)" << std::endl;
  // new memory must be allocated
   _int_pt = new int(obj.getValue());
}

/*++++++++++++++++++++++++++++++++ PUBLIC Function +++++++++++++++++++++++++/
//     Function: Integer ()
//  Description: move constructor
//   Parameters: 
//              &&obj - r-vlaue reference object
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
Integer::Integer(Integer &&obj){
  std::cout << "move: Integer(Integer &&)" << std::endl;
  // existing memory is used
   _int_pt = obj._int_pt;
  // original pointer is nullified
   obj._int_pt = nullptr;
}

/*++++++++++++++++++++++++++++++++ PUBLIC Function +++++++++++++++++++++++++/
//     Function: ~Integer ()
//  Description: de constructor
//   Parameters: object
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
Integer::~Integer(){
  std::cout << "~Integer()" << std::endl;
  delete _int_pt;
}

/*++++++++++++++++++++++++++++++++ PUBLIC Function +++++++++++++++++++++++++/
//     Function: setValue ()
//  Description: Set the value of _int_pt
//   Parameters: 
//              i : value
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
void Integer::setValue(int i){
  *_int_pt = i;
}

/*++++++++++++++++++++++++++++++++ PUBLIC Function +++++++++++++++++++++++++/
//     Function: getValue ()
//  Description: Get the value of _int_pt
//      Return : value of _int_pt
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++*/
int Integer::getValue() const{
  return(*_int_pt);
}

