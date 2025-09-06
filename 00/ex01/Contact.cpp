/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex01/Contact.cpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-09-06 20:42
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-09-06 20:42
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#include "./Contact.hpp"

Contact::Contact()
{
	this->name = "";
	this->surname = "";
	this->nickname = "";
	this->phone_number = "";
	this->darkest_secret = "";
}

void	Contact::set_name(std::string input)
{
	name = input;
}

void	Contact::set_surname(std::string input)
{
	surname = input;
}

void	Contact::set_nickname(std::string input)
{
	nickname = input;
}

void	Contact::set_phone_number(std::string input)
{
	phone_number = input;
}

void	Contact::set_darkest_secret(std::string input)
{
	darkest_secret = input;
}

std::string	Contact::get_name()
{
	return (name);
}

std::string	Contact::get_surname()
{
	return (surname);
}

std::string	Contact::get_nickname()
{
	return (nickname);
}

std::string	Contact::get_phone_number()
{
	return (phone_number);
}

std::string	Contact::get_darkest_secret()
{
	return (darkest_secret);
}