
/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Implementation of the Wilderness class. A derived Space class. 
The Wilderness class is where the player can fight pokemon to train his party 
***************************************************************************/
#include <iostream>
#include "getRand.hpp"
#include "Wilderness.hpp"
#include "Ash.hpp"
#include "Pokemon.hpp"
using std::cout;
using std::endl;

Wilderness::Wilderness(string name, string action): Space (name, action)
{
	
}

Wilderness::~Wilderness()
{}

/*****************************************************************************
* Description: Ash's iteraction with this Space
* @parameter - ptr to Ash 
* @return - none 
*****************************************************************************/
void Wilderness::interact(Ash* ash)
{
	//create pokemon with semi-random stats
	Pokemon* pokemon = new Pokemon("Caterpie", getRand(20, 25), 3, 30);
	
	cout << "A wild CATERPIE appears!" << endl << endl;
	
	//fight Caterpie
	ash->Fight(pokemon);

	//clean up
	delete pokemon;
}
