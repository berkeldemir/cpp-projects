#ifndef PRESEDENTIALPARDONFORM_HPP
# define PRESEDENTIALPARDONFORM_HPP

# include "AForm.hpp"

class	PresidentialPardonForm : public AForm
{
	private:
		std::string	target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm& ref);
		~PresidentialPardonForm();

		void	execute(Bureaucrat const & bureaucrat) const;
};

#endif