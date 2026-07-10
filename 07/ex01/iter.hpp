#ifndef EX01_ITER_HPP
# define EX01_ITER_HPP

#include <iostream>

template	<typename T>
	void	templatedFunction(T& t)
	{
		std::cout << ">" << t << "<" << std::endl;
	}

template	<typename A, typename S, typename F>
	void	iter(A* arr, const S size, F funct)
	{
		if (!size || size == 0 || arr == NULL)
			return ;
		for (int i = 0; i < size; i++)
			funct((arr)[i]);
	}

#endif