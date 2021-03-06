/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4F

Write a program trapezoid.cpp that prints 
an upside-down trapezoid of given width 
and height.

However, if the input height is impossibly 
large for the given width, then the program
 should report, Impossible shape!


*/

#include <iostream> 
#include <string>
#include "trapezoid.h"

std::string trapezoid(int width, int height) { 

    // std::string shape; 
    // std::string line;
    // int spaces = 1;
    // int stars = width;

    

    // if(height == 0) { 
    //     return "";
    // }

    // for (int a = 1; a <= width; a++) { 
    //     line += "*";
    // }
    // shape += line + "/n";
    // std::string line2 = "";
    // for (int i = 2; i <= height; i++) {
    //     while (spaces != width/2) {
    //         line2 += " ";
    //         for (int k = 0; k <= stars; k++) { 
    //             line2 += "*";
    //             stars -= 2; 
    //         }
    //         spaces++;
    //     }
    //     spaces = 0;
    //     line2 += "\n"; 
    //     shape += line2;
    //     line2 = "";
    // }
    
    // return shape; 

    std::string shape = "";
    std::string line = ""; 
    int spaces = 0;
    int stars = width;

    if(width/2 + width%2 < height){
        return "Impossible Shape!";
    }
    for(int i = 0; i < height; i++){
        for(int j = 0; j < spaces; j++){
            line += " ";
        }
        for(int j = 0; j < stars; j++){
            line += "*";
        }
        spaces++;
        stars-=2;
        shape += line + "\n";
        line = "";
    }

    return shape;

}
