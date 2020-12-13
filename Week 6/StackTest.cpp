#include <iostream>
// #include "Stack.h"
// #include "StackArray.h"
#include "StackLinkedList.h"
using namespace std;

int main()
{
	cout << "Stack Linked List Example" << endl << endl;

	Stack<int> sList;

	sList.push(101);
	sList.push(501);
	sList.push(201);
	sList.pop();
	sList.push(301);
	sList.push(401);
	sList.push(901);
	sList.pop();

	cout << "Contents of the stack: ";
	while (sList.isEmpty() == false)
	{
		cout << " " << sList.top();
		sList.pop();
	}

	cout << endl << endl;

	return 0;
}