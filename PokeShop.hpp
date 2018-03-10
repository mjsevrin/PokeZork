
#ifndef POKESHOP_HPP
#define POKESHOP_HPP

#include <string>
#include "Space.hpp"
using std::string;

class PokeShop : public Space 
{

	public:
		//constructors & destructors
		PokeShop(string name = "PokeShop");
		~PokeShop();
		void interact(Ash*);	
		void buyPotions(Ash*);
};

#endif
