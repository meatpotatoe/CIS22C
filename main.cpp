#include <iostream>
#include <string>
#include <cstdlib>
#include "Stack.h"
#include "linkedlist.h"

using namespace std;

int main()
{
	Stack<int> intstack;
	linkedListType<int> list;
	Stack<string> stringstack;
	int entry;
	cout << "Testing the getCount function." << endl;
	cout << intstack.getCount() << endl;
	cout << "Testing the isEmpty function." << endl;
	cout << intstack.isEmpty() << endl;
	cout << "Testing push " << endl;
	for (int i = 0; i < 4; i++)
	{
		cin >> entry; //Enter 12, 34, 56, 78
		intstack.push(entry);
	}
	cout << "Testing getTop()" << endl;
	cout << intstack.getTop() << endl;//Should be 78
	cout << intstack.getCount() << endl; //Should be 4
	cout << intstack.isEmpty() << endl; //SHould be 0, or False
	cout << "Testing Pop" << endl;
	intstack.pop();
	cout << intstack.getTop() << endl;//Should be 56
	cout << intstack.getCount() << endl; //Should be 3



	system("pause");
	return 0;
}
