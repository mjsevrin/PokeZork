
#ifndef HOUSE_HPP
#define HOUSE_HPP

#include <string>
#include "Space.hpp"
using std::string;

class House : public Space 
{
	public:
		//constructors & destructors
		House(string name =  "Mom's House");
		~House();
		
		void interact(Ash*);	
						
};

#endif

