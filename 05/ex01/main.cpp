#include "Bureaucrat.hpp"

int	main(void)
{
	////////// TEST 1
	////////// ALL OK
	try
	{
		Bureaucrat	elon("Elon", 10);
		Bureaucrat	berk("Berk", 15);
		Form		secretForm("V17R453CR37F0RM", 10, 5);

		berk.signForm(secretForm);
		std::cout << secretForm << std::endl;

		elon.signForm(secretForm);
		std::cout << secretForm << std::endl;

		berk.increaseGrade();
		berk.increaseGrade();
		berk.increaseGrade();
		berk.increaseGrade();
		berk.increaseGrade();

		std::cout << berk;
		
		berk.signForm(secretForm);

		std::cout << secretForm << std::endl;
	}
	catch (std::exception& exc)
	{
		std::cout << FAIL << exc.what() << std::endl;
	}


	std::cout << std::endl;
	////////// TEST 2
	////////// WRONG INIT

	try
	{
		Bureaucrat	elon("Elon", 10);
		Bureaucrat	berk("Berk", 15);
		Form		secretForm("V17R453CR37F0RM", 151, 1);

		berk.signForm(secretForm);
		std::cout << secretForm;

		elon.signForm(secretForm);
		std::cout << secretForm;
	}
	catch (std::exception& exc)
	{
		std::cout << FAIL << exc.what() << std::endl;
	}
}