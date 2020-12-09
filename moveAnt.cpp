/*********************************************************************************
** Author:          Andrew Thiele
** Date:            4/9/2019
** Description:     This method will "move" the ant and change the space it was on
**                  from white to black or vice versa using a dynamic 2-d array. 
**                  The Ant will change its position immediately when initially 
**                  placed on the board.  The orientation of the Ant is denoted by 
**                  using characters with u = up, l = left, d = down and r = right.
**                  
**                  Dependencies:  Ant.hpp, Ant.cpp                
**                  
** File name:       moveAnt.cpp
*********************************************************************************/

#include"moveAnt.hpp"

void Ant::moveAnt()
{
    if(Antboard[AntColumn][AntRow] == ' ')
    {
        Antboard[AntColumn][AntRow] = '#';

        switch(orientation)
        {
            case 'u':
                orientation = 'r';

                if(AntColumn == boardWidth)
                {
                    AntColumn = 1;
                }
                else
                {
                    AntColumn++;
                }
                
                break;
            
            case 'r':
                orientation = 'd';
    
                if(AntRow == boardLength)
                {
                    AntRow = 1;
                }
                else
                {
                    AntRow++;
                }
                break;
            
            case 'd':
                orientation = 'l';
                
                if(AntColumn == 1)
                {
                    AntColumn = boardWidth;
                }
                else
                {
                    AntColumn--;
                }
                break;

            case 'l':
                orientation = 'u';
                
                if(AntRow == 1)
                {
                    AntRow = boardLength;
                }
                else
                {
                    AntRow--;
                }
                break;
            
            default:
                break;
        }
        
    }

    else if(Antboard[AntColumn][AntRow] == '#')
    {
        Antboard[AntColumn][AntRow] = ' ';
        switch(orientation)
        {
            case 'u':
                orientation = 'l';
                
                if(AntColumn == 1)
                {
                    AntColumn = boardWidth;
                }
                else
                {
                    AntColumn--;
                }
                break;

            case 'r':
                orientation = 'u';
                
                if(AntRow == 1)
                {
                    AntRow = boardLength;
                }
                else
                {
                    AntRow--;
                }
                break;
            
            case 'd':
                orientation = 'r';
                
                if(AntColumn == boardWidth)
                {
                    AntColumn = 1;
                }
                else
                {
                    AntColumn++;
                }
                break;

            case 'l':
                orientation = 'd';
                
                if(AntRow == boardLength)
                {
                    AntRow = 1;
                }
                else
                {
                    AntRow++;
                }
                break;
            
            default:
                break;
        }

    }

}