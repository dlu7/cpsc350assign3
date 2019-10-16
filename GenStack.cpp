#include <iostream>
#include "GenStack.h"
/*
//default constructor
GenStack::GenStack()
{
	//initilization of default values
	myArray = new char[25];
	size = 25;
	top = -1;
}

//overloaded constructor
GenStack::GenStack(int maxSize)
{
	//declaring size of array
	myArray = new char[maxSize];
	size = maxSize;
	top = -1;
}

//destructor
GenStack::~GenStack()
{
	delete[]myArray;
	delete[]temp;

	cout << "The object has been destroyed, program will now exit." << endl;
}

void GenStack::push(char d)
{
	//checks if the stack is full before pushing an element into the stack
	if (isFull() == 1)
	{
		temp = new char[size];
		for (int i = top; i < size; i++)
		{
			temp[i] = myArray[i];
		}

		myArray = new char[size];
		for (int i = top; i < size; i++)
		{
			myArray[i] = temp[i];
		}
		push(d);

		size += 1;
	}
	else
	{
		myArray[++top] = d;
	}
}

char GenStack::pop()
{
	//checks to see if the stack is empty.
	//if not empty, it removes the last inserted element from the stack
	if (isEmpty() == 1)
	{
		cout << "Stack is empty, please put an element into the stack." << endl;
		return 0;
	}
	else
	{
		return myArray[top--];
	}
}

char GenStack::peek()
{
	//again, checking to see if stack is empty
	//if not, will return the value of the top element of the stack
	if (isEmpty() == 1)
	{
		cout << "Stack is empty, please put an element into the stack." << endl;
		return 0;
	}
	else
	{
		return myArray[top];
	}
}

//returns the value of the top element
int GenStack::isFull()
{
	return (top == size - 1);
}

//returns the value of the top element, which shows that it is empty
int GenStack::isEmpty()
{
	return (top == -1);
}*/