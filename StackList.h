#ifndef STACKLIST_H
#define STACKLIST_H

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

	StackNode *top; //creats the pointer to the top of the stack
	int count; //Size of the stack

public:
	//Constructor
	Stack() : top(nullptr), count(0) {};

	//Destructor
	~Stack();

	//Stack Operations
	bool push(Type); //Pushing the Data Type
	bool pop(Type&); //Popping the Data Type
	bool isEmtpy(); //Sees if the Stack is empty
	int getCount() const; //Gets the size of the Stack
	Type* getTop(); //Gets most recently listed object

};

//Define Push operator
//This operator will push an argument into the stack. Count will increase.
template<class Type>
bool Stack<Type>::push(Type item)
{
	StackNode* newNode; //Pointer pointing to the new Node.

	//Allocate a new node and store something there
	newNode = new StackNode;
	if (!newNode)
		return false;
	newNode->value = item; //Stores an item in the node.

	//Updating Links and the Counter
	newNode->next = top;
	top = newNode;
	count++;
	return true;
}

//Define Pop operator
//This operator will pop the value at the top of the stack and delete it. Count will decrease.
template<class Type>
bool Stack<Type>::pop(Type &item)
{
	StackNode *temp; //Temp pointer

	if (count == 0) //If the Stack is empty
		return false;

	//Popping value off of the top of stack
	item = top->value; 
	temp = top->next;
	delete top;
	top = temp;
	count--;

	return true;
}

//Define isEmpty operator
//This checks if the stack is empty

template<class Type>
bool Stack<Type>::isEmtpy()
{
	return count == 0; // If the count is zero, then the list is empty.
}

//Define the getCount operator
//This will return the number of elements inside the stack

template<class Type>
int Stack<Type>::getCount() const
{
	return count; // count is the number of objects inside the stack
}

//Define getTop()
//getTop returns the value at the top of the stack
template<class Type>
Type* Stack<Type>::getTop()
{
	if (top) // If the pointer is at the top
		return &top->value; //Return the top Value

	if (!top)//If the pointer is not at the top
		return 0; //Return this instead.
}

//Define the Destructor
template <class Type>
Stack<Type>::~Stack()
{
	StackNode *currNode;
	StackNode *nextNode;

	//Position of the node pointer at the top of the stack
	currNode = top;

	//Traverse the list deleting each node.
	while (currNode){
		nextNode = currNode->next;
		delete currNode;
		currNode = nextNode;
	}
}

#endif