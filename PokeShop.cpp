
#include <iostream>
#include "validate.hpp"
#include "PokeShop.hpp"
#include "Ash.hpp"
using std::cout;
using std::endl;

PokeShop::PokeShop(string name): Space (name)
{
	
}

PokeShop::~PokeShop()
{}

void PokeShop::interact(Ash* ash)
{
	cout << "CLERK: Welcome to our PokeShop! Would you like to heal"
		" your pokemons free of charge? [1]-yes/[2]-no: ";
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
		else
		{
			buyPotions(ash);
		}
	}
	cout << "CLERK: Thank you for shopping with us!";
       	cout << endl << endl;
}

void PokeShop::buyPotions(Ash* ash)
{
	bool boughtPotions = false;
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
}
