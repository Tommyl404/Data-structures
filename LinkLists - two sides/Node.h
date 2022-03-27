#pragma once
#include "Item.h"
class Node
{
private:
	Item _item;
	Node* _prev;
	Node* _next;

public:
	Node(const Item item):_item(item),_prev(NULL),_next(NULL){}

	Node* getPrev() const { return this->_prev; }
	Node* getNext() const { return this->_next; }
	Item getItem() const { return this->_item; }

	void setPrev(Node* prev) {
		this->_prev = prev;
		return;
	}
	void setNext(Node* next) {
		this->_next = next;
		return;
	}

	void printNode() {
		this->getItem().printItem();
		return;
	}
};

