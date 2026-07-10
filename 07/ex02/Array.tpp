#include "Array.hpp"

template	<typename T>
	Array<T>::Array() : _elements(NULL), _size(0) { }

template	<typename T>
	Array<T>::Array(unsigned int n) : _elements(NULL), _size(n)
	{
		if (_size == 0)
			return ;
		_elements = new T[_size]();
	}

template	<typename T>
	Array<T>::Array(const Array& r) : _elements(NULL), _size(r.size())
	{
		_elements = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
			_elements[i] = r[i];
	}

template	<typename T>
	Array<T>	Array<T>::operator=(const Array& r)
	{
		if (*this != r)
		{
			_size = r.size();
			_elements = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
				_elements[i] = r[i];
		}
		return *this;
	}

template	<typename T>
	Array<T>::~Array() { delete[] _elements; }

template	<typename T>
	const T	Array<T>::operator[](unsigned int n)	const
	{
		if (n >= _size)
			throw OutOfBoundsException();
		return _elements[n];
	}

template	<typename T>
	T&	Array<T>::operator[](unsigned int n)
	{
		if (n >= _size)
			throw OutOfBoundsException();
		return _elements[n];
	}

template	<typename T>
	unsigned int	Array<T>::size(void)	const
	{
		return _size;
	}

template	<typename T>
	const char	*Array<T>::OutOfBoundsException::what() const throw()
	{
		return ("Error: The index is out of bounds!");
	};
