#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
	: AForm("RobotomyRequestForm", 72, 45), target("~") {}

RobotomyRequestForm::RobotomyRequestForm(std::string _target)
	: AForm("RobotomyRequestForm", 72, 45), target(_target) {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref)
	: AForm("RobotomyRequestForm", 72, 45), target(ref.target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(Bureaucrat const & bureaucrat) const
{
	this->checkExecReq(bureaucrat);
	std::cout << "<some drilling noise>" << std::endl;

	//std::srand(std::time({}));

	if (std::rand() % 2 == 0)
		std::cout << "[INFO] Target \'" << this->target << "\' succesfully robotomized." << std::endl;
	else
		std::cout << "[INFO] Target \'" << this->target << "\' robotomy failed..." << std::endl;
}
