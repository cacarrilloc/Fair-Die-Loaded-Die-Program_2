/*******************************************************
 ** Author: Carlos Carrillo                            *
 ** Date:   10/14/2015                                 *
 ** Description: This is the main function file.       *
 *  It rolls each die N times and print the result of  *
 *  the game by calling the Game class.                *
 ******************************************************/

#include <iostream>
#include <cctype>
#include <cstdlib>
#include <ctime>

#include "Die.hpp"
#include "LoadedDie.hpp"
#include "Game.hpp"

using namespace std;

int main()
{
    //Die objects
    Die die;
    Die die2;
    
    //LoadedDie objects
    LoadedDie loaded;
    LoadedDie loaded2;
    
    //Game object
    Game play;
    
    //main variables
    int lados;
    int rolls;
    int option;
    
    //welcome the user
    cout << "\n\n**** WELCOME TO THE WAR GAME WITH DICE!****\n"<<endl;
    
    //prompt the user # of sides
    cout << "How many sides would you like your dice to have? ";
    cin >> lados;
    
    //prompt the user # of rolls for the game
    cout << "How many times would you like to roll the dice? ";
    cin >> rolls;

    cout << endl;
    
    do
    {
        //main menu to prompt the user to choose the type of dice
        //each player will play with and the other necessary inputs.
        //Display the Menu Options to show possible combinations
        cout <<"MAIN MENU:" << endl;
        cout <<"Enter 1 to select a NORMAL die for Player 1 and a NORMAL die for Player 2."<<endl;
        cout <<"Enter 2 to select a NORMAL die for Player 1 and a LOADED die for Player 2." << endl;
        cout <<"Enter 3 to select a LOADED die for Player 1 and a NORMAL die for Player 2." << endl;
        cout <<"Enter 4 to select a LOADED die for Player 1 and a LOADED die for Player 2." << endl;
        
        //Prompt the user to enter an option from the menu
        cout << "\nPlease select an option: ";
        cin >> option; //take the input value
        cout <<endl;
        
        cout << "\nTHE WAR STARTS!!!\n"<<endl;
        
        if(option == 1) //NORMAL dice for Player 1 and NORMAL dice for Player 2
         {
             srand(time(0));
             die.setSidesDie1(lados);
             die2.setSidesDie1(lados);
             
             for(int i=0; i<rolls; i++)
               {
                   unsigned score1 = 0;
                   unsigned score2 = 0;
                   score1 = die.Roll1();
                   score2 = die2.Roll1();
                   play.setDieType1(1);
                   play.setPlayerScore1(score1);
                   play.setDieType2(1);
                   play.setPlayerScore2(score2);
                   play.roundWinner();
               }
             
             play.gameWinner();
         }

        else if(option == 2) //NORMAL dice for Player 1 and LOADED dice for Player 2
          {
            srand(time(0));
            die.setSidesDie1(lados);
            loaded.setSidesDie1(lados);
              
            for(int i=0; i<rolls; i++)
              {
                unsigned score1 = 0;
                unsigned score2 = 0;
                score1 = die.Roll1();
                score2 = loaded.getloadedrollValue();
                play.setDieType1(1);
                play.setPlayerScore1(score1);
                play.setDieType2(2);
                play.setPlayerScore2(score2);
                play.roundWinner();
              }
              
            play.gameWinner();
          }
        
        else if(option == 3) //LOADED dice for Player 1 and NORMAL dice for Player 2
          {
            srand(time(0));
            loaded.setSidesDie1(lados);
            die.setSidesDie1(lados);
            
            for(int i=0; i<rolls; i++)
              {
                unsigned score1 = 0;
                unsigned score2 = 0;
                score1 = loaded.getloadedrollValue();
                score2 = die.Roll1();
                play.setDieType1(2);
                play.setPlayerScore1(score1);
                play.setDieType2(1);
                play.setPlayerScore2(score2);
                play.roundWinner();
              }
              
            play.gameWinner();
          }
        
        else if(option == 4) //LOADED dice for Player 1 and LOADED dice for Player 2
          {
            srand(time(0));
            loaded.setSidesDie1(lados);
            loaded2.setSidesDie1(lados);
              
            for(int i=0; i<rolls; i++)
              {
                unsigned score1 = 0;
                unsigned score2 = 0;
                score1 = loaded.getloadedrollValue();
                score2 = loaded2.getloadedrollValue();
                play.setDieType1(2);
                play.setPlayerScore1(score1);
                play.setDieType2(2);
                play.setPlayerScore2(score2);
                play.roundWinner();
              }
              
            play.gameWinner();
          }

        else if(isalpha(option)) //conditional to validate the input
          {
            cout << "\nInvalid option entered. Try again!\n" << endl;
            return 0;
          }
        
        else //Displaying error message for invalid choice (other than 1, 2, 3 or 4)
          {
            cout << "\nInvalid option entered. Try again!\n" << endl;
          }
        
    }while(option != 1 && option != 2 && option != 3 && option != 4);
    
    return 0;
}
