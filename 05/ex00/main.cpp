#include "Bureaucrat.hpp"

int	main(void)
{
	////////// TEST 1
	////////// LESS THAN 1
	try
	{
		Bureaucrat	berk("Berk", 2);
		std::cout << berk;
	
		berk.increaseGrade();
		std::cout << berk;
	
		berk.increaseGrade();
		std::cout << berk;

		std::cout << "Won't print this.\n";
		berk.decreaseGrade();
		std::cout << berk;
	}
	catch (std::exception& exc)
	{
		std::cout << FAIL << exc.what() << std::endl;
	}

	std::cout << std::endl;

	////////// TEST 2
	////////// MORE THAN 150

	try
	{
		Bureaucrat	mars("Marshall", 149);
		std::cout << mars;
	
		mars.decreaseGrade();
		std::cout << mars;
	
		mars.decreaseGrade();
		std::cout << mars;

		std::cout << "Won't print this.\n";
		mars.increaseGrade();
		std::cout << mars;
	}
	catch (std::exception& exc)
	{
		std::cout << FAIL << exc.what() << std::endl;
	}

	std::cout << std::endl;

	////////// TEST 3
	////////// WRONG INIT

	try
	{
		Bureaucrat	upsie("Upsie", 151);

		std::cout << "Won't print this.\n";
		upsie.increaseGrade();
		std::cout << upsie;

	}
	catch(std::exception& exc)
	{
		std::cout << FAIL << exc.what() << std::endl;
	}

	std::cout << std::endl;

	////////// TEST 4
	////////// JUST RIGHT

	try
	{
		Bureaucrat	elon("Elon", 75);
		std::cout << elon;
	
		elon.decreaseGrade();
		std::cout << elon;
	
		elon.decreaseGrade();
		std::cout << elon;

		elon.increaseGrade();
		std::cout << elon;

		elon.increaseGrade();
		std::cout << elon;

		std::cout << "Test 4 ended up well till the end!" << std::endl;
	}
	catch (std::exception& exc)
	{
		std::cout << "FAIL" << exc.what() << std::endl;
	}
}