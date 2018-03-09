#include <iostream>
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
	location = place;
}
