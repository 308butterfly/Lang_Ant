/*********************************************************************************
** Author:          Andrew Thiele
** Date:            1/8/2019
** Description:     This function checks if an entered integer is within a desired 
**                  range.  If it is not, the getInteger function is called again
**                  using a string to specify desired input.
**
**                  Inputs:  the minimum bound, the maximum bound, integer value 
**                  to be checked, and a string for getInteger function.
**                  Output: the integer value to be checked (that was checked)
**
**                  Dependencies:  string, limits.h, getInteger.hpp, getInteger.cpp
**                  
**                  Returns:  the entered integer if it is in range    
** File name:       intRangeCheck.hpp
*********************************************************************************/

#include<string>
#include<limits.h>
#include"getInteger.hpp"

#ifndef INTRANGECHECK_HPP
#define INTRANGECHECK_HPP

int intRangeCheck(int leftbound, int rightbound, int valueToBeChecked, std::string);

#endif
