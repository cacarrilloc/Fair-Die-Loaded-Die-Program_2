/*********************************************************
 ** Author: Carlos Carrillo                              *
 ** Date:   10/12/2015                                   *
 ** Description: This is the class implementation file   *
 *  of a class called LoadedDie. This class is a derived *
 *  class from the Die class. Its only data member       *
 *  (SidesDie1) is inherited from the Die class. Its     *
 *  only function (getloadedrollValue)returns the value  *
 *  of a single roll that is higher than normal.         *
 ********************************************************/

//LoadedDie.cpp

#include <iostream>
#include <cstdlib>
#include "LoadedDie.hpp"

using namespace std;

/********************************************************
 * Function: getloadedrollValue()                       *
 * Description: A non-parameter function that randomly  *
 * selects the value of a single roll of the loaded die *
 * and returns that value.                              *
 *******************************************************/
unsigned LoadedDie::getloadedrollValue()
{
    unsigned lroll = rand() % SidesDie1 + 1;
    unsigned loadedroll = lroll * 2;
    
    if (loadedroll >= SidesDie1)
    {
        return SidesDie1;
    }
    
    else
        return loadedroll;	
}


