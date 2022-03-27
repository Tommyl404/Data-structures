#pragma once
#include <iostream>

#include <string>

using namespace std;

class Item
{
private:
	string _name;
	string _id;
public:
	Item(const string name, const string id) : _name(name), _id(id) {}

	string getName() const { return this->_name; }
	string getId() const { return this->_id; }

	void printItem() {
		cout << _name << " " << _id << endl;
	}
};

