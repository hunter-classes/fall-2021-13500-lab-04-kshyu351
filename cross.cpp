/*
Author: Kirsten Shyu
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 4C

Write a program cross.cpp that asks 
the user to input the shape size, and 
prints a diagonal cross of that dimension.


*/

#include <iostream> 
#include "cross.h"

std::string cross(int size) { 
    int x=1; 
    int y = size;
    int counter;
    std::string shape; 
    std::string line; 
    std::string line2; 

    if (size%2 == 0) { 
        
        
        while ((x != (size/2)+1)) { 
            for (int i = 1; i < x; i++) { 
                line += " ";
            }

            line += "*";
            counter = x; 
            while (counter != y-1) { 
                line += " ";
                counter += 1; 
               
            
            
            }
           line += "*";
            x += 1;
            y -= 1; 
            line += "\n";
            
            
            counter = x; 
            
        
        }

        shape += line; 
        x = size/2; 
        y = (size/2)+1; 
        while (x != 0) { 
            for (int i = 1; i < x; i++) { 
                line2 += " "; 

            }
            line2 += "*";
            counter = x;
             while (counter != y-1) { 
                line2 += " ";
                counter += 1; 
               
            }
            line2 += "*";
            x -= 1;
            y += 1; 
            line2 += "\n";
            
            
            counter = x; 
            
        
        }
        shape += line2;


        
    }
      else { 
        
        
        while (x != (size/2)+1) { 
            for (int i = 1; i < x; i++) { 
                line += " ";
            }

            line += "*";
            counter = x; 
            while (counter != y-1) { 
                line += " ";
                counter += 1; 
               
            
            
            }
           line += "*";
            x += 1;
            y -= 1; 
            line += "\n";
            
            
            counter = x; 
        }
            
        
        

        shape += line; 
        std::string line3;
        

        for (int j = 1; j < x; j++) { 
            line3 += " ";
        }
        line3 += "*\n";
      

        x = size/2; 
        y = (size/2)+1; 
        while (x != 0) { 
            for (int i = 1; i < x; i++) { 
                line2 += " "; 

            }
            line2 += "*";
            counter = x;
             while (counter != y) { 
                line2 += " ";
                counter += 1; 
               
            }
            line2 += "*";
            x -= 1;
            y += 1; 
            line2 += "\n";
            
            
            counter = x; 
            
        
        }
         
       
        shape += line3;
        shape += line2;
        


        
    }
    return shape;

}

  

        
        
