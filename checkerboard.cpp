/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4B

 Write a program checkerboard.cpp that 
 asks the user to input width and height
  and prints a rectangular checkerboard 
  of the requested size using asterisks 
  and spaces (alternating).
*/

#include <iostream> 
#include "checkerboard.h"

std::string checkerboard(int width, int height) { 

    std::string shape = ""; 
    std::string evenLine = ""; 
    std::string oddLine = ""; 
 

    if (width%2 == 0) { 
        for (int i = 1; i <= width/2; i++) { 
            oddLine += "* ";
            evenLine += " *";
        }

    }
    else { 
        for (int i = 1; i <= width/2; i++) { 
            oddLine += "* "; 
            evenLine += " *";
        }
        oddLine += "*\n";
        evenLine += " \n"; 
    }

    if (height%2 == 0) { 
        for (int i = 1; i <= height/2; i++) { 
           shape += oddLine; 
            shape += evenLine; 
        }
    }
    else { 
          for (int i = 1; i <= height/2; i++) { 
            shape += oddLine;
           
            shape += evenLine; 
        }
        shape += oddLine;
    }
    return shape;
}
