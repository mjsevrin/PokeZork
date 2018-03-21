
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

