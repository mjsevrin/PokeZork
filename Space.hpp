#ifndef SPACE
#define SPACE

#include <string>
using std::string;

class Ash;
class Space 
{
	protected:
		string name;
		Space* left_ptr;
		Space* right_ptr;
		Space* up_ptr;
		Space* down_ptr;
	
	public:
		//constructors & destructors
		Space(string);
		virtual ~Space();
		
		//getters
		string getName();
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

