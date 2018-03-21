
/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Definition of the Village class. A derived Space class. 
The Village class is where the player can interact with townpeople 
***************************************************************************/
#ifndef VILLAGE_HPP
#define VILLAGE_HPP

#include <string>
#include "Space.hpp"
using std::string;

class Village : public Space 
{

	public:
		//constructors & destructors
		Village(string name, string action = "Explore");
		~Village();
		void interact(Ash*);	
};

#endif

