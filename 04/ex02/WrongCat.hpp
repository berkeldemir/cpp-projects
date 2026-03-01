#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <iostream>
# include "./WrongAnimal.hpp"

# define WR_CAT "[  WR_CAT  ] "

class	WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat& ref);
		WrongCat  &operator=(const WrongCat& ref);
		~WrongCat();
		void			makeSound(void) const;
};

#endif