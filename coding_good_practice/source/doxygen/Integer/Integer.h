/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
//         File: Integer.h
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


/**
 * @brief Integer class
 */
class Integer {
  private:
    int* _int_pt;

  public:
    /**
     * @brief default constructor
     */
    Integer();

    /**
     * @brief parameterized constructor
     *
     * @param i: value
     */
    Integer(int);

    /**
     * @brief copy constructor
     *
     * @param obj: reference object
     */
    Integer(const Integer &);

    /**
     * @brief move constructor
     *
     * @param obj: r-vlaue reference object
     */
    Integer(Integer &&);

    /**
     * @brief de constructor
     */
    ~Integer();

    /**
     * @brief Set the value of _int_pt
     *
     * @param i: value
     */
    void setValue(int);

    /**
     * @brief Get the value of _int_pt
     *
     * @return value of _int_pt
     */
    int getValue() const;

    Integer add(Integer, Integer);
};
