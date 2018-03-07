
#include <iostream>
#include <string>
#include "Game.hpp"

using std::cout;
using std::endl;
using std::string;

Game::Game()
{
	//initialize gameStatus
	this-> gameStatus = true;

	//initialize current day to 0
	this-> currentTime = 0;
}

Game::~Game()
{
}


void Game::run()
{
	//loop while game is running (gameStatus is true)	
	while (gameStatus == true)
	{

		if (currentTime > 48) //check if out of moves
		{
			//update game status to end
			gameStatus = false;
			//tell user he's broke
			cout << "You are out of time!" << endl;
		}
		
		else //if not, continue playing
		{
			//Choose action for Ash 
				
			//increment currentTime
			currentTime++;
		}
	}
		
	//end of game prompt
	cout << "Game over" << endl << endl; 
}	
				
