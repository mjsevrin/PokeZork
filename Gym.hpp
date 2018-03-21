
/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Definition of the Gym class. A derived Space class. 
The Gym class is where the player fight the gym leader to earn a gym badge 
***************************************************************************/
#ifndef GYM_HPP
#define GYM_HPP

#include <string>
#include "Space.hpp"
using std::string;

class Gym : public Space 
{

	public:
		//constructors & destructors
		Gym(string name = "Pewter City Gym", 
			string action="Challenge Gym Leader");
		~Gym();
		void interact(Ash*);	
		void gymBattle(Ash*);
};

#endif
