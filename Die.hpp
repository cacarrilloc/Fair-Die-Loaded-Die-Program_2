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

// Die.hpp
#ifndef DIE_HPP
#define DIE_HPP

#include "Die.hpp"

class Die
{
    protected:
    
        unsigned SidesDie1;
    
    public:
    
        Die(); //default constructor
        Die(unsigned); //1-parameter constructor
    
        void setSidesDie1(unsigned); //mutator
        unsigned Roll1(); //method to roll the dice
};
#endif


