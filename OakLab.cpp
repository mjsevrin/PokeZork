
#include <iostream>
#include "OakLab.hpp"
#include "Ash.hpp"
#include "Pokemon.hpp"
using std::cout;
using std::endl;

OakLab::OakLab(string name): Space (name)
{
	
}

OakLab::~OakLab()
{}


void OakLab::interact(Ash* ash)
{
	if (!ash->hasPokemon())
	{
		cout << "PROF OAK: Hey kid! What are you doing here?!" << endl;
	       	cout << endl;	
		cout << "	* you explain you need a pokemon * " << endl;
		cout << endl;
		cout << "PROF OAK: hmm..." << endl;
		cout << "PROF OAK: ..." << endl;
		cout << "PROF OAK: ..." << endl;
		cout << "PROF OAK: ..." << endl;
		cout << "PROF OAK: I  think I have Pikachu, he's not very"
			" strong but perhaps you can train him, here you go!"
			<< endl << endl;
		cout << "You received PIKACHU" << endl << endl;
		Pokemon* pikachu = new Pokemon("PIKACHU", 40, 5, 40);
		ash->addPokemon(pikachu);
	}
}
