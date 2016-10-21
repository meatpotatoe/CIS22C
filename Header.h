#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

template <class Type>
class Stack
{
private:
	struct StackNode{
		Type value; //Value of the node
		StackNode *next; //This is the pointer to the next node
	};

public:
	//Constructor
	Stack();

	//Destructor
	~Stack();

	//Stack Operations
	bool push(T); //Pushing the Data Type
	bool pop(T&); //Popping the Data Type
	bool isEmtpy(); //Sees if the Stack is empty
	int getCount() const; //Gets the size of the Stack
	Type* getTop(); //Gets most recently listed object

};
#endif