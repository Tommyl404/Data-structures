#pragma once
#include "Item.h"
using namespace std;
class Node
{
private:
	Item _item;
	Node* _next;

public:
	Node(const Item item) :_item(item), _next(NULL) {}

	Node* getNext() const { return this->_next; }
	Item getItem() const { return this->_item; }

	void setNext(Node* next) {
		this->_next = next;
		return;
	}

	void printNode() {
		this->getItem().printItem();
		return;
	}
};

