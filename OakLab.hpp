
#ifndef OAK_HPP
#define OAK_HPP

#include <string>
#include "Space.hpp"
using std::string;

class OakLab : public Space 
{

	public:
		//constructors & destructors
		OakLab(string name = "Professor Oak's Lab");
		~OakLab();
		void interact(Ash*);	
};

#endif

