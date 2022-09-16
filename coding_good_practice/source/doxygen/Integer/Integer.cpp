/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
//         File: Integer.cpp
//               Integer class
//   Created by: vikki
//   Created on: 2022/09/03
//  Modified by: vikki
//  Modified on: 2022/09/03
//      Version: 0.0.0
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

/* Copyright (C) 
 * 2022 - vikki
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 * 
 */


#include "Integer.h"
#include <iostream>

/**
 * @brief default constructor
 */
Integer::Integer(){
  std::cout << "Integer()" << std::endl;
   _int_pt = new int();
}

/**
 * @brief parameterized constructor
 *
 * @param i: value
 */
Integer::Integer(int i){
  std::cout << "Integer(int)" << std::endl;
   _int_pt = new int(i);
}


/**
 * @brief copy constructor
 *
 * @param obj: reference object
 */
Integer::Integer(const Integer &obj){
  std::cout << "copy: Integer(const Integer &)" << std::endl;
  // new memory must be allocated
   _int_pt = new int(obj.getValue());
}

/**
 * @brief move constructor
 *
 * @param obj: r-vlaue reference object
 */
Integer::Integer(Integer &&obj){
  std::cout << "move: Integer(Integer &&)" << std::endl;
  // existing memory is used
   _int_pt = obj._int_pt;
  // original pointer is nullified
   obj._int_pt = nullptr;
}

/**
 * @brief de constructor
 */
Integer::~Integer(){
  std::cout << "~Integer()" << std::endl;
  delete _int_pt;
}

/**
 * @brief Set the value of _int_pt
 *
 * @param i: value
 */
void Integer::setValue(int i){
  *_int_pt = i;
}

/**
 * @brief Get the value of _int_pt
 *
 * @return value of _int_pt
 */
int Integer::getValue() const{
  return(*_int_pt);
}

