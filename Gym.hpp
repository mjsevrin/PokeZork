
#ifndef GYM_HPP
#define GYM_HPP

#include <string>
#include "Space.hpp"
using std::string;

class Gym : public Space 
{

	public:
		//constructors & destructors
		Gym(string name = "Pewter City Gym");
		~Gym();
		void interact(Ash*);	
};

#endif
