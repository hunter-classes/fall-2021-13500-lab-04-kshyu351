/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4




*/
#include <iostream>
#include "box.h"
#include "checkerboard.h"
#include "cross.h"
#include "lower.h"
#include "upper.h"
#include "trapezoid.h"
#include "checkerboard3x3.h"


int main() { 

    std::string result;
    result = box(3,5);
    std::cout << "box(3,5):\n";
    std::cout << result;
    std::cout << "\n------------------\n"; 


    std::string result2; 
    result2 = checkerboard(11,6);
    std::cout << "checkerboard(11,6):\n";
    std::cout << result2;
    std::cout << "\n------------------\n"; 

    std::string result3;
    result3 = cross(8);
    std::cout << "cross(8):\n";
    std::cout << result3; 
    std::cout << "\n------------------\n";

    std::string result4;
    result4 = cross(9);
    std::cout << "cross(9):\n";
    std::cout << result4; 
    std::cout << "\n------------------\n";

    std::string result5;
    result5 = lower(6);
    std::cout << "lower(6)):\n";
    std::cout << result5; 
    std::cout << "\n------------------\n";

    std::string result6;
    result6 = upper(5);
    std::cout << "upper(5):\n";
    std::cout << result6; 
    std::cout << "\n------------------\n";

    std::string result7;
    result7 = trapezoid(12, 5);
    std::cout << "trapezoid(12,5):\n";
    std::cout << result7; 
    std::cout << "\n------------------\n";

    std::string result8;
    result8 = trapezoid(12, 7);
    std::cout << "trapezoid(12,7):\n";
    std::cout << result8; 
    std::cout << "\n------------------\n";

    std::string result9;
    result9 = trapezoid(5, 3);
    std::cout << "trapezoid(5,3):\n";
    std::cout << result9; 
    std::cout << "\n------------------\n";

    std::string result10;
    result10 = checkerboard3x3(16,11);
    std::cout << "checkerboard3x3(16,11):\n";
    std::cout << result10;
    std::cout << "\n------------------\n";

    std::string result11;
    result11 = checkerboard3x3(27,27);
    std::cout << "checkerboard3x3(27,27):\n";
    std::cout << result11;
    std::cout << "\n------------------\n";
}