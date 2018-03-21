
/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Implementation of the Gym class. A derived Space class. 
The Gym class is where the player fight the gym leader to earn a gym badge 
***************************************************************************/
#include <iostream>
#include "validate.hpp"
#include "Gym.hpp"
#include "Ash.hpp"
#include "Pokemon.hpp"

using std::cout;
using std::endl;
Gym::Gym(string name, string action): Space (name, action)
{
	
}

Gym::~Gym()
{}

/*****************************************************************************
* Description: Ash's iteraction with this Space
* @parameter - ptr to Ash 
* @return - none 
*****************************************************************************/
void Gym::interact(Ash* ash)
{
	if (!ash->hasBadge("Boulder"))
	{
		gymBattle(ash);
	}
	else
	{
		cout << "BROCK: This badge is proof you beat a strong " 
			"trainer, chicks love it too!" << endl <<
			endl;

	}
}

/*****************************************************************************
* Description: dialog and battle between Ash and a gym leader
* @parameter - ptr to ash 
* @return - none 
*****************************************************************************/
void Gym::gymBattle(Ash* ash)
{
	//intro dialog and choices
	cout << "BROCK: What are you doing here punk?" << endl;
	cout << "[1]-Tell him you are here to get a badge (Fight)" << endl;
	cout << "[2]-That guy is way too good looking (Flee)" << endl;
	int choice = valInt(1,2);
	
	if(choice == 1)
	{
		//dialog
		cout << "BROCK: You're even dumber than you look!" 
			<< endl << endl;

		//create gym leader's pokemons
		Pokemon* onyx = new Pokemon("Onyx", 60, 5, 40);
	
		//fight pokemon	
		bool result = ash->Fight(onyx);

		//end of battle results dialog/consequences
		if (result)
		{
			cout << "BROCK: I can't believe my Onyx was beaten!" <<
			endl;	
			cout << "BROCK: I guess you earned this..." << endl <<
				endl;
			cout << "BROCK gives you the BOULDER BADGE." << endl 
				<< endl;
			
			ash->earnBadge("Boulder");

			cout << "BROCK: This badge is proof you beat a strong " 
				"trainer, chicks love it too!" << endl <<
				endl;
		}
		
		//clean up
		delete onyx;
	}
	else
	{
		cout << "** You flee from those perfect cheek bones **" 
			<< endl << endl;
	}
}
