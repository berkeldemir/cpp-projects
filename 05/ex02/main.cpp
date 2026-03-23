#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	try
	{
		Bureaucrat	elon("Elon", 4);
		Bureaucrat	berk("Berk", 44);
		Bureaucrat	mert("Mert", 144);

		ShrubberyCreationForm	scForm("3");
		RobotomyRequestForm		rrForm("Robot");
		PresidentialPardonForm	ppForm("President");

		try
		{
			std::cout << scForm << std::endl;
			mert.signForm(scForm);
			std::cout << scForm << std::endl;
		}
		catch (std::exception& e)
		{
			std::cout << FAIL << e.what() << std::endl;
		}

		try
		{
			berk.executeForm(scForm);
		}
		catch(const std::exception& e)
		{
			std::cout << FAIL << e.what() << std::endl;
		}

		try
		{
			elon.executeForm(rrForm);
		}
		catch(const std::exception& e)
		{
			std::cout << FAIL << e.what() << std::endl;
		}

		berk.signForm(rrForm);		
		elon.executeForm(rrForm);

		try
		{
			mert.signForm(ppForm);
		}
		catch(const std::exception& e)
		{
			std::cout << FAIL << e.what() << std::endl;
		}

		elon.signForm(ppForm);
		elon.executeForm(ppForm);

	}
	catch (std::exception& exc)
	{
		std::cout << FAIL << exc.what() << std::endl;
	}
}