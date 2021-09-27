/*
Author: Sidrat Habib
Course: CSCI-135
Instructor: Tong Yi & Mike Zamansky
Assignment: Lab 4A-G
*/

#include <iostream>
#include "funcs.h"

//A
std::string box(int width, int height) {
  std::string box;
  for (int i = 0; i < height; i++){
    for (int j = 0; j < width; i++)
      {box += "*";}
    box += "\n";
  }
  return box;
}

//B
std::string checker_b(int width, int height){
  std::string checker_b;
  for (int i = 0; i <= height; i++) {
     for (int j = 0; j <= width; j++){
        if ((i + j) % 2 == 0)
            checker_b += "*";
        else
            checker_b += " ";
     }
     return checker_b;
   }
 }

//C
std::string cross(int height){
  std::string cross;
  
  for (int i = 1; i <= height; i++){
    for (int j = 1; j <= height; j++){
      if ((i == j) || (j == (height + 1) - i))
        cross += "*";
      else
        cross += " ";
    }
    return cross;
  }
}

//D
std::string lower_tri(int height){
  std::string lower_tri;

  for (int i = 1; i <= height; i++) {
    for (int j = 1; j <= i; j++)
      lower_tri += "*";
      return lower_tri;
  }
}

//E
std::string upper_tri(int height){
  std::string upper_tri;

  for (int i = height - 1; i >= 0; i--) {
    for (int j = height - 1; j >= 0; j--) {
      if (j <= i)
        upper_tri += "*";
      else
        upper_tri += " ";
      }
      return upper_tri;
  }
}


//F
std::string trap (int width, int height)
{
  std::string trap;

  if (height > ((width + 1) / 2))
    return "Impossible shape!";

  for (int i = 0; i < height;i++) {
    for (int j = 0; j <= width - i;j++) {
      if (j < i)
        trap +=" ";
      else if (j > (width - 1 - i))
        trap += "\n";
      else
        trap += "*";
    }
  }
  return trap;
}

//G
std::string checker3x3(int width, int height) {
  std::string checker3x3;

  for (int i = 0; i < height; i++) {
    for (int j = 0; j < width; j++) {
      if (i%6 < 3){
        if (j%6 < 3)
          checker3x3 += "*";
        else
          checker3x3 += " ";
        }
        else if (j%6 >= 3)
          checker3x3 += "*";
        else
          checker3x3 += " ";
      }
      checker3x3 += "\n";
    }
    return checker3x3;
}