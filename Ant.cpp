/*********************************************************************************
** Author:          Andrew Thiele
** Date:            4/6/2019
** Description:     Function Definitions for Ant class.  All setter functions use
**                  an outside function to test for valid ranged integer input. 
**                  The setDirection method also tests for integer input,
**                  but will set the direction of the ant to a character.  Up is 
**                  'u', down is 'd', left is 'l' and right is 'r'.  Setters are
**                  integrated into the menu in Ant.Sim.cpp
**
**                  Dependencies: getInteger.hpp, getInteger.cpp, intRangeCheck.hpp,
**                  intRangeCheck.cpp, AntDirectionIntMenu.hpp, 
**                  AntDirectionIntMenu.cpp 
** File name:       Ant.cpp
*********************************************************************************/

#include"Ant.hpp"

Ant::Ant() {};

void Ant::setAntRow(int Y)
{
    std::string message = "Enter the starting row of the ant: \n";
    AntRow = intRangeCheck(1, boardLength, Y, message);
}

int Ant::getAntRow()
{
    return AntRow;
}

void Ant::setAntColumn(int X)
{   
    std::string message = "Enter the starting column of the ant: \n";
    AntColumn = intRangeCheck(1, boardWidth, X, message );
}

int Ant::getAntColumn()
{
    return AntColumn;
}

void Ant::setSteps(int steps)
{   
    std::string message = "Enter the number of steps the ant takes: \n";
    simSteps = intRangeCheck(0, INT_MAX, steps, message);
}

int Ant::getSteps()
{
    return simSteps;
}


void Ant::setBoardWidth(int columns )
{
    std::string message = "Enter number of columns for the board:  \n";
    boardWidth = intRangeCheck(1, INT_MAX, columns, message);
}

int Ant::getBoardWidth()
{
    return boardWidth;
}

void Ant::setBoardLength(int rows )
{
    std::string message = "Enter number of rows for the board:  \n";
    boardLength = intRangeCheck(1, INT_MAX, rows, message);
}

int Ant::getBoardLength()
{
    return boardLength;
}

char Ant::getDirection()
{
    return orientation;
}

void Ant::setDirection()
{
    std::string message1 = "What direction does the ant face?\nChoose a number\n";
    std::string message2 = "1: Up\n2: Down\n3: Left\n4: Right\n5: Random direction\n";
    std:: string message = message1 + message2;
    orientation = AntDirectionIntMenu(message);    
}

char** Ant::makeBoard()
{
    Antboard = new char*[boardWidth + 2];

    for(int i = 0; i < boardWidth + 2; i++)
        {
            Antboard[i] = new char[boardLength +2];       
        }    
    


    for(int i = 0; i < boardWidth + 2; i++)
    { 
        for(int j = 0; j < boardLength + 2; j++)
        {
            if((j == 0) || (j == boardLength +1))
            {
                Antboard[i][j] = '-';
            }

            else if((i == 0) || (i == boardWidth +1))
            {
                Antboard[i][j] = '|';
            }

            else
            {
                Antboard[i][j] = ' ';
            }
        }
    }
    return Antboard;
}

char Ant::getBoardSpace(int X, int Y)
{
    return Antboard[X][Y];
}

void Ant::deleteBoard()
{
    for(int i = 0; i < getBoardWidth() + 2; i++)
    {
        delete [] Antboard[i];
    }

    delete [] Antboard;

    Antboard = nullptr;
}

