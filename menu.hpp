/**************************************************************************
*** Program Name: Menu V1.1  
*** Author: Martin Sevrin
*** Date: 02/03/2018 
*** Description: Declaration file for the Menu class. A class in charge 
		 of holding menu options, displayed them, ask user for a 
		 menu choice, and storing that choice
***************************************************************************/

#ifndef MENU_HPP
#define MENU_HPP

#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::endl;
using std::string;
using std::vector;

class Menu
{
	private:
		int choice;
		vector<string> menu1;
	public:
		//constructor
		Menu();

/*****************************************************************************
** Description:	Prompts user to enter a menu choice and stores the choice 
		in the corresponding member variable
*****************************************************************************/
		void askChoice();	
		
/*****************************************************************************
** Description:	Getter	
*****************************************************************************/
		int getChoice();

/*****************************************************************************
** Description:	Displays the  menu with number options
*****************************************************************************/
		void display();

/*****************************************************************************
* Description: add an option to a menu vector
* @parameter - option as a string 
* @return - none 
*****************************************************************************/
		void addOption(string);
};
#endif
