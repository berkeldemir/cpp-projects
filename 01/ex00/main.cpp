/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex00/Main.cpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-09-13 15:03
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-09-13 15:03
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#include "./Zombie.hpp"

int main(void)
{
	Zombie	z1("constructorZombie");
	z1.announce();
	// No "new" used.
	// No need any type of destruction for z1.

	randomChump("randomChump");
	// Same, no new used, no need destruction.

	Zombie *z2 = newZombie("newZombie");
	(*z2).announce();
	delete z2;
	// newZombie returns a pointer created with "new" keyword.
	// Need to destruct the z2 with "delete" keyword.
}
