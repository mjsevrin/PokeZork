
/**************************************************************************
*** Program Name: Input Validation Functions Library V2.0
*** Author: Martin Sevrin
*** Date: 02/27/2018 
*** Description: Declaration file for a library of input validation
		 functions. The functions receives user input, check it is
		 of the correct type (and within limits). If not, an error
		 is displayed and the user can enter a new input.
***************************************************************************/

#ifndef VALIDATE
#define VALIDATE

#include <iostream>
#include <string>
using std::cout;
using std::getline;
using std::cin;
using std::endl;
using std::string;


int valInt();

int valInt(int, int);

string valString();

#endif
