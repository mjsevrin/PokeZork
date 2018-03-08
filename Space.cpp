
#include "Space.hpp"


Space::Space(string name)
{
	this->name = name;
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


