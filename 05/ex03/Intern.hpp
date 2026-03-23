#ifndef INTERN_HPP

# define INTERN_HPP
# include <string>
# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class	Intern
{
	private:
		AForm*	newShrubberyForm(const std::string &target);
		AForm*	newRobotomyForm(const std::string &target);
		AForm*	newPresidentialForm(const std::string &target);
	public:
		Intern();
		Intern(const std::string& target);
		Intern(const Intern& ref);
		~Intern();

		Intern&	operator=(const Intern& ref);


		AForm*	makeForm(std::string formType, std::string formTarget);
};

#endif