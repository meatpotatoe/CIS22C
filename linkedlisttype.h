#ifndef linkListType
#define linkListType
#include "linkedlist.h"
#include <iostream>
#include <assert.h>

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
	void insertFirst(Type&);
	void insertLast(Type&);
	void deleteNode(Type&);
	void deleteNodeFirst();
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
	if (first == NULL)
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
		first = first->link;
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
void linkedListType<Type>::insertFirst(Type& other) {
	nodeType<Type> *newNode, *current;
	newNode = new nodeType<Type>();
	current = new nodeType<Type>();

	newNode->data = other; //The Value
	newNode->link = NULL;//Setting the new Node as NULL

	if (first == NULL){ // If First node is empty
		first = newNode;
		current = newNode;
	}
	else{
		newNode->link = first;
		first = newNode;
	}
	count++;
}

template<class Type>
void insertLast(Type& other) {
	nodeType<Type> *newNode, *current, *temp;
	newNode = new nodeType<Type>();	   // Creating and allocating new newNode
	current = new nodeType<Type>();	   // Creating and allocating new current
	temp = new nodeType<Type>();	   // Creating and allocating new temp

	newNode->data = other; //The Value
	newNode->link = NULL; //Setting the new node as NULL

	if (first == NULL){
		first = newNode;
		current = newNode;
	}
	else{
		temp = first;
		while (temp->link != NULL){
			temp = temp->link;
		}
		temp->link = newNode;
	}
	count++;
}
template<class Type>
void deleteNode(const Type&) {

}

template<class Type>
void linkedListType<Type>::deleteNodeFirst()
{
	nodeType<Type> *temp;
	temp = new nodeType<Type>();
	temp = first;
	first = first->link;
	free(temp);
	count--;
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