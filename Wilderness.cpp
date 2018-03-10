
#include <iostream>
#include "getRand.hpp"
#include "Wilderness.hpp"
#include "Ash.hpp"
#include "Pokemon.hpp"
using std::cout;
using std::endl;

Wilderness::Wilderness(string name): Space (name)
{
	
}

Wilderness::~Wilderness()
{}

void Wilderness::interact(Ash* ash)
{
	Pokemon* pokemon = new Pokemon("Caterpie", getRand(20, 25), 3, 30);
	
	cout << "A wild CATERPIE appears!" << endl;

	ash->Fight(pokemon);
	delete pokemon;
}
