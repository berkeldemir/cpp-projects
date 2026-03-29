#include "Intern.hpp"
#include "AForm.hpp"

Intern::Intern() {}

Intern::Intern(const std::string& target) { (void)target; }

Intern::Intern(const Intern& ref) { (void)ref; }

Intern::~Intern() {}

Intern&	Intern::operator=(const Intern& ref) { (void)ref; return (*this); }

AForm*	Intern::newShrubberyForm(const std::string& target)
{
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::newRobotomyForm(const std::string& target)
{
	return (new RobotomyRequestForm(target));
}

AForm*	Intern::newPresidentialForm(const std::string& target)
{
	return (new PresidentialPardonForm(target));
}

const char*	Intern::FormNotFound::what(void) const throw()
{
	return ("form does not exist.");
}

AForm*	Intern::makeForm(std::string formType, std::string formTarget)
{
	std::string	formTypes[] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	AForm*	(Intern::*newFunctions[])(const std::string&) = {
		&Intern::newShrubberyForm,
		&Intern::newRobotomyForm,
		&Intern::newPresidentialForm
	};

	for (int i = 0; i < 3; i++)
	{
		if (formType == formTypes[i])
		{
			std::cout << "Intern creates " << formType << std::endl;
			return ((this->*newFunctions[i])(formTarget));
		}
	}

	throw Intern::FormNotFound();
	return (NULL);
}