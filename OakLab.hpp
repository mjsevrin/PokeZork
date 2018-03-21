
/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Definition of the OakLab class. A derived Space class. 
The OakLab class is where the player talks to Prof. Oak to earn his Pikachu 
***************************************************************************/

#ifndef OAK_HPP
#define OAK_HPP

#include <string>
#include "Space.hpp"
using std::string;

class OakLab : public Space 
{

	public:
		//constructors & destructors
		OakLab(string name = "Professor Oak's Lab",
 			string action="Talk to PROF OAK");
		~OakLab();
		void interact(Ash*);	
};

#endif

