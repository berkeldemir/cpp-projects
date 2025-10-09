/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex03/HumanB.hpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-09-21 13:18
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-09-21 13:18
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "./Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanB(std::string _name);
		void	setWeapon(Weapon &_weapon);
		void	attack(void);
};

#endif