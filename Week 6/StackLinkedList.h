#pragma once

#include <cassert>
#include "DoublyLinkedList.h"

template <class T>
class Stack
{
public:
	// Constructor & Destructor
	Stack() {}
	~Stack() {}
	// -------------------- STACK FUNCTIONS ----------------------
	void push(T val)
	{
		m_container.Push(val);
	}
	void pop()
	{
		m_container.Pop();
	}
	const T& top()
	{
		LinkIterator<T> it;
		it = m_container.Last();
		return *it;
	}
	// --------------------- END STACK FUNCTIONS ----------------------
	int GetSize()
	{
		return m_container.GetSize();
	}
	bool isEmpty()
	{
		return (m_container.GetSize() == 0);
	}
private:
	LinkedList<T> m_container;
};