#include <iostream>
#include <cassert>>
using namespace std;

// Triangle numbers with a loop
int TriNumLoop(int term)
{
	int value = 0;

	for (; term > 0; term--)
	{
		value += term;
	}

	return value;
}

// Triangle numbers with recursion
int TriNumRecursion(int term)
{
	assert(term >= 1);

	// Base case
	if (term == 1)
	{
		return 1;
	}

	// Tail recursion
	return (TriNumRecursion(term - 1) + term);
}

// Test function
/*int main()
{
	cout << "Triangle numbers example!!" << endl;

	// Using loops
	cout << "The value of the 18th term using a loop is: ";
	cout << TriNumLoop(18) << endl;

	// Using Recursion
	cout << "The value of the 18th term using recursion is: ";
	cout << TriNumRecursion(18) << endl;

	return 0;
}*/