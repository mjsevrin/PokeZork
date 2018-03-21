/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Implementation the Ash class. Ash is the main character of
the game. The class handles the items and location of ash as well as Ash's
actions.
***************************************************************************/

#include <iostream>
#include "validate.hpp"
#include "Space.hpp"
#include "Ash.hpp"
#include "Pokemon.hpp"
#include "Item.hpp"
using std::cout;
using std::endl;

Ash::Ash(Space* ptr)
{
	money = 0;
	for (int i = 0; i < 5; i++)
	{
		backpack[i] = NULL;
	}

	location = home = ptr;
}

Ash::~Ash()
{
	//delete pokemons 
	for (unsigned i = 0; i < team.size(); i++)
	{
		delete team[i];
	}

	//delete backpack items
	for (int i = 0; i < 5; i++)
	{
		if (!(backpack[i] == NULL))
		{
			delete backpack[i];
		}
	}
}

Space* Ash::getLocation()
{
	return location;
}

int Ash::getFunds()
{
	return money;
}

bool Ash::getStatus()
{
	return questStatus;
}	

/*****************************************************************************
* Description: display options of possible locations to travel to and ask 
* user where he would like to move 
* @parameter - none 
* @return - none 
*****************************************************************************/
void Ash::move()
{
	if (location->getLeft() != NULL)
	{
		neighbors.push_back(location->getLeft());
	}	
	if (location->getRight() != NULL)
	{
		neighbors.push_back(location->getRight());
	}	
	if (location->getUp() != NULL)
	{
		neighbors.push_back(location->getUp());
	}	
	if (location->getDown() != NULL)
	{
		neighbors.push_back(location->getDown());
	}	
	
	cout << "Where should Ash go?" << endl;
	for (unsigned i = 0; i < neighbors.size(); i++)
	{
		cout << "[" << i+1 << "]-" << neighbors[i]->getName() << endl;
	}
		
	move(neighbors[valInt(1, neighbors.size())-1]);
	neighbors.clear();
}

/*****************************************************************************
* Description: move Ash location to a specified location
* @parameter - pointer to derived Space pointer 
* @return - none
* NOTE: does not allow travel to route1 until player receives pikachu
* 	does not allow travel to gym until player receives gym key 
*****************************************************************************/
void Ash::move(Space* place)
{
	//forbid going to Route 1 until you own a Pokemon
	if (place->getName() == "Route 1" && team.size() == 0)
	{
		cout << "It's dangereous to go alone, I need a pokemon! ";
		cout << endl << endl;
		return;
	}
	
	//forbid going to Gym until you find the Gym key
	if (place->getName() == "Pewter City Gym" && !hasGymKey())
	{
		cout << "The door is locked...";
		cout << endl << endl;
		return;
	}	

	location = place;
}

/*****************************************************************************
* Description: checks ash has a pokemon in his party
* @parameter - none 
* @return - has pokemon-true, else-false 
*****************************************************************************/
bool Ash::hasPokemon()
{
	if (team.size() > 0)
	{
		return true;
	}
	return false;
}

/*****************************************************************************
* Description: add a pokemon to Ash's pokemon team (vector)
* @parameter - pokemon to add to team 
* @return - none 
*****************************************************************************/
void Ash::addPokemon(Pokemon* ptr)
{
	team.push_back(ptr);
}

/*****************************************************************************
* Description: heal all pokemon in team
* @parameter - none
* @return - none 
*****************************************************************************/
void Ash::healTeam()
{
	for(unsigned i = 0; i < team.size(); i++)
	{
		team[i]->heal(9999);
	}
}

/*****************************************************************************
* Description: function to simulate receiving money
* @parameter - money received (int) 
* @return - none 
*****************************************************************************/
void Ash::earn(int pay)
{
	money += pay;
}

/*****************************************************************************
* Description: function to simulate spending money
* @parameter - cost of an item to spend money on 
* @return - none
*****************************************************************************/
void Ash::spend(int cost)
{
	money -= cost;
}

/*****************************************************************************
* Description: check if backpack has space in it
* @parameter - none 
* @return - space avaible (NULL ptr element)-false, else-true 
*****************************************************************************/
bool Ash::backpackFull()
{
	//iterate over backpack items
	for (int i = 0; i < 5; i++)
	{
		if (backpack[i] == NULL)
		{
			return false;
		}
	}

	//reaching here means backpack is full
	return true;
}

