#ifndef linkListIterator
#define linkListIterator
#include <iostream>
using namespace std;
template <class Type>
struct nodeType		//Node member variables 
{
	Type info;	//data
	nodeType<Type> *link;	//pointer
};

template<class Type>
class linkedListIterator
{
public:
	linkedListIterator();
	linkedListIterator(nodeType<Type>*);
	Type operator*();
	linkedListIterator<Type> operator++();
	bool operator==(const linkedListIterator<Type>&) const;
	bool operator!=(const linkedListIterator<Type>&) const;
private:
	nodeType<Type> *current; //pointer to the current node
};
template <class Type>
linkedListIterator<Type>::linkedListIterator()	//default constructor
{
	current = NULL;
}

template <class Type>
linkedListIterator<Type>::linkedListIterator(nodeType<Type> *ptr)  // constructor
{
	current = ptr;
}
template <class Type>
Type linkedListIterator<Type>::operator*()	//returns data that the pointer points to
{
	return current->info;
}
template <class Type>
linkedListIterator<Type> linkedListIterator<Type>::operator++()	//advances the pointer
{
	current = current->link;
	return *this;
}
template <class Type>
bool linkedListIterator<Type>::operator==(const linkedListIterator<Type>&) const  // checks if current is == to other.current
{
	return (current == other.current);

}
template <class Type>
bool linkedListIterator<Type>::operator!=(const linkedListIterator<Type>&) const  // checks if current is != to other.current
{
	return (current != other.current);
}
#endif
