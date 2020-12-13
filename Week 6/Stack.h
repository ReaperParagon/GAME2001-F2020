#pragma once
#include <cassert>

template<class T>
class Stack
{
public:
	// Constructor
	Stack(int size, int growBy = 1) :
		m_array(NULL), m_size(0), m_top(-1), m_growSize(0)
	{
		if (size)
		{
			m_size = size;
			m_array = new T[m_size];		// Dynamically allocating an array to m_size

			memset(m_array, 0, sizeof(T) * m_size);	// Explicitly allocating memory based on the type T

			m_growSize = ((growBy > 0) ? growBy : 0);
		}
	}
	// Destructor
	~Stack()
	{
		if (m_array != NULL)
		{
			delete[] m_array;
			m_array = NULL;
		}
	}
	// --------------------------------- STACK FUNCTIONS ------------------------------------
	void push(T val)
	{
		assert(m_array != NULL);

		// Check to see if the stack is full. If it is, expand
		if (isFull())
		{
			Expand();
		}

		m_array[++m_top] = val;		// Increment m_top and THEN insert val into the stack
	}
	void pop()
	{
		if (!isEmpty())
		{
			m_top--;
		}
	}
	const T& top()
	{
		assert(m_array != NULL);
		assert(m_top >= 0);			// Checking to see if m_top is pointing to an element in the stack

		return m_array[m_top];
	}
	// ----------------------------------- END STACK FUNCTIONS -----------------------------------
	// Gets and Sets
	int GetSize()
	{
		return m_top + 1;
	}
	int GetMaxSize()
	{
		return m_size;
	}
	bool isEmpty()
	{
		return (m_top == -1);			// Is stack empty?
	}
	bool isFull()
	{
		return (m_top == m_size - 1);	// Compare number of items in stack to the top of the stack 
	}
private:
	// Expansion
	bool Expand()
	{
		if (m_growSize <= 0)
		{
			return false;
		}

		// Create the new array
		T* temp = new T[m_size + m_growSize];
		assert(temp != NULL);

		// Copy the contents of the original array to the new array
		memcpy(temp, m_array, sizeof(T) * m_size);

		// Delete the old array
		delete[] m_array;

		// Clean up variable assignments
		m_array = temp;
		temp = NULL;

		m_size += m_growSize;

		return true;
	}
private:
	// Variables
	T* m_array;			// Pointer to the beginning of the array

	int m_top;			// Represents the top of the stack
	int m_size;			// Size of our stack
	int m_growSize;		// How much the stack can grow by
};