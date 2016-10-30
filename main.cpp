#include <iostream>
#include <string>
#include <cstdlib>
#include "Stack.h"
#include "Queue.h"
#include "linkedlist.h"

using namespace std;

int main()
{
	Stack<int> intstack;
	linkedListType<int> list;
	Stack<string> stringstack;
	Queue<int> intqueue;
	int entry;
	string entry2;
	

	//Item Type int
	cout << "Testing push " << endl;
	for (int i = 0; i < 4; i++)
	{
		cin >> entry; //Enter 12, 34, 56, 78
		intstack.push(entry);
	}
	cout << "Testing getTop()" << endl;
	cout << "Top value of stack: " << intstack.getTop() << endl;//Should be 78
	cout << "Testing getCount()" << endl;
	cout << "Number of Elements in stack: " << intstack.getCount() << endl; //Should be 4
	cout << "Testing isEmpty()" << endl;
	if (intstack.isEmpty())
		cout << "The Stack is empty." << endl;
	else
		cout << "The Stack is not empty." << endl;
	cout << "Testing Pop" << endl;
	intstack.pop();
	cout << "Top value of stack: " << intstack.getTop() << endl;//Should be 56
	cout << "Number of Elements in the Stack: " << intstack.getCount() << endl; //Should be 3
	intstack.pop();
	cout << "Top Value of the Stack: " << intstack.Top() << endl;//Should be 34
	cout << "Number of Elements in the Stack: " << intstack.getCount() << endl;// Should be 2
	intstack.pop();
	cout << "Top Value of the Stack: " << intstack.Top() << endl;//SHould be 12
	cout << "Number of Elements in the Stack: " << intstack.getCount() << endl;//Should be 1
	intstack.pop();
	cout << "Number of Elements in the Stack: " << intstack.getCount() << endl;//Should be 0
	cout << endl;

	//ItemType String
	cout << "It should work the same for Strings" << endl;
	cout << "Testing push " << endl;
	for (int i = 0; i < 4; i++)
	{
		cin >> entry2; //"Hello" "World" "Testing" "Help"
		stringstack.push(entry2);
	}
	cout << "Testing getTop()" << endl;
	cout << "Top value of stack: " << stringstack.getTop() << endl; //"Help"
	cout << "Testing getCount()" << endl;
	cout << "Number of Elements in stack: " << stringstack.getCount() << endl; //Should be 4
	cout << "Testing isEmpty()" << endl;
	if (stringstack.isEmpty())
		cout << "The Stack is empty." << endl;
	else
		cout << "The Stack is not empty." << endl;
	cout << "Testing Pop" << endl;
	stringstack.pop();
	cout << "Top value of Stack: " <<stringstack.getTop() << endl;//"Testing"
	cout << "Number of Elements in Stack: " << stringstack.getCount() << endl; //Should be 3
	stringstack.pop();
	cout << "Top Value of the Stack: " << stringstack.Top() << endl;//"World"
	cout << "Number of Elements in the Stack: " << stringstack.getCount() << endl;// Should be 2
	stringstack.pop();
	cout << "Top Value of the Stack: " << stringstack.Top() << endl;//"Hello"
	cout << "Number of Elements in the Stack: " << stringstack.getCount() << endl;//Should be 1
	stringstack.pop();
	cout << "Number of Elements in the Stack: " << stringstack.getCount() << endl;//Should be 0
	cout << endl;
	
	//Testing Queues Here
	intqueue.enQueue(17);
	intqueue.enQueue(36);
	intqueue.enQueue(49);
	cout << intqueue.getFront() << endl;
	cout << intqueue.getRear() << endl; //Something goes bad here.
	cout << intqueue.queueSize() << endl;
	cout << intqueue.queueEmpty() << endl;




	system("pause");
	return 0;
}