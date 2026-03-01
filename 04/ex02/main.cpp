#include "./Animal.hpp"
#include "./Cat.hpp"
#include "./Dog.hpp"

int	main(void)
{
	Animal *poppy = new Cat();
	Animal *buddy = new Dog();
	// Animal	*bird = new Bird(); // ERROR

	poppy->makeSound();

	buddy->makeSound();

	// bird.makeSound(); // ERROR

	delete buddy;
	delete poppy;
	// delete bird;
	return (0);
}
