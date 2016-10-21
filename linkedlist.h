#ifndef linkListIterator
#define linkListIterator
#include <iostream>
using namespace std;
template <class Type>
struct nodeType
{
	Type info;
	nodeType<Type> *link;
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
	nodeType<Type> *current;
};
template <class Type>
linkedListIterator<Type>::linkedListIterator()
{
	current = NULL;
}

template <class Type>
linkedListIterator<Type>::linkedListIterator(nodeType<Type> *ptr)
{
	current = ptr;
}
template <class Type>
Type linkedListIterator<Type>::operator*()
{
	return current->info;
}
template <class Type>
linkedListIterator<Type> linkedListIterator<Type>::operator++()
{
	current = current->link;
	return *this;
}
template <class Type>
bool linkedListIterator<Type>::operator==(const linkedListIterator<Type>&) const
{
	return (current == other.current);

}
template <class Type>
bool linkedListIterator<Type>::operator!=(const linkedListIterator<Type>&) const
{
	return (current != other.current);
}
#endif