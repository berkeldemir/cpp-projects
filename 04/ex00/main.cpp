#include "./Animal.hpp"
#include "./Cat.hpp"
#include "./Dog.hpp"

int	main(void)
{
	Animal	*hippo;
	Animal	*dog;
	Animal	*cat;

	hippo = new Animal();
	dog = new Dog();
	cat = new Cat();

	std::cout << hippo->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;

	hippo->makeSound();
	dog->makeSound();
	cat->makeSound();

	delete hippo;
	delete dog;
	delete cat;
}
