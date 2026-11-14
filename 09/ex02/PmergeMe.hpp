#ifndef PMERGE_ME_HPP
# define PMERGE_ME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <utility>
# include <algorithm>

typedef unsigned int	uint;

class	PmergeMe
{
	private:
	public:
		PmergeMe();
		PmergeMe(const PmergeMe& r);
		PmergeMe	&operator=(const PmergeMe &r);
		~PmergeMe();

		uint	jacobstal(uint step);

		template	<typename Container>
		void	sort(Container &nums)
		{
			bool has_stray = false;
			int	stray = -1;

			if (nums.size() <= 1)
				return ;
			else if (nums.size() == 2)
			{
				if (nums[0] > nums[1])
					std::swap(nums[0], nums[1]);
				return ;
			}
			else if (nums.size() % 2 == 1)
			{
				has_stray = true;
				stray = nums.back();
				nums.pop_back();	
			}

			std::vector< std::pair<uint, uint> >	pairs;
			Container								wins;

			for (size_t i = 0; i < nums.size(); i += 2)
			{
				if (nums[i] > nums[i+1])
				{
					pairs.push_back(std::make_pair(nums[i], nums[i+1]));
					wins.push_back(nums[i]);
				}
				else
				{
					pairs.push_back(std::make_pair(nums[i+1], nums[i]));
					wins.push_back(nums[i+1]);
				}
			}

			sort(wins);

			Container			loss;
			std::vector<bool>	assigned(pairs.size(), false);

			for (size_t i = 0; i < wins.size(); i++)
			{
				for (size_t j = 0; j < pairs.size(); j++)
				{
					if (!assigned[j])
					{
						if (wins[i] == pairs[j].first)
						{
							loss.push_back(pairs[j].second);
							assigned[j] = true;
							break ;
						}
					}
				}
			}

			Container	main_chain = wins;

			if (!loss.empty())
				main_chain.insert(main_chain.begin(), loss[0]);

			uint	step = 4;
			uint	prev = jacobstal(step - 1);
			uint	curr = jacobstal(step);

			while (prev < loss.size())
			{
				uint	start = curr - 1;
				if (start >= loss.size())
					start = loss.size() - 1;
				
				for (uint i = start; ; i--)
				{
					typename Container::iterator it = std::lower_bound(main_chain.begin(), main_chain.end(), loss[i]);
					main_chain.insert(it, loss[i]);

					if (i == prev)
						break ;
				}

				step++;
				prev = curr;
				curr = jacobstal(step);
			}


			if (has_stray)
			{
				typename Container::iterator	it = std::lower_bound(main_chain.begin(), main_chain.end(), stray);
				main_chain.insert(it, stray);
			}

			nums = main_chain;
		}
};

#endif
