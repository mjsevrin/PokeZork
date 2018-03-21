
/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Definition of the Game class. The class handles the smooth
running of the game.
***************************************************************************/

#ifndef	GAME_HPP 
#define GAME_HPP

#include "Ash.hpp"
#include "Pokemon.hpp"
#include "House.hpp"
#include "Village.hpp"
#include "OakLab.hpp"
#include "Wilderness.hpp"
#include "Town.hpp"
#include "PokeCenter.hpp"
#include "PokeShop.hpp"
#include "Gym.hpp"

class Game 
{
	private:
		bool gameStatus;	
		int currentTime;

		Ash* ash;
		House* home;
		Village* pallet_town;
		OakLab* lab;
		Wilderness* route1;
		Town* pewter_city;
		PokeCenter* center1;
		PokeShop* shop1;
		Gym* gym;
		
	public:
		//constructor & destructor
		Game();
		~Game();

		void run();
		void doAction();
};

#endif
