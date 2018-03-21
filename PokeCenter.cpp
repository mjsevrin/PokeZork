
/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Implementation of the PokeCenter class. A derived Space class. 
The PokeCenter class is where the player can heal his party 
***************************************************************************/
#include <iostream>
#include "validate.hpp"
#include "PokeCenter.hpp"
#include "Ash.hpp"

using std::cout;
using std::endl;

PokeCenter::PokeCenter(string name, string action): Space (name, action)
{
	
}

PokeCenter::~PokeCenter()
{}

/*****************************************************************************
* Description: Ash's iteraction with this Space
* @parameter - ptr to Ash 
* @return - none 
*****************************************************************************/
void PokeCenter::interact(Ash* ash)
{
	cout << "NURSE: Welcome to our Pokemon Center! Would you like to heal"
		" your pokemons free of charge?" << endl << "[1]-yes/[2]-no: ";
	int choice = valInt(1,2);
	if (choice == 1)
	{
		ash->healTeam();
		cout << "NURSE: Your party has been healed!" << endl << endl;
	}
	cout << "NURSE: Thank you for coming, have a safe journey!";
       	cout << endl << endl;
}
