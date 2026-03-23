#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
	: AForm("ShrubberyCreationForm", 145, 137), target("~") {}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target)
	: AForm("ShrubberyCreationForm", 145, 137), target(_target) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref)
	: AForm("ShrubberyCreationForm", 145, 137), target(ref.target) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute(Bureaucrat const & bureaucrat) const
{
	this->checkExecReq(bureaucrat);

	std::string		filename = this->target + "_shrubbery";
	std::ofstream	outputFile(filename.c_str());

	if (!outputFile.is_open())
		std::cerr << "Error: Couldn't create the file " << filename << std::endl;

	int	height = 8;

    for (int i = 0; i < height; ++i)
	{
        for (int j = 0; j < height - i - 1; ++j)
            outputFile << " ";

        outputFile << "/";
        for (int j = 0; j < (i * 2); ++j)
		{
            if (i > 1 && j % 3 == 0)
				outputFile << "*";
            else outputFile << "w";
        }
        outputFile << "\\" << std::endl;
    }
    for (int i = 0; i < (height * 2); ++i)
        outputFile << "^";
    outputFile << "^" << std::endl;

	outputFile.close();
}
