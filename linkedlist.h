#ifndef linkListIterator
#define linkListIterator
#include <iostream>
using namespace std;
template <class Type>
struct nodeType  //Node member variables 
{
	Type data;  //data
	nodeType<Type> *link;  //pointer
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
	nodeType<Type> *current;  //pointer to the current node
};
template <class Type>
linkedList<Type>::linkedList()  //default constructor
{
	current = NULL;
}

template <class Type>
linkedList<Type>::linkedList(nodeType<Type> *ptr)  // constructor
{
	current = ptr;
}
template <class Type>
Type linkedList<Type>::operator*()  //returns data that the pointer points to
{
{
	return current->data;
}
template <class Type>
linkedList<Type> linkedList<Type>::operator++()  //advances the pointer

{
	current = current->link;
	return *this;
}
template <class Type>
bool linkedList<Type>::operator==(const linkedList<Type>&) const  // checks if current is == to other.current
{
	return (current == other.current);

}
template <class Type>
bool linkedList<Type>::operator!=(const linkedList<Type>&) const  // checks if current is != to other.current

{
	return (current != other.current);
}
#endif
