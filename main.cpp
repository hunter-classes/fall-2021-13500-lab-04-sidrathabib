/*
Author: Sidrat Habib
Course: CSCI-135
Instructor: Tong Yi & Mike Zamansky
Assignment: Lab 4A-G
*/

#include <iostream>
#include "funcs.h"

int main (){

//A
  std::cout << box(7,4) << '\n';
  std::cout << box(3,8) << '\n';
  std::cout << box(2,5) << '\n';

//B
  std::cout << checker_b(11,6) << '\n';
  std::cout << checker_b(6,9) << '\n';
  std::cout << checker_b(12,3) << '\n';

//C
  std::cout << cross(7) << '\n';
  std::cout << cross(11) << '\n';
  std::cout << cross(8) << '\n';

//D
  std::cout << lower_tri(6) << '\n';
  std::cout << lower_tri(13) << '\n';
  std::cout << lower_tri(8) << '\n';

//E
  std::cout << upper_tri(10) << '\n';
  std::cout << upper_tri(4) << '\n';
  std::cout << upper_tri(9) << '\n';

//F
  std::cout << trap(12,5) << '\n';
  std::cout << trap(15,2) << '\n';
  std::cout << trap(14,4) << '\n';

//G
  std::cout << checker3x3(16,11) << '\n';
  std::cout << checker3x3(7,9) << '\n';
  std::cout << checker3x3(12,11) << '\n';

  return 0;
}