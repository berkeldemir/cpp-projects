#include "PmergeMe.hpp"

PmergeMe::PmergeMe() { }

PmergeMe::PmergeMe(const PmergeMe &r) { (void)r; }

PmergeMe	&PmergeMe::operator=(const PmergeMe &r)
{
	(void)r;
	return (*this);
}

PmergeMe::~PmergeMe() { }

////////////////////////////////////////////////////////////////////////////////

uint	PmergeMe::jacobstal(uint step)
{
	if (step == 1)
		return (0);
	else if (step == 2)
		return (1);
	else
		return ( jacobstal(step - 1) + 2 * jacobstal(step - 2) );
}
