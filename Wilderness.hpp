
#ifndef WILDERNESS_HPP
#define WILDERNESS_HPP

#include <string>
#include "Space.hpp"
using std::string;

class Wilderness : public Space 
{

	public:
		//constructors & destructors
		Wilderness(string name = "Route 1");
		~Wilderness();
		void interact();	
};

#endif

