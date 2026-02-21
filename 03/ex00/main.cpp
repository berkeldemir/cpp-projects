#include "./ClapTrap.hpp"

int main(void)
{
	ClapTrap	tom("Tom");
	ClapTrap	jerry("Jerry");

	tom.attack( jerry.getName() );
	jerry.takeDamage( tom.getAttackDmg() + 1);

	jerry.attack( tom.getName() );
	tom.takeDamage( (jerry.getAttackDmg() + 1) * 3);

	tom.beRepaired(5);
	tom.attack ( jerry.getName() );
	jerry.takeDamage ( (tom.getAttackDmg() + 1) * 2);
	jerry.beRepaired(7);

	ClapTrap	mom("Mammy Two Shoes");

	mom.attack( jerry.getName() );
	jerry.takeDamage ( 13 );
	mom.attack ( tom.getName() );
	tom.takeDamage ( 13 );
}