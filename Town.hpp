

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

