#include "./ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->guardGateSwitch = false;
	this->hitPts = 100;
	this->energyPts = 50;
	this->attackDmg = 20;
	std::cout << SCAV << "Default constructor called.\tName:\t" << this->name << std::endl; 
}

ScavTrap::ScavTrap(std::string _name) : ClapTrap(_name)
{
	this->guardGateSwitch = false;
	this->hitPts = 100;
	this->energyPts = 50;
	this->attackDmg = 20;
	std::cout << SCAV << "Named constructor called.\tName:\t" << this->name << std::endl; 
}

ScavTrap::ScavTrap(const ScavTrap& ref) : ClapTrap(ref)
{
	std::cout << SCAV << "Copy constructor called.\tName:\t" << ref.name << std::endl; 
	if (this == &ref)
		return ;
	this->name = ref.name;
	this->hitPts = ref.hitPts;
	this->energyPts = ref.energyPts;
	this->attackDmg = ref.attackDmg;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& ref)
{
	std::cout << SCAV << "Copy(=) constructor called.\tName:\t" << this->name << "\tbecomes\t" << ref.name << std::endl; 
	if (this == &ref)
		return (*this);
	this->name = ref.name;
	this->hitPts = ref.hitPts;
	this->energyPts = ref.energyPts;
	this->attackDmg = ref.attackDmg;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << SCAV << "Destructor called.\t\tName:\t" << this->name << std::endl; 
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->energyPts <= 0)
		std::cout << INFO << SCAV << this->name << "\thas no enough energy point, it cannot attack!";
	else if (this->hitPts <= 0)
		std::cout << INFO << SCAV << this->name << "\tis dead, how could it ever attack?";
	else
	{
		this->energyPts--;
		std::cout << INFO << SCAV << this->name << "\tattacks\t" << target << ".\t" << this->energyPts << "\tenergy left.";
	}
	std::cout << std::endl;}

void	ScavTrap::guardGate()
{
	this->guardGateSwitch = true;
	this->hitPts += 100;
	std::cout << INFO << SCAV << this->name << "\tis enabled Guard Gate!\t" << this->hitPts << " hit points left.";
}
