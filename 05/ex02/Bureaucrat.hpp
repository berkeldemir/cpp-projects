#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "AForm.hpp"
# define NOBODY "<nobody>: "
# define FAIL "[ FAIL ] "

class	Bureaucrat
{
	private:
		const std::string	name;
		int					grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string _name, int grade);
		Bureaucrat(const Bureaucrat& ref);
		~Bureaucrat();

		Bureaucrat&	operator=(const Bureaucrat& ref);

		const std::string&	getName(void) const;
		const int&			getGrade(void) const;

		class	GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

		class	GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

		void	increaseGrade(void);
		void	decreaseGrade(void);

		void	signForm(AForm& form);
		void	executeForm(AForm& form);
};

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& obj);

#endif