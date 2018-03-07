#ifndef SPACE
#define SPACE

#include <string>
using std::string;

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
		Space(string, Space*, Space*, Space*, Space*);
		~Space();

		string getName();
		Space* getLeft();
		Space* getRight();
		Space* getUp();
		Space* getDown();
};

#endif

