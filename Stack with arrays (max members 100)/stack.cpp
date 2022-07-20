#include "stack.h"

bool stack::push(int x)
{
	if (top >= (MAX - 1))
	{
		std::cout << "You Can't have a stack with more then 100 members, Sorry..." << std::endl;
		return false;
	}
	else
	{
		theStack[++top] = x; //Prefix increment for top index. 
	}
	
}

int stack::pop()
{
	try {
		if (top < 0)
		{
			throw 1;
		}
		else {
			int x = theStack[top--]; //Postfix for top index.
			return x;
		}
	}
	catch (int x)
	{
		std::cout << "No more member's left for pop. you get -1 as an item" << std::endl;
		return -1;
	}

}

bool stack::isEmpty()
{
	return (top < 0);
}

int stack::Maxi()
{
	if (isEmpty() == true)
	{
		std::cout << "The stack is empty, so you get -1." << std::endl;
		return -1;
	}
	else {
		int flag = -1;
		for (int i = 0; i <= top; i++)
		{
			if (flag < theStack[i])
				flag = theStack[i];
		}
		return flag;
	}
}

void stack::printer()
{
	if (isEmpty())
	{
		std::cout << "No members in the stack" << std::endl;
		return;
	}
	for (int i = 0; i <= top; i++)
	{
		std::cout << theStack[i] << std::endl;
	}
}
