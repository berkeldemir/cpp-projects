#ifndef CPP05_FORM_HPP
# define CPP05_FORM_HPP

# include <iostream>
# include <string>

class	Bureaucrat;

class	AForm
{
	private:
		const std::string	name;
		const int			gradeToSign;
		const int			gradeToExec;
		bool				isSigned;
	public:
		AForm();
		AForm(std::string _name, int _gradeToSign, int _gradeToExec);
		AForm(const AForm& ref);
		virtual ~AForm();

		AForm&	operator=(const AForm& ref);

		const std::string&	getName(void)			const;
		const int&			getGradeToSign(void)	const;
		const int&			getGradeToExec(void)	const;
		bool				getIsSigned(void)			const;

		void	beSigned(Bureaucrat& bureaucrat);

		class	FormIsNotSigned : public std::exception
		{
			public:
				virtual const char*	what() const throw();
		};

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

		void			checkExecReq(Bureaucrat const & bureaucrat) const;
		virtual void	execute(Bureaucrat const & bureaucrat) const = 0;
};

std::ostream&	operator<<(std::ostream& os, AForm& obj);

#endif