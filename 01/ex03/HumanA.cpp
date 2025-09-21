/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex03/HumanA.cpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-09-21 13:11
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-09-21 13:11
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#include "./HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon &_weapon) : weapon(_weapon)
{
	this->name = _name;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " \
	<< this->weapon.getType() << std::endl;
}
