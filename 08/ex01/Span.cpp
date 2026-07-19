#include "Span.hpp"

Span::Span() : capacity(0) { }

Span::Span(unsigned int N) : capacity(N)
{
	list.reserve(6);
}

Span::Span(const Span& r) : capacity(r.capacity)
{
	list.reserve(capacity);
}

Span	Span::operator=(const Span& r)
{
	capacity = r.capacity;
	list.reserve(capacity);
	list = r.list;
	return *this;
}

Span::~Span() { }

///////////////////////////////////////////////////////////////////////////////

const char*	Span::SpanFullExc::what(void) const throw()
{
	return ("Span looks full, cannot add anything else.");
}

const char*	Span::SpanNotFoundExc::what(void) const throw()
{
	return ("There is no enough integers to calculate a span yet.");
}

///////////////////////////////////////////////////////////////////////////////

void	Span::addElement(int num)
{
	if (list.size() == capacity)
		throw SpanFullExc();

	list.push_back(num);
}

int	Span::shortestSpan(void)
{
	if (list.size() < 2)
		throw SpanNotFoundExc();

	std::vector<int>	sorted(list);
	std::sort(sorted.begin(), sorted.end());

	int	minDiffFound = std::numeric_limits<int>::max();
	for (unsigned long i = 0; i < sorted.size() - 1; i++)
	{
		int diff = sorted.at(i+1) - sorted.at(i); 
		if (minDiffFound > diff)
			minDiffFound = diff;
	}
	return (minDiffFound);
}

int	Span::longestSpan(void)
{
	if (list.size() < 2)
		throw SpanNotFoundExc();

	std::vector<int>::iterator	min = std::min_element(list.begin(), list.end());
	std::vector<int>::iterator	max = std::max_element(list.begin(), list.end());
	return ((*max - *min));
}

