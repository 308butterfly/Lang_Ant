/*********************************************************************************
** Author:          Andrew Thiele
** Date:            4/6/2019
** Description:     Header file for Ant class.  All setter functions use
**                  an outside function to test for valid ranged integer input. 
**                  The setDirection method also tests for integer input,
**                  but will set the direction of the ant to a character.  Up is 
**                  'u', down is 'd', left is 'l' and right is 'r'.  Setters are
**                  integrated into the menu in Ant.Sim.cpp
**
**                  Dependencies: getInteger.hpp, getInteger.cpp, intRangeCheck.hpp,
**                  intRangeCheck.cpp, AntDirectionIntMenu.hpp, 
**                  AntDirectionIntMenu.cpp 
** File name:       Ant.hpp
*********************************************************************************/

#include"getInteger.hpp"
#include"intRangeCheck.hpp"
#include"AntDirectionIntMenu.hpp"
#ifndef ANT_HPP
#define ANT_HPP

class Ant
{
    private:
        int AntRow, AntColumn, boardWidth, boardLength, simSteps;
        char** Antboard = nullptr;
        char orientation;

    public:
        Ant();//default construcor
        int getAntRow();
        int getAntColumn();
        void setAntRow(int X);
        void setAntColumn(int Y);
        int getSteps();
        void setSteps(int steps);
        int getBoardWidth();
        void setBoardWidth(int width);
        int getBoardLength();
        void setBoardLength(int length);
        char getDirection();
        void setDirection();
        char** makeBoard();
        char getBoardSpace(int X, int Y);
        void deleteBoard();
        void moveAnt();       
};

#endif
