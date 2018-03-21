
/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Implementation of the Town class. A derived Space class. 
The Town class is where the player can interact with townpeople 
***************************************************************************/

#include <iostream>
#include "validate.hpp"
#include "Town.hpp"
#include "Ash.hpp"
using std::cout;
using std::endl;

Town::Town(string name, string action): Space (name, action)
{
}

Town::~Town()
{}

/*****************************************************************************
* Description: Ash's iteraction with this Space
* @parameter - ptr to Ash 
* @return - none 
*****************************************************************************/
void Town::interact(Ash* ash)
{
	if (!ash->hasGymKey())
	{
		cout << "OLD MAN: Hey Child, I am an old man now but back in "
			"the day I was a great trainer. Do you want to "<< endl 
			<< "some tips to beat Gym leader?" << endl;
		cout << "[1]-yes, [2]-no: ";
		int choice = valInt(1,2);

		if (choice == 1)
		{
			cout << "OLD MAN: Gym leaders have strong Pokemon with high HP"
				" I always made sure to have potions in my" << endl <<
				"to turn the fight in my favor. If you have a few"
				" coins, I would buy 1-2 potions at the" << endl <<
				"PokeShop in town" << endl << endl;

			cout << "OLD MAN: Thanks for listening to me, you'll need this"
				" for you adventure" << endl;

			cout << "* You receive the GYM KEY * " << endl << endl;
			cout << "** You receive $250 **" << endl << endl;
			ash->addItem("Gym Key");
			ash->earn(250);
		}		
	}
	else
	{
		cout << "OLD MAN: Good luck to you and your Pikachu, I hope" 
			" you beat the locol Gym leader, BROCK!" << endl << endl; 
	}
}

