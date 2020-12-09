/*********************************************************************************
** Author:          Andrew Thiele
** Date:            4/6/2019
** Description:     Function that validates integer input
** Arguments:       A string is used to inform of desired input.
** Dependencies:    getInteger.hpp
** Returns:         inputed integer

** File name:       getInteger.cpp
*********************************************************************************/

#include"getInteger.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;


int getInteger(string message)
{
    while(true)
    {   
        cout<< message;
        int integer;
        cin >> integer;

        if(cin.fail())
        {
            //https://www.geeksforgeeks.org/clearing-the-input-buffer-in-cc/
            //to clear input buffer
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout << "NOT AN INTEGER!\n"; 
        }

        else
        {
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            return integer;
        }   
    }
}
