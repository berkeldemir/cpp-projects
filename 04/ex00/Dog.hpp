#ifndef DOG_HPP
# define DOG_HPP
# include <iostream>
# include "./Animal.hpp"

# define DOG "[  DOG  ] "

class	Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog& ref);
		Dog  &operator=(const Dog& ref);
		~Dog();
		void			makeSound(void) const;
};

#endif