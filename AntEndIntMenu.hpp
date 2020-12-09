/*********************************************************************************
** Author:          Andrew Thiele
** Date:            4/6/2019
** Description:     headfile for intMenu function.  Integer menu choices are
**                  validated and the menu can be extended by adding more cases
**                  to the switch statement.
**                  
**                  This is end of simulation menu that asks the user if the 
**                  simulation should be ran again.  
** Arguments:       A string to pass to getInteger function for desired input
** Dependencies:    AntEndIntMenu.hpp, AntSim.hpp, AntSim.cpp
** Returns:         nothing
** Dependencies:    getInteger.hpp, getInteger.cpp
** File name:       AntEndIntMenu.hpp
*********************************************************************************/

#ifndef ANTENDINTMENU_HPP
#define ANDENDINTMENU_HPP
#include "getInteger.hpp"


void AntEndIntMenu(std::string message);

#endif
