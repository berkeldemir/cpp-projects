#include "PmergeMe.hpp"

PmergeMe::PmergeMe() { }

PmergeMe::PmergeMe(const PmergeMe &r) { nums = r.nums; }

PmergeMe	&PmergeMe::operator=(const PmergeMe &r)
{
	if (this != &r)
	{
		this->nums = r.nums;
	}
	return (*this);
}

PmergeMe::~PmergeMe() { }

////////////////////////////////////////////////////////////////////////////////

void	PmergeMe::giveNums(std::vector<unsigned int> _nums)
{
	std::vector<unsigned int>	vec;
	for (unsigned int i = 0; i < _nums.size(); i++)
		vec.push_back(_nums[i]);
	nums.push_back(vec);
}

void	PmergeMe::splitAllTwo(void)
{
	for (unsigned int i = 2; i < nums[0].size(); i += 2)
	{
		std::vector<unsigned int>	vec;
		vec.push_back(nums[0][i]);
		if (i+1 < nums[0].size())
			vec.push_back(nums[0][i + 1]);
		nums.push_back(vec);
	}
	for (unsigned int i = nums[0].size() - 1; i >= 2; i--)
		nums[0].pop_back();
}

void	PmergeMe::swap(unsigned int parent, unsigned int i1, unsigned int i2)
{
	unsigned int	tmp_i1 = nums[parent][i1];
	nums[parent][i1] = nums[parent][i2];
	nums[parent][i2] = tmp_i1;
}

void	PmergeMe::sort(void)
{
	// {[9, 8, 7, 6, 5, 4, 3, 2, 1]} => {[9, 8], [7, 6], [5, 4], [3, 2], [1]}
	splitAllTwo();

	// {[9 8], [7 6], [5 4], [3 2], [1]} => {[8, 9], [6, 7], [4, 5], [2, 3], [1]}
	for (unsigned int i = 0; i < nums.size(); i++)
		if (nums[i][1] && ++comparision_counter &&  nums[i][0] > nums[i][1])
			swap(i, 0, 1);

	// print
	for (unsigned int i = 0; i < nums.size(); i++)
		for (unsigned int j = 0; j < nums[i].size(); j++)
			std::cout << "[" << i << "][" << j << "]: " << nums[i][j] << std::endl;
}
