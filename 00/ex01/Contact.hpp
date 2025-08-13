#include <iostream>

#ifndef CONTACT_H
# define CONTACT_H

class	Contact
{
	private:
		std::string darkest_secret;
	public:
		std::string name;
		std::string surname;
		std::string nickname;
		std::string phone_number;
		void        set_darkest_secret(std::string input)
    {
      darkest_secret = input;
    }
    std::string get_darkest_secret()
    {
      return (darkest_secret);
    }
};

#endif
