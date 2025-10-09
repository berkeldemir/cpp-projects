/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex03/Weapon.hpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-09-21 13:05
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-09-21 13:05
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	private:
		std::string	type;
	public:
		Weapon(std::string _type);
		const std::string&	getType();
		void				setType(std::string _type);
};

#endif
