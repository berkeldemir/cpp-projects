#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include "./Brain.hpp"

# define ANIMAL "[GENERAL] "

# define CONSTR "constructor worked.\n"
# define CPYCONSTR "copy constructor worked.\n"
# define ASGNCONSTR "assignment(=) constructor worked.\n"
# define DESTR "destructor worked.\n"

class	Animal
{
	protected:
		std::string type;
	public:
		Animal();
		Animal(const Animal& ref);
		Animal  &operator=(const Animal& ref);
		virtual ~Animal();
		std::string&	getType(void);
		virtual void	makeSound(void) const = 0;
		virtual void	setIdea(std::string newone) const = 0;
		virtual void	putIdeas(void) const = 0;
};

#endif