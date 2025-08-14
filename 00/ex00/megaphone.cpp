/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex00/megaphone.cpp
 *    ______/\\\/\\\______________/\\\/___   Created at: 2025-08-14 16:05
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-08-14 17:44
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#include <iostream>

void	loud(char const* str)
{
	char    c;

	while (*str)
	{
		c = *str;
		if (c <= 'z' && c >= 'a')
			c = c - 'a' + 'A';
		std::cout << c;
		str++;
	}
}

int	main(int const ac, char const*const* av)
{
	int i;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << "\n";
		return 0;
	}
	i = 0;
	while (++i < ac)
		loud(av[i]);
	std::cout << '\n';
	return (0);
}
