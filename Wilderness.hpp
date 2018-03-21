
/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Definition of the Wilderness class. A derived Space class. 
The Wilderness class is where the player can fight pokemon to train his party 
***************************************************************************/
#ifndef WILDERNESS_HPP
#define WILDERNESS_HPP

#include <string>
#include "Space.hpp"
using std::string;

class Wilderness : public Space 
{

	public:
		//constructors & destructors
		Wilderness(string name = "Route 1",
				string action = "Search bushes for Pokemons");
		~Wilderness();
		void interact(Ash*);	
};

#endif

