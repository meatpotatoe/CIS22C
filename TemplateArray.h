#ifndef TEMPLATEARRAY_H
#define TEMPLATEARRAY_H
#include<iostream>
#include<string>

using namespace std;

//Define a class array of type Type. The Type is not known and will be defined by the user

template<class Type>
class Array
{
public:
	//Constructor with a user defined size
	Array(); //Default constructor

	//Copy Constructor
	Array(int s)
	{
		size = s;
		arrayType = new Type[size];
	};

	//Default Destructor
	~Array()
	{
		delete[] arrayType;
	}

	//Sets the array
	void setArray(int pos, Type val)
	{
		arrayType[pos] = val;
	}

	//Prints the array
	void getArray()
	{
		for (int j = 0; j < size; j++)
		{
			cout << arrayType[j] <<" ";
		}
	}

	//Sorts the Array with an insertion sort
	void sortArray()
	{
		Type val;
		for (int i = 0; i < size; i++)
		{
			for (int j = i + 1; j < size; j++)
			{
				if (arrayType[i] < arrayType[j])
				{
					val = arrayType[i];
					arrayType[i] = arrayType[j];
					arrayType[j] = val;
				}
			}
			cout << arrayType[i] << endl;
		}
	}

private:
	int size;
	Type *arrayType;
};
#endif
