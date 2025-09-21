/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex03/HumanA.hpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-09-21 13:11
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-09-21 13:11
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "./Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon		&weapon;
	public:
		HumanA(std::string _name, Weapon &_weapon);
		void	attack(void);
};

#endif