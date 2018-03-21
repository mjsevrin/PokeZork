
/**************************************************************************
*** Program Name: PokeZork 
*** Author: Martin Sevrin
*** Date: 03/20/2018 
*** Description: Definition of the Space abstract class.  Spaces are the 
game tiles the player can travel to and interact with
***************************************************************************/

#ifndef SPACE
#define SPACE

#include <string>
using std::string;

class Ash;
class Space 
{
	protected:
		string name;
		string action;
		Space* left_ptr;
		Space* right_ptr;
		Space* up_ptr;
		Space* down_ptr;
	
	public:
		//constructors & destructors
		Space(string, string);
		virtual ~Space();
		
		//getters
		string getName();
		string getAction();
		Space* getLeft();
		Space* getRight();
		Space* getUp();
		Space* getDown();

		void setLeft(Space* ptr);
		void setRight(Space* ptr);
		void setUp(Space* ptr);
		void setDown(Space* ptr);
		
		//misc.
		virtual void interact(Ash*) = 0;
};

#endif

