
#include <iostream>
#include <string>
#include "Game.hpp"
#include "validate.hpp"

using std::cout;
using std::endl;
using std::string;

Game::Game()
{
	//initialize gameStatus
	this-> gameStatus = true;

	//initialize current day to 0
	this-> currentTime = 0;
	
	//create game spaces
	home = new House;
	pallet_town = new Village("Pallet Town Square");
	lab = new OakLab;
	route1 = new Wilderness;
	pewter_city = new Village("Pewter City Square");
	center1 = new PokeCenter;
	shop1 = new PokeShop;
	gym = new Gym;

	//connect game spaces 
	home->setRight(pallet_town);	
	pallet_town->setLeft(home);
	pallet_town->setRight(lab);
	pallet_town->setUp(route1);
	lab->setLeft(pallet_town);	
	route1->setDown(pallet_town);
	route1->setUp(pewter_city);
	pewter_city->setDown(route1);
	pewter_city->setLeft(shop1);
	pewter_city->setRight(center1);	
	pewter_city->setUp(gym);
	shop1->setRight(pewter_city);
	center1->setLeft(pewter_city);
	gym->setDown(pewter_city);
	
	//create in starting location
	ash = new Ash;
	ash->move(home);	
}

Game::~Game()
{
	delete home;
	delete pallet_town;
	delete lab;
	delete route1;
	delete pewter_city;
	delete center1;
	delete shop1;
	delete gym;
	delete ash;
}


/*****************************************************************************
* Description: over-arching game logic. Player can keep taking action until
* he runs out of time.
* @parameter - none 
* @return - none 
*****************************************************************************/
void Game::run()
{
	//loop while game is running (gameStatus is true)	
	while (gameStatus == true)
	{

		if (currentTime > 10) //check if out of moves
		{
			//update game status to end
			gameStatus = false;
			//tell user he's broke
			cout << "You are out of time!" << endl;
		}
		
		else //if not, continue playing
		{
			//Choose action for Ash
			doAction(); 
		}
	}
		
	//end of game prompt
	cout << "Game over" << endl << endl; 
}	

/*****************************************************************************
* Description: prompt user to move or interact with current location
* @parameter - none 
* @return - none 
*****************************************************************************/
void Game::doAction()
{
	cout << "What should Ash do?" << endl;
	cout << "[1]-Travel somewhere else" << endl;
	cout << "[2]-Explore " << ash->getLocation()->getName() << endl;
	int choice = valInt(1,2);
	if (choice == 1)
	{
		ash->move();
		currentTime++;
	}
	else
	{
		ash->getLocation()->interact(ash);
	}
}
				
