#Author: Carlos Carrillo
#Date:   10/14/2015
#Description: This is the makefile for Lab_1

#This target will compile the entire program

All: total

total:	MainDie.o Die.o LoadedDie.o Game.o
	g++ MainDie.o Die.o LoadedDie.o Game.o -o die

MainDie.o: MainDie.cpp
	g++ -c MainDie.cpp

Die.o: Die.cpp
	g++ -c Die.cpp

LoadedDie.o: LoadedDie.cpp
	g++ -c LoadedDie.cpp

Game.o: Game.cpp
	g++ -c Game.cpp

clean:
	rm -rf *o total