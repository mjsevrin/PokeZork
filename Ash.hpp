
/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Definition of the Ash class. Ash is the main character of
the game. The class handles the items and location of ash as well as Ash's
actions.
***************************************************************************/

#ifndef ASH_HPP
#define ASH_HPP

#include <vector>
#include <string>
using std::vector;
using std::string;

class Space;
class Pokemon;
class Item;
class Ash
{
	private:
		Space* location;
		vector<Space*> neighbors;
		vector<Pokemon*> team;
		vector<string> badges;
		Item* backpack[5];
		int money;
	       	Space* home;
		bool questStatus = false;	
	
	public:
		//constructor & destructor
		Ash(Space*);
		~Ash();
		
		//getters
		Space* getLocation();
		int getFunds();
		bool getStatus();

		void move();
		void move(Space*);
		bool hasPokemon();
		void addPokemon(Pokemon*);
		void healTeam();
		void earn(int);
		void spend(int);
		bool backpackFull();
		bool addItem(string);
		bool hasPotion();
		void usePotion(Pokemon*); 
		bool teamKO();	
		bool Fight(Pokemon*);
		bool hasGymKey();
		void earnBadge(string);
		bool hasBadge(string);
		void completeQuest();
};

#endif
