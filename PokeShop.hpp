
/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Definitino of the PokeShop class. A derived Space class. 
The PokeShop class is where the player can buy potions 
***************************************************************************/
#ifndef POKESHOP_HPP
#define POKESHOP_HPP

#include <string>
#include "Space.hpp"
using std::string;

class PokeShop : public Space 
{

	public:
		//constructors & destructors
		PokeShop(string name = "PokeShop",
			string action = "Shop");
		~PokeShop();
		void interact(Ash*);	
		void buyPotions(Ash*);
};

#endif
