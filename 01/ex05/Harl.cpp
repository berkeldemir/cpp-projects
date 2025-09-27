/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex05/Harl.cpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-09-27 17:32
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-09-27 17:32
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#include "./Harl.hpp"

Harl::Harl(void)
{
	return ;
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG] Reality stepped through the breakpoints I never set. Turns out, the bug was in my expectations." << std::endl;
	return ;
}

void	Harl::info(void)
{
	std::cout << "[INFO] You are now connected to everything - but you still searching for something." << std::endl;
	return ;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING] Proceeding may overwrite who you used to be." << std::endl;
	return ;
}

void	Harl::error(void)
{
	std::cout << "[ERROR] Memory overflow! Too many thoughts... There is no left enough (S)PeACE." << std::endl;
	return ;
}

void	Harl::complain(std::string str)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void	(Harl::*functions[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < sizeof(levels);i++)
	{
		if (levels[i] == str)
		{
			(this->*functions[i])();
			return ;
		}
	}
	std::cout << "";
	return ;
}