#pragma once
#include <iostream>
#include "Node.h"
#include "Item.h"
class List
{
private:
	Node* _head;
public:
	List(): _head(NULL) {};
	Node* getHead() { return this->_head; }

	int size() const {
		int a = 0;
		if (this->_head == NULL)
			return a;
		Node* temp = this->_head;
		while (temp)//if temp is NULL the while will stop
		{
			a++;
			temp = temp->getNext();
		}
		return a;
	}

	Node* getNode(string id) const
	{
		if (this->_head == NULL)
		{
			cout << "Node not found" << endl;
			return NULL;
		}

		Node* temp = this->_head;

		while (temp)
		{
			if (temp->getItem().getId() == id)
				return temp;
			temp = temp->getNext();
		}

		if (temp == NULL)
		{
			cout << "Node not found" << endl;
			return NULL;
		}
	}

	Node* getTail() const
	{
		if (this->_head == NULL)
		{
			cout << "List is empty" << endl;
			return this->_head;
		}
		Node* temp = this->_head;
		while (temp->getNext())//in tail the next needs to point to a NULL.
		{
			temp = temp->getNext();
		}
		return temp;
	}

	void insertNodeFirst(const Item needed)
	{
		Node* newNode = new Node(needed);
		if (this->_head == NULL)//if the list is empty
		{
			this->_head = newNode;
			return;
		}
		newNode->setNext(this->_head);
		this->_head->setPrev(newNode);
		this->_head = newNode;
		return;
	}

	void insertNodeLast(const Item needed)
	{
		Node* newNode = new Node(needed);
		if (this->_head == NULL)//if the list is empty
		{
			this->_head = newNode;
			return;
		}
		newNode->setPrev(this->getTail());
		this->getTail()->setNext(newNode);
		return;
	}

	void deleteNode(const string id) 
	{
		if (this->size() == 0||this->getNode(id) == NULL)
		{
			cout << "Node not found in the list, didn't delete." << endl;
			return;
		}
		else if (this->getNode(id) == this->_head)
		{
			Node* temp = this->getNode(id);
			this->_head->getNext()->setPrev(NULL);
			this->_head = this->_head->getNext();
			delete temp;
			cout << "deleted case 1 - its the head" << endl;
			return;
		}
		else if (this->getNode(id) == this->getTail())
		{
			Node* temp = this->getNode(id);
			this->getTail()->getPrev()->setNext(NULL);
			delete temp;
			cout << "deleted case 2 - its the tail" << endl;
			return;
		}
		else
		{
			Node* temp = this->getNode(id);
			temp->getNext()->setPrev(temp->getPrev());
			temp->getPrev()->setNext(temp->getNext());
			delete temp;
			cout << "deleted case 3 - its somewhere in the middle" << endl;
			return;
		}



	}
};

