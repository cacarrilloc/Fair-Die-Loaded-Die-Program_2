/********************************************************
 ** Author: Carlos Carrillo                             *
 ** Date:   10/14/2015                                  *
 ** Description: This is the class specification file   *
 *  of a class called Die. This is the parent class of  *
 *  the LoadDie class. It contains only 1 data member,  *
 *  which is inherited by LoadedDie. It has 2 functions:*
 *  1 mutator function and 1 method function that       *
 *  returns the exact value of a single roll of a die.  *
 *******************************************************/

//Die.cpp
#include <iostream>
#include <cstdlib>
#include "Die.hpp"

using namespace std;

/*************************************************
 *                   Die::Die                    *
 * Default constructor: initializes the pointer  *
 * variable sidesDie1 to zero.                   *
 ************************************************/

Die::Die()
{
    SidesDie1 = 0;
}

/*************************************************
 *                   Die::Die                    *
 * 1-parameter constructor: Passes a parameter   *
 * to set and initialize the Roll method.        *
 ************************************************/

Die::Die(unsigned lados)
{
    setSidesDie1(lados);
}

/*************************************************
 *             Die::setSidesDie1                 *
 * This function sets the value of the member    *
 * variable SidesDie1.                           *
 ************************************************/

void Die::setSidesDie1(unsigned lados)
{
    SidesDie1 = lados;
}

/*************************************************
 *                  Die::Roll1                   *
 * This function returns the value of a single   *
 * roll of a single die                          *
 ************************************************/

unsigned Die::Roll1()
{
    unsigned LastRoll1 = 0;
    
    //generate a ramdom number according to the
    //number of sides chosen
    
    LastRoll1 = (rand() % SidesDie1) + 1;
    
    return LastRoll1;
}



