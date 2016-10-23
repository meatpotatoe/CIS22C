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
template <class Type>
Type linkedList<Type>::operator*()
{
	return current->info;
}
template <class Type>
linkedList<Type> linkedList<Type>::operator++()
{
	current = current->link;
	return *this;
}
template <class Type>
bool linkedList<Type>::operator==(const linkedList<Type>&) const
{
	return (current == other.current);

}
template <class Type>
bool linkedList<Type>::operator!=(const linkedList<Type>&) const
{
	return (current != other.current);
}
#endif
