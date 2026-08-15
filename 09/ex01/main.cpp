#include "RPN.hpp"
#include <iostream>

int	main(int ac, char** av)
{
	if (ac != 2)
	{
		std::cerr << "Error" << std::endl;
		return 1;
	}

	try
	{
		RPN		sophie_kaczynsky(av[1]);
		int		answer = sophie_kaczynsky.getAnswer();
		std::cout << answer << std::endl;
	}
	catch (std::exception &e) { std::cerr << e.what() << std::endl; }
}

// Signature: Sophie Kaczynsky :)
