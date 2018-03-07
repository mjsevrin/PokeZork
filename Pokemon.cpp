#include <iostream>
#include "Pokemon.hpp"
using std::cout;
using std::endl;

//constructors
Pokemon::Pokemon(string name, int HP, int lvl, int power)
{
	this->name = name;
	this->maxHP = HP;
	this->HP = HP;
	this->lvl = lvl;
	this->power = power;
	this->currentXP = 0;
	this->level_upXP = 25;
}

//getters
int Pokemon::getHP()
{
	return HP;
}

string Pokemon::getName()
{
	return name;
}


/*****************************************************************************
* Description: heals for X HP, heal cannot exceed maxHP.
* @parameter - value to be healed 
* @return - none 
*****************************************************************************/
void Pokemon::heal(int value)
{
	if (maxHP - HP  < value)
	{
		value = maxHP - HP;
	}
	HP += value;
	cout << name << " has healed " << value << " HP." << endl << endl;	
}

/*****************************************************************************
* Description: attack function for a pokemon. Attack is dependen on pokemon's
* lvl and 'power' stat. Formula used is a simplified version of the pokemon 
* gen I damage calculations. 
* @parameter - none 
* @return - attack strength 
*****************************************************************************/
int Pokemon::attack()
{
	int damage = (((2*lvl)+2)*power/50)+2;	//adapted from official formula 
	return damage;
}

/*****************************************************************************
* Description: defend function for a Pokemon. 
* @parameter - attack points 
* @return - none 
*****************************************************************************/
void Pokemon::defend(int attack)
{
	if (HP - attack < 0)
	{
		HP = 0;
	}
	else
	{
		HP -= attack;
	}
}


/*****************************************************************************
* Description: level up a pokemon and ajusts experience tracking accordingly
* @parameter - none 
* @return - none 
*****************************************************************************/
void Pokemon::level_up()
{
	lvl++;
	currentXP = 0;
	level_upXP += level_upXP/2;
}



