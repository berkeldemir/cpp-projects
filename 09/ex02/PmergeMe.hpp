#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP

# include <iostream>
# include <vector>

class	PmergeMe
{
	private:
		std::vector< std::vector<unsigned int> >	nums;
		unsigned int	comparision_counter;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& r);
		PmergeMe	&operator=(const PmergeMe &r);
		~PmergeMe();

		void	giveNums(std::vector<unsigned int> _nums);
		void	splitAllTwo(void);
		void	swap(unsigned int parent, unsigned int i1, unsigned int i2);
		void	sort(void);
};

#endif
