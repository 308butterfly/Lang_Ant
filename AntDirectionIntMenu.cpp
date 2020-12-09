/*********************************************************************************
** Author:          Andrew Thiele
** Date:            4/7/2019
** Description:     Function for choosing the initial direction of the ant in
**                  the Langton Ant simulation.  
**                  Argument:  a string directing desired integer input
**                
**                  Dependencies:  getInteger.cpp, getInteger.hpp, 
**                  AntDirectionIntMenu.hpp
**
**                  Returns: A character stating the direction the ant is facing
**                  with 'u' for up, 'l' for left, 'r' for right, and 'd' for down.
**
** File name:       AntDirectionIntMenu.cpp
*********************************************************************************/

#include"AntDirectionIntMenu.hpp"
#include"IntNumberGen.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

char AntDirectionIntMenu(std::string message)
{
    char face = ' '; 
    bool flag = true;
    while(flag)
    {
        int choice = getInteger(message);
        int randomInteger = IntNumberGen(1,4);
        switch(choice)
        {
            case 1: cout << "UP!\n";
                face = 'u';
                flag = false;
                break;

            case 2: cout << "DOWN!\n";;
                face = 'd';
                flag = false; 
                break;

            case 3: cout << "LEFT!\n";;
                face  = 'l';
                flag = false;
                break;
            
            case 4: cout << "RIGHT!\n";;
                face = 'r';
                flag = false;
                break;
            
            case 5: cout << "RANDOM!\n";
                if(randomInteger == 1)
                {
                    face = 'u';
                    cout << "UP it is!\n";
                }
                
                if(randomInteger == 2)
                {
                    face = 'd';
                    cout << "DOWN it is!\n";
                }

                if(randomInteger == 3)
                {
                    face = 'l';
                    cout << "LEFT it is!\n";
                }

                if(randomInteger == 4)
                {
                    face = 'r';
                    cout << "RIGHT it is!\n";
                }

                flag = false;
                break;
            
            default:  cout << "Invalid choice!\n";
                break;
        }
    }

    return face;
}
