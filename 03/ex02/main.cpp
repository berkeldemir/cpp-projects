#include "./FragTrap.hpp"
#include "./ScavTrap.hpp"

int main(void)
{
	ClapTrap	ct("CT");
	ScavTrap	st("Vault Hunter");
	FragTrap	ft("FT");

	ct.attack("ST");
	st.takeDamage(2);

	st.attack("CT");
	ct.takeDamage(2);

	ft.highFivesGuys();

	std::cout << INFO << st.getName() << " raises his hand to give a hig..." << std::endl;

	ct.takeDamage(10);
	st.takeDamage(10);

	std::cout << INFO << "Nice job, " << ft.getName() << "!" << std::endl;
}
