#ifndef POKEMON_HPP
#define POKEMON_HPP

#include <string>

using std::string;

class Pokemon 
{
	private:	
		//pokemon species
		string name;

		//stats	
		int HP,
		    maxHP,
		    lvl,
		    power,
		    currentXP,
		    level_upXP;

	public:
		//constructor & destructors
		Pokemon(string name, int maxHP, int lvl, int power);
		~Pokemon() {} ;

		//getters
		int getHP();
		string getName();
 
		//misc.
		int attack();	
		void defend(int);
		void heal(int);
		void level_up();
};

#endif
