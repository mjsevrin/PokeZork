
#include <iostream>
#include "validate.hpp"
#include "Gym.hpp"
#include "Ash.hpp"
#include "Pokemon.hpp"

using std::cout;
using std::endl;
Gym::Gym(string name): Space (name)
{
	
}

Gym::~Gym()
{}

void Gym::interact(Ash* ash)
{
	cout << "BROCK: What are you doing here punk?" << endl;
	cout << "[1]-Tell him you are here to get a badge (Fight)" << endl;
	cout << "[2]-That guy is way to good looking (Flee)" << endl;
	int choice = valInt(1,2);
	
	if(choice == 1)
	{
		cout << "BROCK: You're even dumber than you look!" 
			<< endl << endl;
	
		Pokemon* onyx = new Pokemon("Onyx", 70, 5, 50);
		ash->Fight(onyx);
		delete onyx;
	}
	else
	{
		cout << " * You flee from those perfect cheek bones *" << endl;
	}
}
