#include <iostream>
#include "./Contact.hpp"

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

void	get_value(std::string prompt, std::string *ptr);
int   next_to_update();
void  partly_print(std::string str);

class	PhoneBook
{
	private:
		Contact	contact_list[8];
  public:
    int contact_count;
    void	add()
		{
			int	i = next_to_update();
			std::string	tmp;
			get_value("First Name", &contact_list[i].name);
			get_value("Last Name", &contact_list[i].surname);
			get_value("Nickname", &contact_list[i].nickname);
			get_value("Phone Number", &contact_list[i].phone_number);
			get_value("Darkest Secret", &tmp);
			contact_list[i].set_darkest_secret(tmp);
      if (contact_count < 8)
        contact_count++;
		}
		void	search()
		{
      int i = -1;
      int number = -1;

      if (contact_count == 0)
          return ;
      while (++i < contact_count)
      {
        std::cout << i << "|";
        partly_print(contact_list[i].name);
        partly_print(contact_list[i].surname);
        partly_print(contact_list[i].nickname);
        std::cout << "\n";
      }
      while (!(std::cin >> number) || number < 0 || number >= contact_count)
      {
        std::cout << "Please enter a number between 0 - " << contact_count - 1 << "!\n";
        std::cin.clear();
        std::cin.ignore(40, '\n');
      }
      std::cout << "First Name:\t" << contact_list[number].name << std::endl;
      std::cout << "Last Name:\t" << contact_list[number].surname << std::endl;
      std::cout << "Nickname:\t" << contact_list[number].nickname << std::endl;
      std::cout << "Phone Number:\t" << contact_list[number].phone_number << std::endl;
      std::cout << "Darkest Secret:\t" << contact_list[number].get_darkest_secret() << std::endl;
      return ;
		}
};

#endif
