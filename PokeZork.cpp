
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

	//create game object
	Game pokezork;

	//run the game
	pokezork.run();

	//exit
	cout << "Thank you for playing" << endl;
	return 0;
}	
