
#include "Ash.hpp"

Ash::Ash()
{
	potions = 0;
	money = 0;
	gymBadge = false;
}

Ash::~Ash()
{
}

void Ash::move(Space* place)
{
	location = place;
}
