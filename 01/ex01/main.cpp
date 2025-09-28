/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex01/main.cpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-09-13 16:36
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-09-13 16:36
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#include "./Zombie.hpp"

int main(void)
{
	int			num_of_zombies = 12;
	std::string	name_of_zombies = "TEST";

	Zombie *zombies = zombieHorde(num_of_zombies, name_of_zombies);
	for (int i = 0; i < num_of_zombies; i++)
	{
		std::cout << i + 1 << ". zombie: ";
		zombies[i].announce();
	}
	// zombies[num_of_zombies].announce();
	// The line above will causes seg-fault,
	// bc in num_of_zombies index, there is no any zombie.
	delete[] zombies;
}
