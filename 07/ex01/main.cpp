#include <iostream>
#include "iter.hpp"

void	printPrettyInt(const int val)
{
	std::cout << "*#*#*# " << val << " #*#*#*" << std::endl;
}

void	printPrettyStr(std::string str)
{
	std::cout << "*#*#*# " << str << " #*#*#*" << std::endl;
}

int	main(void)
{
	int	intArraySize = 3;
	int	intArray[intArraySize] = {7, 88, 999};

	::iter(intArray, intArraySize, printPrettyInt);

	const long long	strArraySize = 7;
	std::string		strArray[strArraySize] = {"b", "be", "bel", "beld", "beldem", "beldemi", "beldemir"};
	::iter(strArray, strArraySize, printPrettyStr);

	::iter(intArray, intArraySize, ::templatedFunction<int>);

	::iter(strArray, strArraySize, ::templatedFunction<std::string>);
	return 0;
}