/*****************************************************************************
* Description: create and add item to the backpack
* @parameter - name of item  
* @return - succesfully added-true, else-false 
*****************************************************************************/
bool Ash::addItem(string name)
{
	//try to add Potion to backpack
	for (int i = 0; i < 5; i++)
	{
		if (backpack[i] == NULL)
		{
			backpack[i] = new Item(name);
			return true;
		}
	}

	//reaching here means backpack is full
	cout << "Backpack is out of space!" << endl;
	return false;		//flag potion was not added	
}

/*****************************************************************************
* Description: check Ash has a potion item in this backpack
* @parameter - none 
* @return - bool 
*****************************************************************************/
bool Ash::hasPotion()
{
	for (int i = 0; i < 5; i++)
	{
		if (backpack[i] != NULL)
		{
			if (backpack[i]->getName() == "Potion")
			{
				return true;
			}
		}
	}
	return false;
}

/*****************************************************************************
* Description: use potion on pokemon (in combat) to heal him
* @parameter - pokemon to use potion on 
* @return - none 
*****************************************************************************/
void Ash::usePotion(Pokemon* pokemon)
{
	for (int i = 0; i < 5; i++)
	{
		if (backpack[i] != NULL)
		{
			if (backpack[i]->getName() == "Potion")
			{
				pokemon->heal(35);
				delete backpack[i];
				backpack[i] = NULL;
				return;
			}
		}
	}
}

/*****************************************************************************
* Description: check Ash's pokemons have not all fainted
* @parameter - none 
* @return - bool 
*****************************************************************************/
bool Ash::teamKO()
{
	for (unsigned i = 0; i < team.size(); i++)
	{
		if (team[i]->getHP() > 0)
		{
			return false;
		}
	}
	return true;
}


/*****************************************************************************
* Description: combat ennemy Pokemon until all pokemon in team have fainted
* or the ennemy faints	
* @parameter - pointer to ennemy pokemon 
* @return - none 
*****************************************************************************/
bool Ash::Fight(Pokemon* ennemy)
{
	Pokemon* winner = NULL;

	//repeat combat until a winner is returned
	do
	{
		//announce combatant 
		cout << "Combatant: " << team[0]->getName() << " ";
		team[0]->printHP();	
		cout << "Opponent: " << ennemy->getName() << " ";
		ennemy->printHP();	
		
		//selecting turn action
		cout << "What should we do? [1]-Attack, [2]-Use Potion: ";
		int choice = valInt(1,2);

		if (choice ==2)
		{
			if (hasPotion())
			{
				usePotion(team[0]);
			}
			else
			{
				cout << "* You waste your time looking for a "
				"non-existent potion while the opponent's " 
				"pokemon attacks *" << endl;
			}
		}

		//fight combat round	
		winner = team[0]->combat(choice, ennemy);
	}
	while(!winner);

	//if Ash lost fight
	if(winner != team[0])
	{
		cout << "* You lost the fight *" << endl << endl; 
		cout << "* Restarting at home location * " << endl << endl;
		
		//teleport to home and reset pokemon HP
		location = home;
		healTeam();		
		return false;
	}
	else
	{
		cout << "We won the fight! " << endl << endl;
	}
	return true;
}

/*****************************************************************************
* Description: check ash has gym key (to enter the gym)
* @parameter - none 
* @return - bool  
*****************************************************************************/
bool Ash::hasGymKey()
{
	for (int i = 0; i < 5; i++)
	{
		if (backpack[i] != NULL)
		{
			if (backpack[i]->getName() == "Gym Key")
			{
				return true;
			}
		}
	}

	//reaching here means backpack is full
	return false;		//flag potion was not added	
}

/*****************************************************************************
* Description: add a badge to Ash's badge collection
* @parameter - name of the badge 
* @return - none 
*****************************************************************************/
void Ash::earnBadge(string badgeName)
{
	badges.push_back(badgeName);
}

/*****************************************************************************
* Description: check Ash's owns a specific badge
* @parameter - badge name 
* @return - bool 
*****************************************************************************/
bool Ash::hasBadge(string badgeName)
{
	//iterate over badge container to find a badge of the given name
	for (unsigned i = 0; i < badges.size(); i++)
	{
		if (badges[i] == badgeName)
		{
			return true;
		}
	}
	return false;
}

/*****************************************************************************
* Description: sets flag that quest has been completed (to end the game)
* @parameter - none 
* @return - none 
*****************************************************************************/
void Ash::completeQuest()
{
	questStatus = true;
}
