#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP

# include <iostream>
# include <vector>
# include <deque>

struct	WinLosPair
{
	unsigned int	win;
	unsigned int	los;
	bool			stray;
};

class	PmergeMe
{
	private:
		std::deque<WinLosPair>		createWinLosPairs(std::deque<unsigned int> &nums);
		std::deque<unsigned int>	createChainWithWinPairMembers(std::deque<WinLosPair>	pairs);
		void						orderPairsAccordingToWin(std::deque<WinLosPair> &pairs, std::deque<unsigned int> &wins);
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& r);
		PmergeMe	&operator=(const PmergeMe &r);
		~PmergeMe();

		void	sort(std::deque<unsigned int> &nums);
};

#endif
