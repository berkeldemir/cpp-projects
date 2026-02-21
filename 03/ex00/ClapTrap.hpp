#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

# define DEBUG "\033[0;32m[ DEBUG ] "
# define INFO "\033[0;36m[ INFO  ] "

class ClapTrap
{
	private:
		std::string		name;
		unsigned int	hitPts;
		unsigned int	energyPts;
		unsigned int	attackDmg;
	public:
		ClapTrap();
		ClapTrap(std::string _name);
		ClapTrap(const ClapTrap& ref);
		ClapTrap&	operator=(const ClapTrap& ref);
		~ClapTrap();
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string&	getName();
		unsigned int	getHitPts();
		unsigned int	getAttackDmg();
};

#endif