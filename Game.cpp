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

//Game.cpp
#include <iostream>
#include "Game.hpp"

using namespace std;

/*************************************************
 *                  Game::Game                   *
 * Default constructor: initializes all the      *
 * variables to zero.                            *
 ************************************************/

Game::Game()
{
    dieType1 = 0;
    dieType2 = 0;
    rollCounter1 = 0;
    rollCounter2 = 0;
    playerScore1 = 0;
    playerScore2 = 0;
    scoreCounter1 = 0;
    scoreCounter2 = 0;
}

/*************************************************
 *                   Game::Game                  *
 * 4-parameter constructor: passes parameters to *
 * set methods and initialize each field.        *
 ************************************************/

Game::Game(int typeOfDie1, unsigned rollScore1, int typeOfDie2, unsigned rollScore2)
{
    setDieType1 (typeOfDie1);
    setPlayerScore1 (rollScore1);
    setDieType2 (typeOfDie2);
    setPlayerScore2 (rollScore2);
}

/*************************************************
 *              Game::setDieType1                *
 * This function sets the value of the member    *
 * variable dieType1 and displays the type of    *
 * die the player is playing with.               *
 ************************************************/

void Game::setDieType1(int typeOfDie1)
{
    dieType1 = typeOfDie1;
    
    if(dieType1 == 1)
      {
        cout << "Player 1 is using a regular die" << endl;
      }
    if(dieType1 == 2)
      {
        cout << "Warning: Player 1 is using a loaded die!! :)" << endl;
      }
}

/*************************************************
 *            Game::setPlayerScore1              *
 * This function sets the value of the member    *
 * variable playerScore1 and displays the score  *
 * Player 1 had in the round.                    *
 ************************************************/

void Game::setPlayerScore1(unsigned rollScore1)
{
    playerScore1 = rollScore1;
    rollCounter1++;
    cout <<"Player 1 scored "<<playerScore1<<" in round # "<<rollCounter1<<".\n"<<endl;
}

/*************************************************
 *              Game::setDieType2                *
 * This function sets the value of the member    *
 * variable dieType2 and displays the type of    *
 * die the player is playing with.               *
 ************************************************/

void Game::setDieType2(int typeOfDie2)
{
    dieType2 = typeOfDie2;
    
    if(dieType2 == 1)
      {
        cout << "Player 2 is using a regular die" << endl;
      }
    if(dieType2 == 2)
      {
        cout << "Warning: Player 2 is using a loaded die!! :)" << endl;
      }
}

/*************************************************
 *           Game::setPlayerScore2               *
 * This function sets the value of the member    *
 * variable playerScore2 and displays the score  *
 * Player 1 had in the round.                    *
 ************************************************/

void Game::setPlayerScore2(unsigned rollScore2)
{
    playerScore2 = rollScore2;
    rollCounter2++;
    cout <<"Player 2 scored "<<playerScore2<<" in round # "<<rollCounter2<<".\n"<<endl;
}

/*************************************************
 *              Game::roundWinner()              *
 * This function displays which Player wins the  *
 * the round or if there is a tie.               *
 ************************************************/

void Game::roundWinner()
{
    if(playerScore1 > playerScore2)
      {
        scoreCounter1++;
        cout << "---> Player 1 wins round # "<<rollCounter1<<".\n"<<endl;
      }
    
    if(playerScore2 > playerScore1)
      {
        scoreCounter2++;
        cout << "---> Player 2 wins round # "<<rollCounter2<<".\n"<<endl;
      }
    
    if(playerScore2 == playerScore1)
      {
        cout << "---> It is a tie in round # "<<rollCounter1<<".\n"<<endl;
      }
}

/*************************************************
 *               Game::gameWinner()              *
 * This function displays which Player wins the  *
 * the entire game or if there is a tie.         *
 ************************************************/

void Game::gameWinner()
{
    if(scoreCounter1 > scoreCounter2)
      {
        cout << "*** PLAYER 1 WON THE GAME!!***\n" << endl;
      }
    
    if(scoreCounter2 > scoreCounter1)
      {
        cout << "*** PLAYER 2 WON THE GAME!!***\n" << endl;
      }
    
    if(scoreCounter1 == scoreCounter2)
      {
        cout << "*** IT IS A TIE! Noboby won this game :( ***\n" << endl;
      }
}




