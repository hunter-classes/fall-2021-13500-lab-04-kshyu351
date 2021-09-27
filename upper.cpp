/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4E

Write a program upper.cpp that prints 
the top-right half of a square, given 
the side length.


*/

#include <iostream> 
#include "upper.h"

std::string upper(int length) { 
    std::string shape; 
    std::string line; 
    
    for (int i = 1; i <= length; i++) { 
        for (int j = length; j >= i; j--) { 
            line += "*";
        }

        line += "\n";
        shape += line;
        line = "";
        
    }
    return shape;


}