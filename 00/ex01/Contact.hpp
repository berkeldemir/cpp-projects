/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex01/Contact.hpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-08-14 17:37
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-08-17 13:05
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>

class	Contact
{
	private:
		std::string name;
		std::string surname;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
	public:
		Contact();
		void	set_name(std::string input);
		void	set_surname(std::string input);
		void	set_nickname(std::string input);
		void	set_phone_number(std::string input);
		void	set_darkest_secret(std::string input);
		std::string	get_name();
		std::string	get_surname();
		std::string	get_nickname();
		std::string	get_phone_number();
		std::string	get_darkest_secret();
};

#endif

