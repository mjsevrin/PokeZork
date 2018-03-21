
/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Definition of the PokeCenter class. A derived Space class. 
The PokeCenter class is where the player can heal his party 
***************************************************************************/
#ifndef POKECENTER_HPP
#define POKECENTER_HPP

#include <string>
#include "Space.hpp"
using std::string;

class PokeCenter : public Space 
{

	public:
		//constructors & destructors
		PokeCenter(string name = "PokeCenter", 
				string action = "Talk to NURSE");
		~PokeCenter();
		void interact(Ash*);	
};

#endif
