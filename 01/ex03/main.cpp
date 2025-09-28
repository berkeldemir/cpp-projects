/*
 *  ____________/\\_______/\\\\\\_____  ==============================
 *  __________/\\\_____/\\\///////\\\___
 *   ________/\\\/\\\____\///______\//\\\__ File: ex03/main.cpp
 *    ______/\\\/\\\______________/\\\/___   Created: 2025-09-21 13:04
 *     ____/\\\/__\/\\\___________/\\\//_____ Created by: Berk M. Eldemir
 *      __/\\\\\\\\\\\\\\\_____/\\\//________  Creator Github: /berkeldemir
 *       _\///////////\\\//____/\\\/___________ Last Mod: 2025-09-21 13:04
 *        ___________\/\\\_____/\\\\\\\\\\\\\\\_
 *         ___________\///_____\///////////////__  ===============================
 */

#include "./HumanA.hpp"
#include "./HumanB.hpp"

int main(void)
{
	/* --- GIVEN TEST ---
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}*/

	std::cout << "----- Welcome to the Ben 10 Omniverse -----" << std::endl;

	Weapon	omnitrix("Ben 10");
	Weapon	protoTool("Proto-Tool");
	Weapon	malwareWeapon("Energy Blast");
		
	HumanB	ben10("Ben Tennyson");
	HumanB	rook("Rook Blonko");
	HumanB	malware("Malware");

	rook.setWeapon(protoTool);
	malware.setWeapon(malwareWeapon);

	malware.attack();

	ben10.attack();
	ben10.setWeapon(omnitrix);
	
	protoTool.setType("Proto-Tool as an energy shield");
	rook.attack();
	
	malwareWeapon.setType("Energy Absorber");
	malware.attack();

	protoTool.setType("Proto-Tool as a grappling hook");
	rook.attack();
	
	omnitrix.setType("Gravattack's gravity manipulation power");
	ben10.attack();

	protoTool.setType("Proto-Tool as a plasma cutter");
	rook.attack();

	std::cout << "Rook Blonko finished the fight thanks to " << protoTool.getType() << "!" << std::endl;

	std::cout << "Good guys always wins!" << std::endl;

	return 0;
}
