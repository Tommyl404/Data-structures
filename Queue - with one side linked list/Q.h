#pragma once
#include "Node.h"

using namespace std;

class Q
{
private:
	Node* _head;
public:
	Q() :_head(NULL) {};

	Node* top() { return this->_head; }

	int isEmpty() {
		if (this->_head == NULL)
			return 0;//is empty
		else
			return 1; //is not empty
	}

	void enqueue(const Item needed)
	{
		Node* newNode = new Node(needed);
		if (this->isEmpty() == 0)
		{
			this->_head = newNode;
			return;
		}
		newNode->setNext(this->_head);
		this->_head = newNode;
		return;
	}

	void dequeue()
	{
		Node* temp = this->_head;
		this->_head = this->_head->getNext();
		delete temp;
		return;
	}
};

