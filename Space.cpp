
#include "Space.hpp"


Space::Space(string name, Space* left, Space* right, Space* up, Space* down)
{
	this->name = name;
	this->left_ptr = left;
	this->right_ptr = right;
	this->up_ptr = up;
	this->down_ptr = down;
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
