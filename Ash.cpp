#include <iostream>

#include "Space.hpp"
#include "Ash.hpp"
#include "validate.hpp"
using std::cout;
using std::endl;

Ash::Ash()
{
	potions = 0;
	money = 0;
	gymBadge = false;
}

Ash::~Ash()
{
	for (unsigned i = 0; i < team.size(); i++)
	{
		delete team[i];
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

int Ash::getPotions()
{
	return potions;
}

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

void Ash::move(Space* place)
{
	if (place->getName() == "Route 1" && team.size() == 0)
	{
		cout << "It's dangereous to go alone, I need a pokemon! ";
		cout << endl << endl;
		return;
	}
	location = place;
}

bool Ash::hasPokemon()
{
	if (team.size() > 0)
	{
		return true;
	}
	return false;
}

void Ash::addPokemon(Pokemon* ptr)
{
	team.push_back(ptr);
}

void Ash::healTeam()
{
	for(unsigned i = 0; i < team.size(); i++)
	{
		team[i]->heal(9999);
	}
}

void Ash::spend(int cost)
{
	money -= cost;
}

void Ash::addPotions(int num)
{
	potions += num;
}

void Ash::usePotion(Pokemon* pokemon)
{
	potions--;
	pokemon->heal(35);
}

/*****************************************************************************
* Description: combat ennemy Pokemon until all pokemon in team have fainted
* or the ennemy faints	
* @parameter - pointer to ennemy pokemon 
* @return - none 
*****************************************************************************/
void Ash::Fight(Pokemon* ennemy)
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
			if (potions > 0)
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

	if(winner != team[0])
	{
		cout << " * You lost the fight, contemplate how much of a "
			"failure you are *" << endl;
	}
}
