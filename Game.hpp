/********************************************************
 ** Author: Carlos Carrillo                             *
 ** Date:   10/12/2015                                  *
 ** Description: This is the class implementation file  *
 *  of a class called Game. This class is a simplified  *
 *  version of war, using dice instead of cards. It     *
 *  keeps track of the type of dice for each of the 2   *
 *  players, the number of rounds to play, some way to  *
 *  maintain the score, and determine which player won. *
 *******************************************************/

// Game.hpp

#ifndef GAME_HPP
#define GAME_HPP

#include "Die.hpp"
#include "LoadedDie.hpp"

class Game

{
    private:
    
        int dieType1;
        int dieType2;
        int rollCounter1;
        int rollCounter2;
        unsigned playerScore1;
        unsigned playerScore2;
        unsigned scoreCounter1;
        unsigned scoreCounter2;

    public:
    
        Game(); //default constructor
        Game (int, unsigned, int, unsigned); //4-parameter constructor
    
        void setDieType1(int); //mutator
        void setDieType2(int); //mutator
        void setPlayerScore1(unsigned); //mutator
        void setPlayerScore2(unsigned); //mutator
        void roundWinner(); //method to display which player wins each round
        void gameWinner(); //method to display which player is the winner of the game
};
#endif







