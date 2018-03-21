
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Game.hpp"
#include "Graphics.hpp"
using std::cout;
using std::endl;

int main()
{
	//seed generation	
	int seed = time(0);
	srand(seed);
	
	cout << endl <<"			WELCOME TO" << endl << endl;
	printLogo();
	
	//rule explanations
	cout << "Ash Ketchum, wanna be pokemon trainer, must convince his mom "
		"that pokemon training is a real job. In order to " << endl <<
		"do so,  Ash will need to acquire and train a pokemon, and "
	   	"earn his first Gym badge." << endl << endl;

	cout << "In order to win, you must earn the BOULDER BADGE and return to "
		"your mom's and show her pokemon training is the real deal" << 
		endl << endl;

	cout << "You have 24 hours to convice your mom, every move to a new "
		"space takes 1 hour to complete" << endl << endl;
	cout << endl << endl << endl;

	//create game object
	Game pokezork;

	//run the game
	pokezork.run();

	//exit
	cout << "Thank you for playing" << endl;
	return 0;
}	
