/*********************************************************************************
** Author:          Andrew Thiele
** Date:            4/7/2019
** Description:     This function checks if an entered integer is within a desired 
**                  range.  If it is not, the getInteger function is called again
**                  using a string to specify desired input.
**
** Inputs:          the minimum bound, the maximum bound, integer value 
**                  to be checked, and a string for getInteger function.
**                  Output: the integer value to be checked (that was checked)
**
** Dependencies:    string, limits.h, getInteger.hpp, getInteger.cpp
**                  
** Returns:         the entered integer if it is in range
**
** File name:       intRangeCheck.cpp  
*********************************************************************************/

#include"intRangeCheck.hpp"

int intRangeCheck(int leftBound, int rightBound,  int value, std::string message )
{
    bool flag = true;
    
    while(flag)
    {
        if((value >= leftBound) && (value <= rightBound))
        {
            flag = false;   
        }

        else
        {
            std::cout << "NOT IN RANGE!\n";
            value  = getInteger(message);
        }   
    }
    return value;
}