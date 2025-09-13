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
	int			num_of_zombies = 5;
	std::string	name_of_zombies = "deneme";

	Zombie *zombies = zombieHorde(num_of_zombies, name_of_zombies);
	std::cout << num_of_zombies << " zombies created named " << name_of_zombies << std::endl;
	std::cout << "How many bytes for a zombie? :" << sizeof(Zombie) << std::endl;
	std::cout << "Total byte of zombies element: ?????????????????????????????????" << sizeof(&zombies[0]) << std::endl;

	int i = 0;
	for (; i < num_of_zombies; i++)
	{
		std::cout << i + 1 << ". zombie:" << std::endl;
		zombies[i].announce();
	}

}
