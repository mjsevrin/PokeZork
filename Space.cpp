
/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Implementation of the Space abstract class.  Spaces are the 
game tiles the player can travel to and interact with
***************************************************************************/

#include "Space.hpp"
#include "Ash.hpp"

Space::Space(string name, string action)
{
	this->name = name;
	this->action = action;
	this->left_ptr = NULL;
	this->right_ptr = NULL;
	this->up_ptr = NULL;
	this->down_ptr = NULL;

}

Space::~Space() {}

string Space::getName()
{
	return name;
}

string Space::getAction()
{
	return action;
}

Space* Space::getLeft()
{
	return left_ptr;
}

Space* Space::getRight()
{
	return right_ptr;
}

Space* Space::getUp()
{
	return up_ptr;
}

Space* Space::getDown()
{
	return down_ptr;
}

/*****************************************************************************
* Description: class of function to set pointers to a space's neighbors
* @parameter -  
* @return - 
*****************************************************************************/
void Space::setLeft(Space* ptr)
{
	this->left_ptr = ptr;
}

void Space::setRight(Space* ptr)
{
	this->right_ptr = ptr;
}

void Space::setUp(Space* ptr)
{
	this->up_ptr = ptr;
}

void Space::setDown(Space* ptr)
{
	this->down_ptr = ptr;
}


