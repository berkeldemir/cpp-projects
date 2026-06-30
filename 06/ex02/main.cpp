#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>
#include <iostream>

Base	*generate(void)
{
	int	randomValue = std::rand() % 3;

	switch (randomValue)
	{
		case 0:
			std::cout << SIGNATURE << "generated A" << std::endl;
			return (new A());
		case 1:
			std::cout << SIGNATURE << "generated B" << std::endl;
			return (new B());
		case 2:
			std::cout << SIGNATURE << "generated C" << std::endl;
			return (new C());
	}
	return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << SIGNATURE << "identified *p is A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << SIGNATURE << "identified *p is B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << SIGNATURE << "identified *p is C" << std::endl;
}

void	identify(Base &p)
{
	char	type = 'X';
	try { (void)dynamic_cast<A&>(p); type = 'A'; }
	catch (...) { }

	try { (void)dynamic_cast<B&>(p); type = 'B'; }
	catch (...) { }

	try { (void)dynamic_cast<C&>(p); type = 'C'; }
	catch (...) { }

	std::cout << SIGNATURE << "identified &p is " << type << std::endl;
}

int	main(void)
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	for	(int i = 0; i < 5; i++)
	{
		std::cout << SIGNATURE << "---- TEST NO " << i << " -----" << std::endl;
		
		Base	*ptr = generate();
		if (!ptr)
		{
			std::cerr << SIGNATURE << "An error occured in generate function." << std::endl;
			continue ;
		}
		identify(*ptr);
		identify(ptr);
		delete (ptr);
		std::cout << SIGNATURE << "--------------------" << std::endl;
	}
	return (0);
}
