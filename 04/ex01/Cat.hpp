#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "./Animal.hpp"
# include "./Brain.hpp"

# define CAT "[  CAT  ] "

class	Cat : public Animal
{
	private:
		Brain*	brain;
	public:
		Cat();
		Cat(const Cat& ref);
		Cat	&operator=(const Cat& ref);
		~Cat();
		void	makeSound(void) const;
		void	setIdea(std::string newone) const;
		void	putIdeas(void) const;
};

#endif