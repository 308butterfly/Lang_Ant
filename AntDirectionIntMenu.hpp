/*********************************************************************************
** Author:          Andrew Thiele
** Date:            4/5/2019
** Description:     Header file for AntDirectionIntMenu funtion
**                  Argument:  a string directing desired integer input
**
**                  Dependencies:  getInteger.cpp, getInteger.hpp
**                  Returns: A character stating the direction the ant is facing
**                  with 'u' for up, 'l' for left, 'r' for right, and 'd' for down.
**
** File name:       AntDirectionIntMenu.hpp
*********************************************************************************/

#include"getInteger.hpp"
#ifndef ANTDIRECTIONINTMENU_HPP
#define ANTDIRECTIONINTMENU_HPP

char AntDirectionIntMenu(std::string message);


#endif
