#ifndef linkListIterator
#define linkListIterator
#include <iostream>
using namespace std;
template <class Type>
struct nodeType
{
	Type data;
	nodeType<Type> *link; //Next Node
};

template<class Type>
class linkedList
{
public:
	linkedList();
	linkedList(nodeType<Type>*);
	Type operator*();
	linkedList<Type> operator++();
	bool operator==(const linkedList<Type>&) const;
	bool operator!=(const linkedList<Type>&) const;

private:
	nodeType<Type> *current;
};

//First node
template <class Type>
linkedList<Type>::linkedList()
{
	current = NULL;
}

template <class Type>
linkedList<Type>::linkedList(nodeType<Type> *ptr)
{
	current = ptr;
}

//Returns next node
template <class Type>
Type linkedList<Type>::operator*()
{
	return current->data;
}


template <class Type>
linkedList<Type> linkedList<Type>::operator++()
{
	current = current->link;
	return *this;
}

//Compares two nodes
template <class Type>
bool linkedList<Type>::operator==(const linkedList<Type>&other) const
{
	return (current == other.current);

}
template <class Type>
bool linkedList<Type>::operator!=(const linkedList<Type>&other) const
{
	return (current != other.current);
}

#endif
