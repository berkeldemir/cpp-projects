#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
	: AForm("PresidentialPardonForm", 25, 5), target("~") {}

PresidentialPardonForm::PresidentialPardonForm(std::string _target)
	: AForm("PresidentialPardonForm", 25, 5), target(_target) {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref)
	: AForm("PresidentialPardonForm", 25, 5), target(ref.target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute(Bureaucrat const & bureaucrat) const
{
	this->checkExecReq(bureaucrat);
	std::cout << "[INFO] Target \'" << this->target << "\' has been pardoned by Zaphod Beeblebrox." << std::endl;
}
