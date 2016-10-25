#ifndef linkListType
#define linkListType
#include "linkedlist.h"
#include <iostream>

template<class Type>
class linkedListType
{
public:
	void initializeList();
	bool isEmptyList() const;
	void print() const;
	int length() const;
	void destroyList();
	Type Top() const;
	Type Bot() const;
	linkedList<Type> begin();
	linkedList<Type> end();
	virtual void insertFirst(const Type&);
	virtual void insertLast(const Type&);
	virtual void deleteNode(const Type&);
	linkedListType();
	linkedListType(const linkedListType<Type>&);
	~linkedListType();
	const linkedListType<Type>& operator=(const linkedListType<Type>&);
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
	if (top == null)
		return true;
	else
		return false;
}
template<class Type>
void linkedListType<Type>::print() const
{
	nodeType<Type> *current;
	current = first;
	while (current != NULL)
	{
		cout << current->data << " ";
		current - current->link;
	}
}
template<class Type>
int linkedListType<Type>::length() const
{
	return count;
}
template<class Type>
void linkedListType<Type>::destroyList()
{
	nodeType<Type> *tmp;
	while (first != NULL)
	{
		tmp = first;
		first - first->link;
		delete tmp;
	}
	last = NULL;
	count = 0;
}
template<class Type>
Type linkedListType<Type>::Top() const
{
	assert(first != NULL);
	return first->data;
}
template<class Type>
Type linkedListType<Type>::Bot() const
{
	assert(last != NULL);
	return last->data;
}
template<class Type>
linkedList<Type> linkedListType<Type>::begin()
{
	linkedList<Type> tmp(first);
	return tmp;
}
template<class Type>
linkedList<Type> linkedListType<Type>::end()
{
	linkedList<Type> tmp(NULL);
	return tmp;
}
template<class Type>
void insertFirst(const Type&) {
	nodeType<Type> *newNode, *current;
	if (first != NULL)
		destroyList();
	else
	{
		current - other.first;
		first = new nodeType < Type >;
		first->data = current->data;
	}
	count++;
}
template<class Type>
void insertLast(const Type&) {
	nodeType<Type> *newNode, *current;
	if (last != NULL)
		destroyList();
	else
	{
		current - other.last;
		last = new nodeType < Type >;
		last->data = current->data;
	}
	count++;
}
template<class Type>
void deleteNode(const Type&) {

}
template<class Type>
linkedListType<Type>::linkedListType()
{
	first = NULL;
	last = NULL;
	count = 0;
}
template<class Type>
void linkedListType<Type>::initializeList()
{
	destroyList();
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
		first->data = current->data;
		first->link = NULL;
		current - current->link;
		while (current != NULL)
		{
			newNode = new nodeType < Type >;
			newNode->data = current->data;
			newNode->link = NULL;
			last->link = newNode;
			last = newNode;
			current = current->link;
		}
	}
}
#endif

