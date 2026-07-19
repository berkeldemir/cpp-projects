#ifndef CPP08_EX02_MUTANTSTACK_TPP
# define CPP08_EX02_MUTANTSTACK_TPP

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack() { std::stack<T>(); }

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& r) : std::stack<T>(r) { }

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack& r)
{ 
	if (this != &r)
		std::stack<T>::operator=(r);
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() { }

///////////////////////////////////////////////////////////////////////////////

template <typename T>
typename MutantStack<T>::iterator			MutantStack<T>::begin(void) { return this->c.begin(); }

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rbegin(void) { return this->c.rbegin(); }

template <typename T>
typename MutantStack<T>::iterator			MutantStack<T>::end(void) { return this->c.end(); }

template <typename T>
typename MutantStack<T>::reverse_iterator	MutantStack<T>::rend(void) { return this->c.rend(); }

///////////////////////////////////////////////////////////////////////////////

template <typename T>
typename MutantStack<T>::const_iterator			MutantStack<T>::begin(void)	const { return this->c.begin(); }

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rbegin(void) const { return this->c.rbegin(); }

template <typename T>
typename MutantStack<T>::const_iterator			MutantStack<T>::end(void) const { return this->c.end(); }

template <typename T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rend(void) const { return this->c.rend(); }

#endif
