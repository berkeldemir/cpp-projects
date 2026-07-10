#include "whatever.hpp"
#include <iostream>

int main(void)
{
	int	a = 4;
	int	b = 2;
	::swap(a, b);
	std::cout << a << ", " << b << std::endl;
	std::cout << "::min(a,b): " << ::min(a,b) << std::endl;
	std::cout << "::max(a,b): " << ::max(a,b) << std::endl;

	std::cout << "----------" << std::endl;

	std::string	s1	= "berk1";
	std::string	s2	= "berk2";
	::swap(s1, s2);
	std::cout << s1 << ", " << s2 << std::endl;
	std::cout << "::min(s1,s2): " << ::min(s1,s2) << std::endl;
	std::cout << "::max(s1,s2): " << ::max(s1,s2) << std::endl;
}
