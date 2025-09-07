/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex00/megaphone.cpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-08-14 16:05
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-08-17 13:05
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#include <iostream>

void	scream(char const* str)
{
	for (; *str; str++)
		std::cout << (char)(std::toupper(*str));
}

int	main(int const ac, char const*const* av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (int i = 1; i < ac; i++)
			scream(av[i]);
	std::cout << std::endl;
	return (0);
}
