/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex03/Weapon.cpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-09-21 13:08
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-09-21 13:08
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#include "./Weapon.hpp"

Weapon::Weapon(std::string	_type)
{
	this->type = _type;
}

const std::string&	Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string _type)
{
	this->type = _type;
}
