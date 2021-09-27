
/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4A

 Write a program box.cpp that asks
  the user to input width and height 
*/


#include <iostream>
#include "box.h"

std::string box(int width, int height) { 

    std::string shape = "";

    for (int i = 1; i <= height; i++) { 
        for (int j = 1; j <= width; j++) { 
            shape += "*"; 
            
        }
        shape += "\n"; 
    }
    return shape; 
}
