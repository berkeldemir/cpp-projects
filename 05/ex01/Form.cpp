#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form()
	: name("draft form"), gradeToSign(150), gradeToExec(150)
{
	isSigned = false;
}

Form::Form(std::string _name, int _gradeToSign, int _gradeToExec)
	: name(_name), gradeToSign(_gradeToSign), gradeToExec(_gradeToExec)
{
	if (_gradeToSign <= 0 || _gradeToExec <= 0)
		throw Form::GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToExec > 150)
		throw Form::GradeTooLowException();
	isSigned = false;
}

Form::~Form() {}

Form::Form(const Form& ref)
	: name(ref.getName()), gradeToSign(ref.getGradeToSign()),
	gradeToExec(ref.getGradeToExec()), isSigned(ref.getIsSigned()) {}

Form&	Form::operator=(const Form& ref)
	{ this->isSigned = ref.getIsSigned(); return(*this); }

const std::string&	Form::getName(void) const { return (this->name); }
const int&	Form::getGradeToSign(void) const { return (this->gradeToSign); }
const int&	Form::getGradeToExec(void) const { return (this->gradeToExec); }
bool		Form::getIsSigned(void) const { return (this->isSigned); }

void	Form::beSigned(Bureaucrat& bureaucrat)
{
	if (this->getIsSigned() == true)
		throw Form::FormAlreadySigned();
	else if (bureaucrat.getGrade() <= this->getGradeToSign())
		this->isSigned = true;
	else
		throw Form::GradeTooLowException();
}

const char*	Form::FormAlreadySigned::what(void) const throw()
{
	return ("form already signed.");
}

const char*	Form::GradeTooHighException::what(void) const throw()
{
	return ("grade too high.");
}

const char*	Form::GradeTooLowException::what(void) const throw()
{
	return ("grade too low.");
}

std::ostream&	operator<<(std::ostream& os, Form& obj)
{
	os << "Form Name        : " << obj.getName() << std::endl;
	os << "Grade To Sign    : " << obj.getGradeToSign() << std::endl;
	os << "Grade To Execute : " << obj.getGradeToExec() << std::endl;
	os << "Is it signed?    : ";
	if (obj.getIsSigned() == true)
		os << "Yes.";
	else
		os << "No.";
	os << std::endl;
	return (os);
}