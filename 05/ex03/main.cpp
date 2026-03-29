#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
    try
    {
        Bureaucrat  elon("Elon", 4);
        Bureaucrat  berk("Berk", 44);
        
        std::cout << "--- INTERN TESTS ---" << std::endl;

        Intern  intern;
        AForm* rrf;

        try
        {
            rrf = intern.makeForm("robotomy request", "Bender");
            if (rrf)
            {
                elon.signForm(*rrf);
                elon.executeForm(*rrf);
                delete rrf;
            }
        }
        catch (std::exception& e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }
        ////////////////////////////////
        std::cout << "---" << std::endl;
        ////////////////////////////////
        try
        {
            rrf = intern.makeForm("shrubbery creation", "Garden");
            if (rrf)
            {
                berk.signForm(*rrf);
                berk.executeForm(*rrf);
                delete rrf;
            }
        }
        catch (std::exception& e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }
        ////////////////////////////////
        std::cout << "---" << std::endl;
        ////////////////////////////////
        try
        {
            rrf = intern.makeForm("presidential pardon", "POTUS");
            if (rrf)
            {
                berk.signForm(*rrf);
                elon.signForm(*rrf);
                elon.executeForm(*rrf);
                delete rrf;
            }
        }
        catch (std::exception& e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }
        ////////////////////////////////
        std::cout << "---" << std::endl;
        ////////////////////////////////
        try
        {
            rrf = intern.makeForm("unknown form", "Target");
            if (rrf)
                delete rrf;
        }
        catch (std::exception& e)
        {
            std::cout << "Exception: " << e.what() << std::endl;
        }
    }
    catch (std::exception& exc)
    {
        std::cout << "Main Exception: " << exc.what() << std::endl;
    }
    
    return (0);
}
