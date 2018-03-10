
#include <iostream>
#include "House.hpp"
#include "Ash.hpp"
using std::cout;
using std::endl;

House::House(string name): Space (name)
{
	
}

House::~House()
{
}

void House::interact(Ash* ash)
{
	if (!ash->hasPokemon())
	{
		cout << "MOM: Hey Ash! If you really want to prove to me you "
			"want to be pokemon trainer, you need a " << endl <<
			"pokemon! Go see the weird veterinarian across town, "
			"maybe he'll have a rescue you can borrow." << endl; 
		cout << endl;
	}

	else
	{
		cout << "MOM: What an adorable Pikachu! He looks weak though, "
			"you should train along ROUTE 1, by fighting " << endl <<
			"wild pokemons. I hate those ugly insects running around"
		       	" there anyways." << endl << endl;
	}
}
