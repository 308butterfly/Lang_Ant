/*********************************************************************************
** Author:          Andrew Thiele
** Date:            4/6/2019
** Description:     Function for integer choice menus.  Integer menu choices are
**                  validated and the menu can be extended by adding more cases
**                  to the switch statement.  The default case in the switch
**                  statement is used to warn about invalid input
** Arguments:       a string to pass to getInteger
** Dependencies:    AntStartIntMenu.hpp, AntStartIntMenu.cpp, 
**                  AntSim.hpp, AntSim.cpp, getInteger.hpp, getInteger.cpp
** Returns:         nothing
** File name:       AntStartIntMenu.cpp
*********************************************************************************/

#include <iostream> 
#include "AntSim.hpp"
#include "AntStartIntMenu.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

void AntStartIntMenu(string message)
{

    bool flag = true;
    while(flag)
    {
        int choice = getInteger(message);

        switch(choice)
        {
            case 1: cout << "Let's go!!!\n";
                AntSim();
                flag = false;   
                break;

            case 2: cout << "Okay, bye\n";
                flag = false; 
                break;
            default:  cout << "Invalid choice!\n";
                break;
        }
    }
}
