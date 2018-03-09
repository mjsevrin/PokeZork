
#ifndef POKECENTER_HPP
#define POKECENTER_HPP

#include <string>
#include "Space.hpp"
using std::string;

class PokeCenter : public Space 
{

	public:
		//constructors & destructors
		PokeCenter(string name = "PokeCenter");
		~PokeCenter();
		void interact(Ash*);	
};

#endif
