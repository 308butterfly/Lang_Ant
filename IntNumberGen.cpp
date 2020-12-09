/*********************************************************************************
** Author:          Andrew Thiele
** Date:            4/10/2019
** Description:     Function definition random integer generator
**                  input
** Arguments:       2 signed integers to set the minimum and maximum value with
**                  minimum < maximum
** Dependencies:    ctime, cstdlib
** Returns:         random signed integer in range of arguments
** File name:       getInteger.hpp
*********************************************************************************/

#include<ctime>
#include<cstdlib>

#include"IntNumberGen.hpp"

int IntNumberGen(int minimum, int maximum)
{
    unsigned seed;

    seed = time(0);
    srand(seed);

    return (rand() % (maximum - minimum + 1)) + minimum;


}
