#include "RPN.hpp"

RPN::RPN() { }

RPN::RPN(std::string _args) { giveArgs(_args); }

RPN::RPN(const RPN& r) : tokens(r.tokens) { }

RPN&	RPN::operator=(const RPN& r)
{
	if (this != &r)
		tokens = r.tokens;
	return (*this);
}

RPN::~RPN() { }

////////////////////////////////////////////////////////////////////////////////

void	RPN::giveArgs(std::string _args) { args = _args; }

////////////////////////////////////////////////////////////////////////////////

int		RPN::getAnswer(void)
{
	for (size_t i = 0; i < args.size(); i += 2)
	{
		if (args[i] >= '0' && args[i] <= '9')
			tokens.push(args[i] - '0');
		else if (args[i] == '+' || args[i] == '-' || args[i] == '*' || args[i] == '/')
		{
			if (tokens.size() < 2)
				throw std::runtime_error("Error");

			int	b = tokens.top();
			tokens.pop();
			int	a = tokens.top();
			tokens.pop();

			if (args[i] == '+')
				tokens.push(a + b);
			else if (args[i] == '-')
				tokens.push(a - b);
			else if (args[i] == '*')
				tokens.push(a * b);
			else
				tokens.push(a / b);
		}
		else
			throw std::runtime_error("Error");
	}

	if (tokens.size() != 1)
		throw std::runtime_error("Error");

	return (tokens.top());
}

