#include "PmergeMe.hpp"
#include <time.h>
#include <iomanip>

uint	to_uint(const char	*s)
{
	 if (s == NULL || *s == '\0')
		throw std::invalid_argument("null or empty string argument");

	 uint	result = 0;
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
		std::cerr << "Error\n";
		return (1);
	}

	std::deque<uint>	numbers_deque;
	std::vector<uint>	numbers_vector;
	
	for	(int i = 1; i < ac; i++)
	{
		try { numbers_deque.push_back(to_uint(av[i])); }
		catch (std::exception &e) { std::cerr << "Error\n"; return (1); }
	}

	for	(int i = 1; i < ac; i++)
	{
		try { numbers_vector.push_back(to_uint(av[i])); }
		catch (std::exception &e) { std::cerr << "Error\n"; return (1); }
	}

	bool	is_before_same = std::equal(
							numbers_deque.begin(), numbers_deque.end(),
							numbers_vector.begin() );

	if (!is_before_same)
		std::cout << "(!) A problem occured!\n";

	std::cout << "Before:\t";
	for (uint i = 0; i < numbers_vector.size(); i++)
		std::cout << numbers_vector[i] << " ";
	std::cout << "\n";

	PmergeMe	pmergeme;

	//////////////////////////////////////////////////////////////////////////

	struct timespec start_deq;
	struct timespec	finish_deq;
	
	clock_gettime(CLOCK_MONOTONIC, &start_deq);
	pmergeme.sort(numbers_deque);
	clock_gettime(CLOCK_MONOTONIC, &finish_deq);
	double	total_time_deq = (finish_deq.tv_sec - start_deq.tv_sec) * 1000000.0 +
							(finish_deq.tv_nsec - start_deq.tv_nsec) / 1000.0;

	//////////////////////////////////////////////////////////////////////////

	struct timespec	start_vec;
	struct timespec	finish_vec;

	clock_gettime(CLOCK_MONOTONIC, &start_vec);
	pmergeme.sort(numbers_vector);
	clock_gettime(CLOCK_MONOTONIC, &finish_vec);
	double	total_time_vec = (finish_vec.tv_sec - start_vec.tv_sec) * 1000000.0 +
							(finish_vec.tv_nsec - start_vec.tv_nsec) / 1000.0;

	//////////////////////////////////////////////////////////////////////////
	
	bool	is_after_same = std::equal(
							numbers_deque.begin(), numbers_deque.end(),
							numbers_vector.begin() );

	if (!is_after_same)
		std::cout << "(!) A problem occured!\n";

	std::cout << "After:\t";
	for (uint i = 0; i < numbers_vector.size(); i++)
		std::cout << numbers_vector[i] << " ";
	std::cout << "\n";

	//////////////////////////////////////////////////////////////////////////

	std::cout	<< "Time to process a range of " << numbers_vector.size()
				<< " elements with std::deque\t: " 
				<< std::fixed << std::setprecision(5)
				<< total_time_deq << " us\n";
	
	std::cout	<< "Time to process a range of " << numbers_deque.size()
				<< " elements with std::vector\t: "
				<< std::fixed << std::setprecision(5)
				<< total_time_vec << " us\n";
}
