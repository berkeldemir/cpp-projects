#include "./Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("noooobody") {}

Bureaucrat::Bureaucrat(std::string _name, int _grade) : name(_name)
{
	if (_grade <= 0)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->grade = _grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& ref)
	: name(ref.getName()), grade(ref.getGrade()) {}

Bureaucrat::~Bureaucrat() {}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& ref)
{
	if (this != &ref)
		this->grade = ref.getGrade();
	return (*this);
}

const std::string&	Bureaucrat::getName(void) const { return (this->name); }

const int&			Bureaucrat::getGrade(void) const { return (this->grade); }

void	Bureaucrat::increaseGrade(void)
{
	if (this->grade - 1 > 0)
	{
		this->grade--;
		return ;
	}
	throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decreaseGrade(void)
{
	if (this->grade + 1 <= 150)
	{
		this->grade++;
		return ;
	}
	throw Bureaucrat::GradeTooLowException();
}

const char*	Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade must be > 0");
}

const char*	Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade must be <= 150");
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& obj)
{
	os << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".\n";
	return (os);
}
