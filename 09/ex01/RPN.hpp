#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>

class	RPN
{
	private:
		std::string			args;
		std::stack<int>		tokens;
	public:
		RPN();
		RPN(std::string args);
		RPN(const RPN& r);
		RPN&	operator=(const RPN& r);
		~RPN();

		void	giveArgs(std::string _args);
		int		getAnswer();
};

#endif