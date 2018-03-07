/**************************************************************************
*** Program Name: Menu V2.0  
*** Author: Martin Sevrin
*** Date: 02/27/2018 
*** Description: Declaration file for the Menu class. A class in charge 
		 of holding menu options, displayed them, ask user for a 
		 menu choice, and storing that choice
		 NOTE: see menu.hpp for function descriptions
***************************************************************************/

#include <iostream>
#include <string>
#include "menu.hpp"
#include "validate.hpp"

using std::cout;
using std::endl;
using std::string;

Menu::Menu() 
{
	this -> choice = 0;
}

void Menu::askChoice()
{
	choice = valInt(1, menu1.size());
}

int Menu::getChoice()
{
	return choice;
}

void Menu::display()
{
	cout << endl << "Choose an option: " << endl;	
	for (unsigned i = 0; i < menu1.size(); i++)
	{
		cout << i+1 << "-" << menu1.at(i) << endl;
	}
	cout << endl;
}

void Menu::addOption(string option)
{
	menu1.push_back(option);
}
