#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "./ClapTrap.hpp"

#define FRAG "\033[0;35m[ FRAG  ] "

class	FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string _name);
		FragTrap(const FragTrap& ref);
		FragTrap&	operator=(const FragTrap& ref);
		~FragTrap();
		void	highFivesGuys(void);
};

#endif