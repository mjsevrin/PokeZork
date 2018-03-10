
#ifndef ASH_HPP
#define ASH_HPP

#include <vector>
#include "Pokemon.hpp"
using std::vector;

class Space;
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
		int getFunds();
		int getPotions();

		void move();
		void move(Space*);
		bool hasPokemon();
		void addPokemon(Pokemon*);
		void healTeam();
		void spend(int);
		void addPotions(int);
		void usePotion(Pokemon*); 
		void Fight(Pokemon*);
};

#endif
