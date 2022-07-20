#include <iostream>
#include "stack.h"

void main()
{
	stack a;
	a.push(1);
	a.push(32);
	a.push(12);
	a.push(779);
	a.push(-5);

	a.printer();

	a.pop();
	a.pop();

	a.printer();
	std::cout << a.Maxi() << std::endl;

}