
#ifndef	GAME_HPP 
#define GAME_HPP

#include "Ash.hpp"
#include "Pokemon.hpp"
#include "House.hpp"
#include "Village.hpp"
#include "OakLab.hpp"
#include "Wilderness.hpp"

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
		
	public:
		//constructor & destructor
		Game();
		~Game();

		void run();
};

#endif
