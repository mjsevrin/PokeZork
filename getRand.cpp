
/**************************************************************************
*** Program Name: Lab 9 - STL Containers 
*** Author: Martin Sevrin
*** Date: 03/06/2018 
*** Description: getRand() function implementation 
***************************************************************************/
#include <cstdlib>
#include "getRand.hpp"

/*****************************************************************************
* Description: generate a random integer between min and max values
* @parameter - min and max values 
* @return - random integer 
*****************************************************************************/
int getRand(int min, int max)
{
	return (rand() % (max-min+1) + min);
}
