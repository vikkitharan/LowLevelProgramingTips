/*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/
//         File: Integer.h
//               Integer class
//   Created by: vikki
//   Created on: 2022/09/03
//  Modified by: vikki
//  Modified on: 2022/09/03
//      Version: 0.0.0
//-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*/

/**
 * @file
 * @autor vikki
 * @version 1.0.0
 *
 */

/**
 * @brief A sample integer class
 * This is a sample integer class.
 *
 */

class Integer {
  private:
    int* _int_pt;
  public:
  Integer();
  Integer(int);
  Integer(const Integer &);
  Integer(Integer &&);
  ~Integer();
  void setValue(int);
  int getValue() const;
  Integer add(Integer, Integer);
};
