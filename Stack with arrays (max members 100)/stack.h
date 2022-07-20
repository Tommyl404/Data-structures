#pragma once
#define MAX 100 //max stack members.
#include <iostream>
class stack
{
private:
	int top;
public:
	int theStack[MAX];
	
	stack() { top = -1; }
	bool push(int x);
	int pop();
	bool isEmpty();
	int Maxi();
	void printer();
};

