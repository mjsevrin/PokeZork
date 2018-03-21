
/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Definition of the House class. A derived Space class. 
The House class is where the player can talk to Mom and eventually win the
game.
***************************************************************************/

#ifndef HOUSE_HPP
#define HOUSE_HPP

#include <string>
#include "Space.hpp"
using std::string;

class House : public Space 
{
	private:
		bool moneyGiven;

	public:
		//constructors & destructors
		House(string name="Mom's House", string action="Talk to MOM");
		~House();
		
		void interact(Ash*);	
						
};

#endif

