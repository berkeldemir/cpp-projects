#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "./ClapTrap.hpp"

#define SCAV "\033[0;33m[ SCAV  ] "

class	ScavTrap : public ClapTrap
{
	private:
		bool	guardGateSwitch;
	public:
		ScavTrap();
		ScavTrap(std::string _name);
		ScavTrap(const ScavTrap& ref);
		ScavTrap&	operator=(const ScavTrap& ref);
		~ScavTrap();
		void	attack(const std::string& target);
		void	guardGate();
};

#endif