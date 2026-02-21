#include "./ScavTrap.hpp"

int main(void)
{
	ScavTrap	tom("Tom");
	ScavTrap	jerry("Jerry");

	tom.attack( jerry.getName() );
	jerry.takeDamage(tom.getAttackDmg() + 1);

	jerry.attack( tom.getName() );
	tom.takeDamage( (jerry.getAttackDmg() + 1) * 3);

	tom.beRepaired(50);
	tom.attack ( jerry.getName() );
	jerry.takeDamage ( (tom.getAttackDmg() + 1) * 2);
	jerry.beRepaired(70);

	ClapTrap	mom("Mammy Two Shoes");

	mom.attack( jerry.getName() );
	jerry.takeDamage ( 90 );
	mom.attack ( tom.getName() );
	tom.takeDamage ( 90 );
}