#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include "./Animal.hpp"

# define BRAIN "[ BRAIN ] "

class	Brain
{
	protected:
		std::string	ideas[100];
		int			nextIndex;
	public:
		Brain();
		Brain(const Brain &ref);
		Brain&	operator=(const Brain &ref);
		~Brain();
		void	setIdea(std::string newone);
		void	putIdeas(void) const;
};

#endif