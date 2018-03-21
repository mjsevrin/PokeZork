
#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
using std::string;

class Item {

	private:
		string name;

	public:
		//constructor & destructor
		Item(string);
		~Item();

		//getter & setters
		string getName();
};

#endif

