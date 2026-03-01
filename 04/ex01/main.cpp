#include "./Animal.hpp"
#include "./Cat.hpp"
#include "./Dog.hpp"

int	main(void)
{
	unsigned int	count = 4;
	unsigned int	i = 0;
	Animal*			animals[count];

	for (; i < count; i++)
	{
		if (i % 2 == 0)
		{
			animals[i] = new Dog();
			animals[i]->setIdea("bone");
		}
		else
		{
			animals[i] = new Cat();
			animals[i]->setIdea("salami");
		}
	}

	std::cout << std::endl << "[INFO] Dogs and cats came alive."; 
	std::cout << std::endl << "[INFO] Printing their ideas in order.";
	std::cout << std::endl << std::endl;

	for (i = 0; i < count; i++)
		animals[i]->putIdeas();

	std::cout << std::endl << "[INFO] These were what animals think in order.";
	std::cout << std::endl << "[INFO] Program ends, destructing all.";
	std::cout << std::endl << std::endl;

	for (i = 0; i < count; i++)
		delete animals[i];

	return (0);
}
