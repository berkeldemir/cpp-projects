#ifndef CAT_HPP
# define CAT_HPP
# include <iostream>
# include "./Animal.hpp"

# define CAT "[  CAT  ] "

class	Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat& ref);
		Cat  &operator=(const Cat& ref);
		~Cat();
		void			makeSound(void) const;
};

#endif