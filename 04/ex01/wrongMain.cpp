#include "./WrongAnimal.hpp"
#include "./WrongCat.hpp"

int	main(void)
{
	WrongAnimal	*hippo;
	WrongAnimal	*cat;

	hippo = new WrongAnimal();
	cat = new WrongCat();

	std::cout << hippo->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	hippo->makeSound();
	cat->makeSound();

	delete hippo;
	delete cat;
}
