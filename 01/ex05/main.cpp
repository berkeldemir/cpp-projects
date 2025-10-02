/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex05/main.cpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-09-27 17:32
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-09-27 17:32
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#include "./Harl.hpp"

int main(int ac, char **av)
{
	Harl    harl;

	if (ac == 2)
		harl.complain(av[1]);
	else if (ac == 1)
	{
		std::cout << "\nDEBUG:\n";
		harl.complain("DEBUG");
		std::cout << "\nINFO:\n";
		harl.complain("INFO");
		std::cout << "\nWARNING:\n";
		harl.complain("WARNING");
		std::cout << "\nERROR:\n";
		harl.complain("ERROR");
	}
	return 0;
}
