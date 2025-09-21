/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex03/HumanB.cpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-09-21 13:18
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-09-21 13:18
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#include "./HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	this->name = _name;
	this->weapon = NULL;
}

void    HumanB::setWeapon(Weapon &_weapon)
{
	this->weapon = &_weapon;
}

void	HumanB::attack(void)
{
	if (!this->weapon)
	{
		std::cout << this->name << " has no weapon, cannot attack.\n";
		return ;
	}
	std::cout << this->name << " attacks with their " \
	<< this->weapon->getType() << std::endl;
}
