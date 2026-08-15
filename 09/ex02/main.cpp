#include "PmergeMe.hpp"
#include <vector>

unsigned int	to_int(const char	*s)
{
	 if (s == NULL || *s == '\0')
		throw std::invalid_argument("null or empty string argument");

	 unsigned int	result = 0;
	 while(*s)
	 {
		if (*s < '0' || *s > '9')
			throw std::invalid_argument("invalid input string");
		result = result * 10  + (*s - '0');
		s++;
	 }
	 return result;
} 

int	main(int ac, char** av)
{
	if (ac <= 2)
	{
		std::cout << "Error\n";
		return (1);
	}

	std::deque<unsigned int>	numbers;
	
	for	(int i = 1; i < ac; i++)
	{
		try { numbers.push_back(to_int(av[i])); }
		catch (std::exception &e) { std::cout << "Error\n"; return (1); }
	}

	/*for (unsigned int i = 0; i < numbers.size(); i++)
		std::cout << i << ": " << numbers[i] << std::endl;
	*/

	PmergeMe	merge;

	merge.sort(numbers);
}
