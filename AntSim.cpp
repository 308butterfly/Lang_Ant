/*********************************************************************************
** Author:          Andrew Thiele
** Date:            4/7/2019
** Description:     LangAnt simulator.  This function sets up parameters for the 
**                  Langton ant simulator.  After aquiring all necessary parameters
**                  It will draw an initial (first) board showing the ants position.   
**                  The ant will immediately be turned as to the simulation rules. 
**                  Example:  The ant was placed 'up' but when put on the board it
**                  will immediately turn right as to simulation rules.
**
**                  Subsequent boards will then be drawn showing the ant's activity.
**
** Arguments:       none
** Dependencies:    Ant.hpp, Ant.cpp, AntEndIntMenu.hpp, AntEndIntMenu.cpp, 
**                  AntSim.hpp, AntSim.cpp, getInteger.hpp, getInteger.cpp
** Returns:         nothing

** File name:       AntSim.cpp
*********************************************************************************/
#include"Ant.hpp"
#include"AntSim.hpp"
#include"AntEndIntMenu.hpp"
#include"getInteger.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

void AntSim()
{
    Ant sim1;

    sim1.setBoardLength(getInteger("Enter number of rows for the board:  \n"));
    sim1.setBoardWidth(getInteger("Enter number of columns for the board: \n"));
    sim1.setSteps(getInteger("Enter the number of steps the ant takes: \n"));
    sim1.setAntRow(getInteger("Enter the starting row of the ant: \n"));
    sim1.setAntColumn(getInteger("Enter the starting column of the ant: \n"));
    sim1.setDirection();
    sim1.makeBoard();

    for(int k = 0; k <= sim1.getSteps(); k++)
    {
        for(int i = 0; i < sim1.getBoardLength() + 2; i++)
        {
            for(int j = 0; j < sim1.getBoardWidth() + 2; j++)
            {
                if (i == sim1.getAntRow() && j == sim1.getAntColumn() )
                {
                    cout << "*";    
                }
                
                else
                {
                    cout << sim1.getBoardSpace(j,i);
                }            
            }
            cout << endl;
        }

        sim1.moveAnt();
        
    }
    
    std::string message = "1. Play Again?\n2. Quit?\n";
    
    sim1.deleteBoard();
    
    AntEndIntMenu(message);
    
}