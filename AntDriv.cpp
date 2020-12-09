/*********************************************************************************
** Author:          Andrew Thiele
** Date:            4/6/2019
** Description:     Driver program from LangAnt
** Arguments:       none
** Dependencies:    AntStartIntMenu.hpp, AntStartIntMenu.cpp
** Returns:         nothing
** File name:       AntDriv.cpp
*********************************************************************************/

#include <iostream> 
#include "AntStartIntMenu.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

/*To compile main put the following in the same directory and compile using Makefile

.\Ant.cpp .\AntDirectionIntMenu.cpp .\AntDriv.cpp .\AntEndIntMenu.cpp .\AntSim.cpp 
.\AntStartIntMenu.cpp .\getInteger.cpp .\IntNumberGen.cpp .\intRangeCheck.cpp 
.\moveAnt.cpp Makefile \Ant.hpp .\AntDirectionIntMenu.hpp  .\AntEndIntMenu.hpp 
.\AntSim.hpp .\AntStartIntMenu.hpp .\getInteger.hpp .\IntNumberGen.hpp 
.\intRangeCheck.hpp .\moveAnt.hpp
*/

int main()
{
    string message = "1. Start Langton's Ant simulation\n2. Quit\n"; 

    AntStartIntMenu(message);

    
    return 0;
}