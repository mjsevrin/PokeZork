
#include <iostream>
#include "House.hpp"
#include "Ash.hpp"
using std::cout;
using std::endl;

House::House(string name, string action): Space (name, action)
{
	
}

House::~House()
{
}

/*****************************************************************************
* Description: Ash's iteraction with this Space
* @parameter - ptr to Ash 
* @return - none 
*****************************************************************************/
void House::interact(Ash* ash)
{
	if (ash->hasBadge("Boulder"))
	{
		cout << "MOM: You actually did it, I'm so proud of you! Maybe "
			"I was wrong, you can be a Pokemon trainer!"
		       << endl << endl;
		ash->completeQuest();
	}
	else if (!ash->hasPokemon())
	{
		cout << "MOM: Hey Ash! If you really want to prove to me you "
			"want to be pokemon trainer, you need a " << endl <<
			"pokemon! Go see the weird veterinarian, PROF OAK across"
		       	" town, maybe he'll have a rescue you can borrow."; 
		cout << endl << endl;
	}
	else if (!moneyGiven)
	{
		cout << "MOM: What an adorable Pikachu! He looks weak though, "
			"you should train along ROUTE 1, by fighting " << endl <<
			"wild pokemons. I hate those ugly insects running around"
		       	" there anyways." << endl << endl;

		cout << "MOM: Here is some money to help you train him, don't "
			"waste it on those video game of yours!" << endl;
		cout <<	"** Mom hands you $250 ** " << endl << endl;

		ash->earn(250);
		moneyGiven = true;
	}
	else
	{
		 cout << "MOM: I have things to do, don't come home until "
			" you are a pokemon trainer or you" << endl <<
			"are ready to get a real job!" << endl << endl;
	}
}



