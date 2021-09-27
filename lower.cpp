/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4D

Write a program lower.cpp that 
prints the bottom-left half of 
a square, given the side length.


*/

#include <iostream> 
#include "lower.h"


std::string lower(int length) { 
    std::string shape; 
    std::string line; 
    int num = 1;
    for (int i = 0; i < length; i++) { 
        for (int j = 0; j <= i; j++) { 
            line += "*";
        }
    
        
        line += "\n";
        shape += line;
        line = "";
        

        
    }
    return shape;

}

