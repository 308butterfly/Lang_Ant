/*********************************************************************************
** Author:          Andrew Thiele
** Date:            1/8/2019
** Description:    
** File name: 
*********************************************************************************/

#include <iostream> 
#include <fstream>
#include "intRangeCheck.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ifstream;
using std::ofstream;

int main()
{
    int check;
    std::string message = "Enter your number\n";
    /*cout << "leftbound\n";
    //////cin >> left;
    cout << "rightbound\n";
    cin >> right;*/
    check = getInteger(message);

    

    cout << intRangeCheck(0, 10, check, message ) <<endl;

    return 0;
}