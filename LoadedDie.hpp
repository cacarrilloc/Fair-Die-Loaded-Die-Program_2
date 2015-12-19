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

//LoadedDie.hpp

#ifndef LOADEDDIE_HPP
#define LOADEDDIE_HPP

#include "LoadedDie.hpp"
#include "Die.hpp"

class LoadedDie: public Die
{
    
public:
    
    unsigned getloadedrollValue();
    
};
#endif
