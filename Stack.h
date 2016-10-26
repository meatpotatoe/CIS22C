#ifndef STACK_H
#define STACK_H
#include "LinkedListType.h"
#include <iostream>
#include <cstdlib>
using namespace std;

template <class Type>
class Stack: public linkedListType<Type>
{
public:
	//Stack Operations
	int getCount() const;//Gets the size of the stack. -Complete-
	bool isEmpty() const;//Checks if the Stack is Empty. -Complete-
	Type getTop() const;//Gets the top of the stack. -TComplete-
	void push(Type);//Pushes the input into the stack. -Complete-
	void pop();

};

template<class Type>
void Stack<Type>::pop()
{
	return linkedListType<Type>::deleteNodeFirst();
}

template<class Type>
void Stack<Type>::push(Type item)
{
	return linkedListType<Type>::insertFirst(item);
}


template<class Type>
int Stack<Type>::getCount() const
{
	return this->length();
}

template<class Type>
bool Stack<Type>::isEmpty() const
{
	return this->isEmptyList();
}

template<class Type>
Type Stack<Type>::getTop() const
{
	return this->Top();
}

#endif