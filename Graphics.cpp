
/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Handles printing out logo and the map for the PokeZork game 
***************************************************************************/

#include <iostream>
#include "Graphics.hpp"
using std::cout;
using std::endl;

void printLogo()
{
	cout <<"	______      _          ______            _" << endl;   
	cout <<"	| ___ \\    | |        |___  /           | |" << endl;  
	cout <<"	| |_/ /___ | | __ ___    / /   ___  _ __| | __" << endl;
	cout <<"	|  __// _ \\| |/ // _ \\  / /   / _ \\| '__| |/ /" << endl;
	cout <<"	| |  | (_) |   <|  __/ / /___| (_) | |  |   < " << endl;
	cout <<"	\\_|   \\___/|_|\\_\\\\___|\\_____/ \\___/|_|  |_|\\_\\ " 
		<< endl << endl ;
}

void printMap()
{
	cout <<"		     +--------------+" << endl;
	cout <<"        	     |     Gym      |" << endl; 
	cout <<"       		     +-----+ +------+" << endl; 
	cout <<"              		   | |" << endl; 
	cout <<"	+----------+ +-----+ +------+ +------------+" << endl; 
	cout <<"	|          | |              | |            |" << endl; 
	cout <<"	| PokeShop +-+  Pewter City +-+ PokeCenter |" << endl; 
	cout <<"	|          +-+    Square    +-+            |" << endl; 
	cout <<"	+----------+ |              | +------------+" << endl; 
	cout <<"	             +-----+ +------+" << endl; 
	cout <<"	     		   | |" << endl; 
	cout <<"		     +-----+ +------+" << endl; 
	cout <<"		     |    Route 1   |" << endl; 
	cout <<" 		     +-----+ +------+" << endl; 
	cout <<" 	                   | |" << endl; 
	cout <<"     +-------------+ +-----+ +------+ +-------------+" << endl; 
	cout <<"     |             | |              | |             |" << endl; 
	cout <<"     | Mom's House +-+  Pallet Town +-+  Prof. Oak  |" << endl; 
	cout <<"     |             +-+    Square    +-+     Lab     |" << endl; 
	cout <<"     +-------------+ |              | |             |" << endl; 
	cout <<"                     +--------------+ +-------------+" 
		<< endl << endl;


}
