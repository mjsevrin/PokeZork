
/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Implementation of the OakLab class. A derived Space class. 
The OakLab class is where the player talks to Prof. Oak to earn his Pikachu 
***************************************************************************/
#include <iostream>
#include "OakLab.hpp"
#include "Ash.hpp"
#include "Pokemon.hpp"
using std::cout;
using std::endl;

OakLab::OakLab(string name, string action): Space (name, action)
{
	
}

OakLab::~OakLab()
{}

/*****************************************************************************
* Description: Ash's iteraction with this Space
* @parameter - ptr to Ash 
* @return - none 
*****************************************************************************/
void OakLab::interact(Ash* ash)
{
	if (!ash->hasPokemon())
	{
		cout << "PROF OAK: Hey kid! What are you doing here?!" << endl;
	       	cout << endl;	
		cout << "** you explain you need a Pokemon **" << endl;
		cout << endl;
		cout << "PROF OAK: hmm..." << endl;
		cout << "PROF OAK: ..." << endl;
		cout << "PROF OAK: ..." << endl;
		cout << "PROF OAK: ..." << endl;
		cout << "PROF OAK: I  think I have PIKACHU, he's not very"
			" strong but perhaps you can train him, here you go!"
			<< endl << endl;
		cout << "You received PIKACHU" << endl << endl;
		Pokemon* pikachu = new Pokemon("PIKACHU", 40, 5, 40);
		ash->addPokemon(pikachu);
	}
	else
	{
		cout <<"PROF OAK: How's PIKACHU doing?" << endl << endl;
	}
}
