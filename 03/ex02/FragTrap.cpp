#include "./FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->hitPts = 100;
	this->energyPts = 100;
	this->attackDmg = 30;
	std::cout << FRAG << "Default constructor called.\tName:\t" << this->name << std::endl; 
}

FragTrap::FragTrap(std::string _name) : ClapTrap(_name)
{
	this->hitPts = 100;
	this->energyPts = 100;
	this->attackDmg = 30;
	std::cout << FRAG << "Named constructor called.\tName:\t" << this->name << std::endl; 
}

FragTrap::FragTrap(const FragTrap& ref) : ClapTrap(ref)
{
	std::cout << FRAG << "Copy constructor called.\tName:\t" << ref.name << std::endl; 
	if (this == &ref)
		return ;
	this->name = ref.name;
	this->hitPts = ref.hitPts;
	this->energyPts = ref.energyPts;
	this->attackDmg = ref.attackDmg;
}

FragTrap&	FragTrap::operator=(const FragTrap& ref)
{
	std::cout << FRAG << "Copy(=) constructor called.\tName:\t" << this->name << "\tbecomes\t" << ref.name << std::endl; 
	if (this == &ref)
		return (*this);
	this->name = ref.name;
	this->hitPts = ref.hitPts;
	this->energyPts = ref.energyPts;
	this->attackDmg = ref.attackDmg;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << FRAG << "Destructor called.\t\tName:\t" << this->name << std::endl; 
}

void	FragTrap::highFivesGuys(void)
{
    std::cout << FRAG << this->name << " raised their hand and asks for a high five.";
    std::cout << std::endl;
}
