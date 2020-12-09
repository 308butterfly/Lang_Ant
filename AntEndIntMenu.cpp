/*********************************************************************************
** Author:          Andrew Thiele
** Date:            4/6/2019
** Description:     Function for integer choice menus.  Integer menu choices are
**                  validated and the menu can be extended by adding more cases
**                  to the switch statement.
**                  
**                  This is end of simulation menu that asks the user if the 
**                  simulation should be ran again.  
** Arguments:       A string to pass to getInteger function for desired input
** Dependencies:    AntEndIntMenu.hpp, AntSim.hpp, AntSim.cpp
** Returns:         nothing
** File name:       AntEndIntMenu.cpp
*********************************************************************************/

#include <iostream> 
#include "AntEndIntMenu.hpp"
#include "AntSim.hpp"
using std::cout;
using std::cin;
using std::endl;
using std::string;

void AntEndIntMenu(string message)
{
    bool flag = true;
    
    while(flag)
    {
        int choice = getInteger(message);

        switch(choice)
        {
            case 1: cout << "Let's Do it Again\n";
                AntSim();
                flag = false;
                break;

            case 2: cout << "You giving up already\n";
                flag = false; 
                break;
            
            default:  cout << "Invalid choice!\n";
                break;
        }
    }
}