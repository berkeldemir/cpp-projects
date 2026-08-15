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

std::deque<WinLosPair>	PmergeMe::createWinLosPairs(std::deque<unsigned int> &nums)
{
	std::deque<WinLosPair>	pairs;

	for (size_t i = 0; i < nums.size(); i += 2)
	{
		WinLosPair	pair;
		if (i + 1 < nums.size())
		{
			pair.stray = false;
			if (nums[i] < nums[i+1])
			{
				pair.win = nums[i+1];
				pair.los = nums[i];
			}
			else
			{
				pair.win = nums[i];
				pair.los = nums[i+1];
			}
		}
		else
		{
			pair.stray = true;
			pair.los = nums[i];
			pair.win = 0;
		}
		pairs.push_back(pair);
	}

	return pairs;
}

std::deque<unsigned int>	PmergeMe::createChainWithWinPairMembers(std::deque<WinLosPair>	pairs)
{
	std::deque<unsigned int>	chain;

	for (size_t i = 0; i < pairs.size(); i++)
		if (pairs[i].stray == false)
			chain.push_back(pairs[i].win);
	return (chain);
}

void	PmergeMe::orderPairsAccordingToWin(std::deque<WinLosPair> &pairs, std::deque<unsigned int> &wins)
{
	std::deque<WinLosPair>	ordered;
	for (size_t i = 0; i < pairs.size(); i++)
	{
		for (size_t j = 0; j < wins.size(); j++)
		{
			if (pairs[i].win == wins[j])
			{
				ordered.push_back(pairs[i]);
				pairs[i] = pairs.back();
				pairs.pop_back();
				break ;
			}
		}
	}
	pairs = ordered;
	return ;
}

void	PmergeMe::sort(std::deque<unsigned int> &nums)
{
	std::deque<unsigned int>	mainChain = nums;
	std::cout << "+++++\n";
	/// I DON'T KNOW WHAT I AM DOING I GUESS

	if (nums.size() <= 1)
		return ;
	else if (nums.size() == 2)
	{
		if (nums[0] > nums[1])
			std::swap(nums[0], nums[1]);
		return ;
	}

	std::deque<WinLosPair>	pairs = createWinLosPairs(nums);
	std::deque<unsigned int>	wins = createChainWithWinPairMembers(pairs);
	sort(wins);
	orderPairsAccordingToWin(pairs, wins);

	for (size_t i = 0; i < pairs.size(); i++)
	{
		if (pairs[i].stray == true)
			std::cout << "#STRAY\n";
		std::cout << "#" << i << ": " << pairs[i].win << ", " << pairs[i].los << "\n";
	}

	std::cout << "MAIN CHAIN: ";
	for (size_t i = 0; i < mainChain.size(); i++)
	{
		std::cout << mainChain[i] << "->";
	}
	std::cout << "END\n";
}
