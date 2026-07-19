#ifndef CPP08_EX01_SPAN_HPP
# define CPP08_EX01_SPAN_HPP

# include <iostream>
# include <stdexcept>
# include <exception>
# include <vector>
# include <algorithm>
# include <limits>

class	Span
{
	private:
		std::vector<int>	list;
		unsigned int		capacity;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span& r);
		Span	operator=(const Span& r);
		~Span();

		class	SpanFullExc : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

		class	SpanNotFoundExc : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

		void	addElement(int num);
		int		shortestSpan(void);
		int		longestSpan(void);

		template <typename TempIt>
		void	addRangeOfElements(TempIt begin, TempIt end)
		{
			bool	over_fill = false;
			int		empty_space = 0;

			if (end - begin + list.size() > capacity)
			{
				over_fill = true;
				empty_space = capacity - list.size();
			}

			if (over_fill == true)
			{
				list.insert(list.end(), begin, begin + empty_space);
				throw SpanFullExc();
			}
			else
				list.insert(list.end(), begin, end);
		}
};

#endif