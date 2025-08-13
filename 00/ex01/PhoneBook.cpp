#include <iostream>
#include "./PhoneBook.hpp"

void	get_value(std::string prompt, std::string *ptr)
{
	std::cout << prompt << ":\t";
	getline(std::cin, *ptr);
	if (*ptr == "")
		*ptr = "<?>";
}

int	next_to_update()
{
	static unsigned int	i = -1;

	i++;
	if (i == 8)
		i = 0;
	return (i);
}

void partly_print(std::string str)
{
  int len = 0;
  int i;

  while (str[len])
      len++;
  if (len > 10) {
    i = -1;
    while (++i < 9)
      std::cout << str[i];
    std::cout << ".";
  }
  else {
    i = -1;
    while (++i < 10 - len)
      std::cout << " ";
    i = -1;
    while (str[++i])
      std::cout << str[i];
  }
  std::cout << "|";
}

int main()
{
	std::string input;
	PhoneBook   book;

  book.contact_count = 0;
	while (1)
	{
		getline(std::cin, input);
		if (input == "ADD")
			book.add();
    else if (input == "SEARCH")
			book.search();
    else if (input == "EXIT")
			break ;
    std::cout << std::endl;
	}
	return (0);
}

