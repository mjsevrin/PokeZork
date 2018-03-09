
#ifndef ASH_HPP
#define ASH_HPP

#include <vector>
#include "Space.hpp"
#include "Pokemon.hpp"
using std::vector;

class Ash
{
	private:
		Space* location;
		vector<Space*> neighbors;
		vector<Pokemon*> team;
		int potions;
		int money; 
		bool gymBadge;
	
	public:
		//constructor & destructor
		Ash();
		~Ash();
		
		//getters
		Space* getLocation();
		
		void move();
		void move(Space*);
		
};

#endif
