/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Definitino of the Town class. A derived Space class. 
The Town class is where the player can interact with townpeople 
***************************************************************************/

#ifndef TOWN_HPP
#define TOWN_HPP

#include <string>
#include "Space.hpp"
using std::string;

class Town : public Space 
{

	public:
		//constructors & destructors
		Town(string name, string action = "Explore");
		~Town();
		void interact(Ash*);	
};

#endif

