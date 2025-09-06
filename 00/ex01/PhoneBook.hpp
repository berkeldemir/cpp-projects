/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex01/PhoneBook.hpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-08-14 16:05
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-08-17 13:05
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__
 * ===============================
 */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "./Contact.hpp"
# include <iostream>

class PhoneBook
{
	private:
		Contact	contact_list[8];
		int		contact_count;
	public:
		PhoneBook();
		void add();
		void search();
};

#endif
