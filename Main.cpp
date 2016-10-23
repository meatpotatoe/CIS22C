#include<iostream>
#include <string>
#include "StackList.h"
using namespace std;

int main()
{
	Stack<int> intstack;
	Stack<string> stringstack;

	intstack.push(4);
	intstack.push(7);
	intstack.push(17);

	stringstack.push("Hello");
	stringstack.push("World");

	cout << *intstack.getTop() << endl;
	cout << "Number of items: " << intstack.getCount() << endl;
	intstack.pop(*intstack.getTop());
	cout << *intstack.getTop() << endl;
	cout << "Number of items: "<< intstack.getCount() << endl;
	intstack.pop(*intstack.getTop());
	cout << *intstack.getTop() << endl;
	cout << "Number of items: " << intstack.getCount() << endl;
	intstack.pop(*intstack.getTop());
	cout << "Number if items: "<< intstack.getCount() << endl;
	if (intstack.isEmtpy())
		cout << "Intstack is empty!" << endl;

	cout << endl;
	cout << *stringstack.getTop() << endl;
	cout <<"Number of items: "<< stringstack.getCount() << endl;
	stringstack.pop(*stringstack.getTop());
	cout << *stringstack.getTop() << endl;
	cout << "Number of items: " << stringstack.getCount() << endl;
	stringstack.pop(*stringstack.getTop());
	cout << "Number of items: " << stringstack.getCount() << endl;

	system("pause");
	return 0;
}

/*
Output:
17
Number of items: 3
7
Number of items: 2
4
Number of items: 1
Number if items: 0
Intstack is empty!

World
Number of items: 2
Hello
Number of items: 1
Number of items: 0
Press any key to continue . . .
*/
