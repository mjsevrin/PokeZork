
/**************************************************************************
*** Program Name: Input Validation Functions Library
*** Author: Martin Sevrin
*** Date: 01/14/2018 
*** Description: Implementation file for a library of input validation
		 functions. The functions receives user input, check it is
		 of the correct type (and within limits). If not, an error
		 is displayed and the user can enter a new input.
***************************************************************************/

#include <iostream>
#include <string>
#include "validate.hpp"
using std::cout;
using std::getline;
using std::cin;
using std::endl;
using std::string;


/*****************************************************************************
** Description:	Prompts user input and validates it is an integer. Returs an 
		integer if it was a valid input. Otherwise displays and error
		and the user can enter a new input
*****************************************************************************/
int valInt()
{
	bool status;
	string inp;

	//loop to validate inp was an integer and within integer limit
	do
	{	
		//reset status
		status = true;

		//get user inp as a string
		getline(cin, inp);
		
		//check [enter] was not pressed immediately by user
		if (inp.length() == 0)
		{
			status = false;
		}

		//check 1st character is a number, plus, or minus sign
		//(allows user to enter positive and negative numbers)
		if (inp[0] < '0' || inp[0] > '9')
		{
			status = false;

			//only allow -/+ only if it is a prefix
			//(length of inp must be >1 so that +/-)
			if ((inp[0]=='-' || inp[0]=='+') && inp.length() > 1)
			{ 
				status = true;
			}
		}
	
		

		//check every other element is a number 
		for (unsigned i = 1; i < inp.length(); i++)
		{
			if (inp[i] < '0' || inp[i] > '9')
			{
				status = false;
			}
		}

		//inform user there is an inp error
		if (status == false)
		{
			cout << "ERROR: incorrect input, ";
	   		cout << "please enter an integer" << endl;
		}
	}
	while (status == false);

	cout << endl;
	//return inp as an integer
	return stoi(inp);
}


/*****************************************************************************
** Description:	Prompts user input and validates it is an integer within an
		upper and lower limit. Returs an integer if it was a valid 
		input. Otherwise displays and error and the user can enter 
		a new input.
*****************************************************************************/
int valInt(int lowLimit, int upLimit)
{
	bool status;
	int inp;
	
	do 
	{
		//reset status	
		status = true;	

		//get user inp and checks it is an integer using valInt()	
		inp = valInt();

		//check integer is within limit
		if (inp < lowLimit || inp > upLimit)
		{
			status = false;
		}

		//inform user there is an inp error
		if (status == false)
		{
			cout << "ERROR: incorrect input, ";
	   		cout << "please enter an integer within limits" << endl;
		}
	}
	while (status == false);
			
	//return inp as an integer
	return inp;
}	


/*****************************************************************************
* Description: waits for user input and validates the input was a string
* NOTE: first char must be a letter and length must be >1 to be counted as a 
* valid string input
* @parameter - none 
* @return - string 
*****************************************************************************/
string valString()
{
	bool status;
	string inp;

	//loop to validate inp was an integer and within integer limit
	do
	{	
		//reset status
		status = true;

		//get user inp as a string
		getline(cin, inp);
		
		//check [enter] was not pressed immediately by user
		if (inp.length() == 0)
		{
			status = false;
		}

		//check 1st character is a letter of the alphabet
		if (!isalpha(inp[0]))
		{
			status = false;
		}

		//inform user there is an inp error
		if (status == false)
		{
			cout << "ERROR: incorrect input, ";
	   		cout << "please enter a string" << endl;
		}
	}
	while (status == false);

	cout << endl;
	//return inp as an integer
	return inp;
}

