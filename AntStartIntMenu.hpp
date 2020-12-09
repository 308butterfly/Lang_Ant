/*********************************************************************************
** Author:          Andrew Thiele
** Date:            4/6/2019
** Description:     headfile for intMenu function.  Integer menu choices are
**                  validated and the menu can be extended by adding more cases
**                  to the switch statement.  The default case in the switch
**                  statement is used to warn about invalid input
** Arguments:       a string to pass to getInteger
** Dependencies:    AntStartIntMenu.hpp, AntStartIntMenu.cpp, 
**                  AntSim.hpp, AntSim.cpp, getInteger.hpp, getInteger.cpp
** Returns:         nothing
** File name:       AntStartIntMenu.hpp
*********************************************************************************/

#ifndef ANTSTARTINTMENU_HPP
#define ANTSTARTINTMENU_HPP
#include "getInteger.hpp"


void AntStartIntMenu(std::string message);

#endif
