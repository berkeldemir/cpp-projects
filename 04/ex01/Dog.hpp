#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "./Animal.hpp"
# include "./Brain.hpp"

# define DOG "[  DOG  ] "

class	Dog : public Animal
{
	private:
		Brain*	brain;
	public:
		Dog();
		Dog(const Dog& ref);
		Dog  &operator=(const Dog& ref);
		~Dog();
		void	makeSound(void) const;
		void	setIdea(std::string newone) const;
		void	putIdeas(void) const;
};

#endif