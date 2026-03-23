#ifndef CPP05_FORM_HPP
# define CPP05_FORM_HPP

# include <iostream>
# include <string>

class	Bureaucrat;

class	Form
{
	private:
		const std::string	name;
		const int			gradeToSign;
		const int			gradeToExec;
		bool				isSigned;
	public:
		Form();
		Form(std::string _name, int _gradeToSign, int _gradeToExec);
		Form(const Form& ref);
		~Form();

		Form&	operator=(const Form& ref);

		const std::string&	getName(void)			const;
		const int&			getGradeToSign(void)	const;
		const int&			getGradeToExec(void)	const;
		bool				getIsSigned(void)			const;

		void	beSigned(Bureaucrat& bureaucrat);

		class	FormAlreadySigned : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

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
};

std::ostream&	operator<<(std::ostream& os, Form& obj);

#endif