/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4G

Write a program checkerboard3x3.cpp 
that asks the user to input width and
 height and prints a checkerboard of 
 3-by-3 squares. (It should work even 
 if the input dimensions are not a 
 multiple of three.)
*/

#include <iostream> 
#include "checkerboard3x3.h"

std::string checkerboard3x3(int width, int height) { 
    std::string shape = "";
    std::string odd = "";
    std::string even = "";
/*
***   ***
***   ***
***   ***
   ***
   ***
   ***
*/
    for (int i = 0; i < width; i++){
        if(i%6 < 3){
            odd += "*";
        }
        else{
            odd += " ";
        }
    }

    for (int i = 0; i < width; i++){
        if(i%6 < 3){
            even += " ";
        }
        else{
            even += "*";
        }
    }

    for (int i = 0; i < height; i++){
        if(i%6 < 3){
            shape += odd + "\n";
        }
        else shape += even + "\n";
    }

    return shape;
}