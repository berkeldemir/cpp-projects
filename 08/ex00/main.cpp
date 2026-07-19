#include "easyfind.hpp"
#include <vector>
#include <list>
#include <iostream>

int	main(void)
{
	std::vector<int>	vec;
	std::list<int>		lst;

	int	size = 5;
	int	val = 1000000;
	vec.reserve(size);
	for (int i = 0; i < size; i++)
	{
		vec.push_back(val);
		lst.push_back(val);
		val = val / 2;
	}

	const std::vector<int>		vec_const(vec);
	const std::list<int>		lst_const(lst);

	for (int i = size; i >= -1; i--)
	{
		try { std::vector<int>::iterator it = easyfind(vec, val); 
			std::cout << i << "(vec): " << *it << std::endl;}
		catch (const std::exception& e) { std::cout << i << "(vec): " << val << ": " << e.what() << std::endl; }

		try { std::list<int>::iterator it = easyfind(lst, val); 
			std::cout << i << "(lst): " << *it << std::endl;}
		catch (const std::exception& e) { std::cout << i << "(lst): " << val << ": " << e.what() << std::endl; }

		///////////////////////////////////////////////////////////////////////////////////

		try { std::vector<int>::const_iterator it = easyfind(vec_const, val); 
			std::cout << i << "(vec_const): " << *it << std::endl;}
		catch (const std::exception& e) { std::cout << i << "(vec_const): " << val << ": " << e.what() << std::endl; }

		try { std::list<int>::const_iterator it = easyfind(lst_const, val); 
			std::cout << i << "(lst_const): " << *it << std::endl;}
		catch (const std::exception& e) { std::cout << i << "(lst_const): " << val << ": " << e.what() << std::endl; }

		///////////////////////////////////////////////////////////////////////////////////

		std::cout << "--------" << std::endl;

		val = val * 2;
	}
}