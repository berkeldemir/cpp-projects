#include "MutantStack.hpp"
#include "MutantStack.tpp"

#include <iostream>

int	main(void)
{
	std::stack<int>		real;
	MutantStack<int>	mine;

	std::cout << "real.empty() : " << real.empty() << std::endl;
	std::cout << "mine.empty() : " << mine.empty() << std::endl;

	for (int i = 0; i < 10; i++)
	{
		real.push(i * 5);
		mine.push(i * 5);
	}

	std::cout << "real.empty() after pushes : " << real.empty() << std::endl;
	std::cout << "mine.empty() after pushes : " << mine.empty() << std::endl;

	std::cout << "---------------------------" << std::endl;

	std::cout << "real.top() : " << real.top() << std::endl;
	std::cout << "real.size() : " << real.size() << std::endl;
	std::cout << "mine.top() : " << mine.top() << std::endl;
	std::cout << "mine.size() : " << mine.size() << std::endl;

	real.pop();
	mine.pop();

	std::cout << "real.top() after pop : " << real.top() << std::endl;
	std::cout << "real.size() after pop : " << real.size() << std::endl;
	std::cout << "mine.top() after pop : " << mine.top() << std::endl;
	std::cout << "mine.size() after pop : " << mine.size() << std::endl;

	MutantStack<int>::iterator	it_bgn = mine.begin();
	MutantStack<int>::iterator	it_end = mine.end();

	++it_bgn;
	--it_bgn;

	std::cout << "iterator tests:" << std::endl;
	while (it_bgn != it_end)
	{
		MutantStack<int>::const_iterator	it_const = it_bgn;
		std::cout << *it_const << ", ";
		std::cout << *it_bgn << std::endl;
		++it_bgn;
	}

	MutantStack<int>::reverse_iterator	it_rbgn = mine.rbegin();
	MutantStack<int>::reverse_iterator	it_rend = mine.rend();

	++it_rbgn;
	--it_rbgn;

	std::cout << "reverse_iterator tests:" << std::endl;
	for (MutantStack<int>::reverse_iterator it = it_rbgn;
		it_rbgn < it_rend;
		it_rbgn++)
	{
		MutantStack<int>::const_reverse_iterator	it_constr = it_rbgn;
		std::cout << *it_constr << ", ";
		std::cout << *it_rbgn << std::endl;
	}
	
	std::stack<int>	s(mine);
}
