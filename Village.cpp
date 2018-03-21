
/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Implementation of the Village class. A derived Space class. 
The Village class is where the player can interact with townpeople 
***************************************************************************/
#include <iostream>
#include "validate.hpp"
#include "Village.hpp"
using std::cout;
using std::endl;

Village::Village(string name, string action): Space (name, action)
{
	
}

Village::~Village()
{}

/*****************************************************************************
* Description: Ash's iteraction with this Space
* @parameter - ptr to Ash 
* @return - none 
*****************************************************************************/
void Village::interact(Ash* ash)
{
	cout << "** You see a kid playing with his Bulbasaur **" << endl << endl;

	cout << "[1]-Talk to him, [2]-Ignore him :";
	int choice = valInt(1,2);

	if (choice ==1 )
	{
		cout<< "KID: I have been training day and night with my"
		       <<" Bulbasaur, he is getting really strong!" << endl;
		cout << "Kid: Did you know pokemon's heal themselves when "
			"they level up? Nature is so fascinating!" << endl << endl;
	}
}

