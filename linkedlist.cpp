#ifndef linkListType
#define linkListType
#include "linkedlist.h"
#include <iostream>

template<class Type>
class linkedListType
{
public:
	const linkedListType<Type>& operator=(const linkedListType<Type>&);
	void initializeList();
	bool isEmptyList() const;
	void print() const;
	int length() const;
	void destroyList();
	Type printTop() const;
	Type printBot() const;
	virtual bool search(const Type&) const = 0;
	virtual void insertFirst(const Type&) = 0;
	virtual void insertLast(const Type&) = 0;
	virtual void deleteNode(const Type&) = 0;
	linkedList<Type> begin();
	linkedList<Type> end();
	linkedListType();
	linkedListType(const linkedListType<Type>&);
	~linkedListType();
protected:
	int count;
	nodeType<Type> *first;
	nodeType<Type> *last;
private:
	void copyList(const linkedListType<Type>&);
};

template<class Type>
bool linkedListType<Type>::isEmptyList() const
{
	return (first == NULL;)
}

template<class Type>
linkedListType<Type>::linkedListType()
{
	first = NULL;
	last = NULL;
	count = 0;
}
template<class Type>
void linkedListType<Type>::destroyList()
{
	nodeType<Type> *temp;
	while (first != NULL)
	{
		temp = first;
		first - first->link;
		delete temp;
	}
	last = NULL;
	count = 0;
}
template<class Type>
void linkedListType<Type>::initializeList()
{
	destroyList();
}
template<class Type>
void linkedListType<Type>::print() const
{
	nodeType<Type> *current;
	current = first;
	while (current != NULL)
	{
		cout << current->info << " ";
		current - current->link;
	}
}
template<class Type>
int linkedListType<Type>::length() const
{
	return count;
}
template<class Type>
Type linkedListType<Type>::printTop() const
{
	assert(first != NULL);
	return first->info;
}
template<class Type>
Type linkedListType<Type>::printBot() const
{
	assert(last != NULL);
	return last->info;
}
template<class Type>
linkedList<Type> linkedListType<Type>::begin()
{
	linkedList<Type> temp(first);
	return temp;
}
template<class Type>
linkedList<Type> linkedListType<Type>::end()
{
	linkedList<Type> temp(NULL);
	return temp;
}
template<class Type>
void linkedListType<Type>::copyList(const linkedListType<Type>& other)
{
	nodeType<Type> *newNode, *current;
	if (first != NULL)
		destroyList();
	if (other.first == NULL)
	{
		first = NULL;
		last = NULL;
		count = 0;
	}
	else
	{
		current - other.first;
		count = other.count;
		first = new nodeType < Type >;
		first->info = current->info;
		first->link = NULL;
		current - current->link;
		while (current != NULL)
		{
			newNode = new nodeType < Type >;
			newNode->info = current->info;
			newNode->link = NULL;
			last->link = newNode;
			last = newNode;
			current = current->link;
		}
	}
}
template<class Type>
linkedListType<Type>::~linkedListType()
{
	destroyList();
}
template<class Type>
linkedListType<Type>::linkedListType(const linkedListType<Type>& other)
{
	first = NULL;
	copyList(other);
}
template<class Type>
const linkedListType<Type>& linkedListType<Type>::operator =(const linkedListType<Type>& other)
{
	if (this != &other)
	{
		copyList(other);
	}
	return *this;
}

#endif

