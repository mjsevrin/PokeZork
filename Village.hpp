
#ifndef VILLAGE_HPP
#define VILLAGE_HPP

#include <string>
#include "Space.hpp"
using std::string;

class Village : public Space 
{

	public:
		//constructors & destructors
		Village(string name);
		~Village();
		void interact();	
};

#endif

