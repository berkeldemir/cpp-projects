/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex01/PhoneBook.cpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-08-14 16:05
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-08-17 13:05
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__
 * ===============================
 */

#include "./PhoneBook.hpp"

static void	get_value(std::string prompt, std::string *ptr)
{
	std::cout << prompt << ":\t";
	getline(std::cin, *ptr);
}

static int	next_to_update()
{
	static unsigned int i = -1;

	i++;
	if (i == 8)
		i = 0;
	return (i);
}

static void	partly_print(std::string str)
{
	int	len;
	int	i;

	len = 0;
	while (str[len])
		len++;
	i = -1;
	if (len > 10)
	{
		while (++i < 9)
		std::cout << str[i];
		std::cout << ".";
	}
	else
	{
		while (++i < 10 - len)
		std::cout << " ";
		i = -1;
		while (str[++i])
		std::cout << str[i];
	}
	std::cout << "|";
}

PhoneBook::PhoneBook()
{
	this->contact_count = 0;
}

void	PhoneBook::add()
{
	int			i;
	std::string	buffer;

	i = next_to_update();
	get_value("First Name", &buffer);
	contact_list[i].set_name(buffer);
	get_value("Last Name", &buffer);
	contact_list[i].set_surname(buffer);
	get_value("Nickname", &buffer);
	contact_list[i].set_nickname(buffer);
	get_value("Phone Number", &buffer);
	contact_list[i].set_phone_number(buffer);
	get_value("Darkest Secret", &buffer);
	contact_list[i].set_darkest_secret(buffer);
	if (contact_count < 8)
		contact_count++;
}

void	PhoneBook::search()
{
	int i;
	int number;

	i = -1;
	number = -1;
	if (contact_count == 0)
	{
		std::cout << "No contact found yet." << std::endl;
		std::cout << "To add new use: \'ADD\'" << std::endl;
		return ;
	}
	std::cout << "+-+----------+----------+----------+\n";
	while (++i < contact_count)
	{
		std::cout << "|" << i << "|";
		partly_print(contact_list[i].get_name());
		partly_print(contact_list[i].get_surname());
		partly_print(contact_list[i].get_nickname());
		std::cout << "\n";
	}
	std::cout << "+-+----------+----------+----------+\n";
	std::cout << "Please enter a number between 0-" << contact_count - 1 << ": ";
	while (!(std::cin >> number) || number < 0 || number >= contact_count)
	{
		std::cout << "Please enter a number between 0-" << contact_count - 1 << ": ";
		std::cin.clear(); // Removes error flag from std::cin, and makes it usable again.
		std::cin.ignore(40, '\n'); // clear() makde std::cin usable, but the characters still there, this line is there to flush them out.
	}
	std::cout << "First Name:\t" << contact_list[number].get_name() << std::endl;
	std::cout << "Last Name:\t" << contact_list[number].get_surname() << std::endl;
	std::cout << "Nickname:\t" << contact_list[number].get_nickname() << std::endl;
	std::cout << "Phone Number:\t" << contact_list[number].get_phone_number() << std::endl;
	std::cout << "Darkest Secret:\t" << contact_list[number].get_darkest_secret() << std::endl;
	return ;
}
