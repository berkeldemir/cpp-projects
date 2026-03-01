#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>

# define WR_ANIMAL "[WR_GENERAL] "

# define CONSTR "constructor worked.\n"
# define CPYCONSTR "copy constructor worked.\n"
# define ASGNCONSTR "assignment(=) constructor worked.\n"
# define DESTR "destructor worked.\n"

class	WrongAnimal
{
	protected:
		std::string type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal& ref);
		WrongAnimal  &operator=(const WrongAnimal& ref);
		~WrongAnimal();
		std::string&	getType(void);
		void			makeSound(void) const;
};

#endif