#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm()
	: name("draft AForm"), gradeToSign(150), gradeToExec(150)
{
	isSigned = false;
}

AForm::AForm(std::string _name, int _gradeToSign, int _gradeToExec)
	: name(_name), gradeToSign(_gradeToSign), gradeToExec(_gradeToExec)
{
	if (_gradeToSign <= 0 || _gradeToExec <= 0)
		throw AForm::GradeTooHighException();
	if (_gradeToSign > 150 || _gradeToExec > 150)
		throw AForm::GradeTooLowException();
	isSigned = false;
}

AForm::~AForm() {}

AForm::AForm(const AForm& ref)
	: name(ref.getName()), gradeToSign(ref.getGradeToSign()),
	gradeToExec(ref.getGradeToExec()), isSigned(ref.getIsSigned()) {}

AForm&	AForm::operator=(const AForm& ref)
	{ this->isSigned = ref.getIsSigned(); return(*this); }

const std::string&	AForm::getName(void) const { return (this->name); }
const int&	AForm::getGradeToSign(void) const { return (this->gradeToSign); }
const int&	AForm::getGradeToExec(void) const { return (this->gradeToExec); }
bool		AForm::getIsSigned(void) const { return (this->isSigned); }

void	AForm::beSigned(Bureaucrat& bureaucrat)
{
	if (this->getIsSigned() == true)
		throw AForm::FormAlreadySigned();
	else if (bureaucrat.getGrade() <= this->getGradeToSign())
		this->isSigned = true;
	else
		throw AForm::GradeTooLowException();
}

const char*	AForm::FormIsNotSigned::what(void) const throw()
{
	return ("form is not signed.");
}

const char*	AForm::FormAlreadySigned::what(void) const throw()
{
	return ("form already signed.");
}

const char*	AForm::GradeTooHighException::what(void) const throw()
{
	return ("grade too high.");
}

const char*	AForm::GradeTooLowException::what(void) const throw()
{
	return ("grade too low.");
}

void	AForm::checkExecReq(Bureaucrat const & Bureaucrat) const
{
	if (this->getIsSigned() == false)
		throw AForm::FormIsNotSigned();
	else if (Bureaucrat.getGrade() >= this->getGradeToExec())
		throw AForm::GradeTooLowException();
}

std::ostream&	operator<<(std::ostream& os, AForm& obj)
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