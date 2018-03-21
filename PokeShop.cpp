
/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Implementation of the PokeShop class. A derived Space class. 
The PokeShop class is where the player can buy potions 
***************************************************************************/
#include <iostream>
#include "validate.hpp"
#include "PokeShop.hpp"
#include "Ash.hpp"
using std::cout;
using std::endl;

PokeShop::PokeShop(string name, string action): Space (name, action)
{
	
}

PokeShop::~PokeShop()
{}

/*****************************************************************************
* Description: Ash's iteraction with this Space
* @parameter - ptr to Ash 
* @return - none 
*****************************************************************************/
void PokeShop::interact(Ash* ash)
{
	cout << "CLERK: Welcome to our PokeShop! Would you like to buy"
		" a potion for $250? [1]-yes/[2]-no: ";
	int choice = valInt(1,2);
	if (choice == 1)
	{
		if (ash->getFunds() < 250)
		{
			cout << "CLERK: Oh this is so embarrasing..." << endl;
			cout << "CLERK: ..." << endl;
			cout << "CLERK: You can't afford any potions" 
				<< endl << endl;
		}
		else if (ash->backpackFull())
		{
			cout << "CLERK: Oh this is so embarrasing..." << endl;
			cout << "CLERK: ..." << endl;
			cout << "CLERK: You're backpack is full..." 
				<< endl << endl;
		}
		else
		{
			buyPotions(ash);
			cout << "CLERK: Thank you for shopping with us!";
		}
	}
       	cout << endl << endl;
}

/*****************************************************************************
* Description: allows Ash to pay for a pointer and add it to his inventory
* @parameter - ash ptr 
* @return - none 
*****************************************************************************/
void PokeShop::buyPotions(Ash* ash)
{
	ash->spend(250);
	ash->addItem("Potion");

	//commenting this out to fit Final Project guidelines....	
	/*bool boughtPotions = false;
	while(!boughtPotions)
	{
		cout << "CLERK: How many potions will you be buying today?";
		int choice = valInt(0,99);
		if (choice*250 > ash->getFunds())
		{
			cout << "CLERK: You don't have enough money!"
			       " You can afford" << ash->getFunds()/250 <<
		       		"potions." << endl << endl;	       
		}

		else
		{
			cout << choice << " POTIONS added to inventory."
				<< endl << endl;
			ash->spend(choice*250);
			ash->addPotions(choice);
			boughtPotions = true;
		}
	}
	*/
}
