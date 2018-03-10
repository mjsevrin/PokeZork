
#include <iostream>
#include "validate.hpp"
#include "PokeCenter.hpp"
#include "Ash.hpp"

using std::cout;
using std::endl;

PokeCenter::PokeCenter(string name): Space (name)
{
	
}

PokeCenter::~PokeCenter()
{}

void PokeCenter::interact(Ash* ash)
{
	cout << "NURSE: Welcome to our Pokemon Center! Would you like to heal"
		" your pokemons free of charge?" << endl << "[1]-yes/[2]-no: ";
	int choice = valInt(1,2);
	if (choice == 1)
	{
		ash->healTeam();
		cout << "NURSE: Your part has been healed!" << endl << endl;
	}
	cout << "NURSE: Thank you for coming, have a safe journey!";
       	cout << endl << endl;
}
