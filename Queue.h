#ifndef QUEUE_H
#define QUEUE_H
#include "linkedlisttype.h"
#include<iostream>
#include <cstdlib>

using namespace std;

template <class Type>
class Queue : public linkedListType<Type>
{
public:
	//Queue Operations
	bool queueEmpty() const;
	int queueSize() const;
	Type getFront() const;
	void deQueue();
	void enQueue(Type);
};

template<class Type>
bool Queue<Type>::queueEmpty() const
{
	return this->isEmptyList();
}

template<class Type>
int Queue<Type>::queueSize() const
{
	return this->length();
}

template<class Type>
Type Queue<Type>::getFront() const
{
	try{
		return this->Top();
	}
	catch (const char* s){
		throw s;
	}
}


template<class Type>
void Queue<Type>::deQueue()
{
	return linkedListType<Type>::deleteNodeFirst();
}

template<class Type>
void Queue<Type>::enQueue(Type item)
{
	return linkedListType<Type>::insertLast(item);
}
#endif
