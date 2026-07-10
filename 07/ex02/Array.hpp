#ifndef EX02_ARRAY_HPP
# define EX02_ARRAY_HPP

# include <exception>
# include <iostream>

template	<typename T>
class	Array
{
	private:
		T*				_elements;
		unsigned int	_size;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& r);
		Array	operator=(const Array& r);
		~Array();

		const T	operator[](unsigned int n)	const;
		T&		operator[](unsigned int n);

		unsigned int	size(void)	const;


		class	OutOfBoundsException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#include "Array.tpp"

#endif
