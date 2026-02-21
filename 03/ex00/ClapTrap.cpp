#include "./ClapTrap.hpp"

ClapTrap::ClapTrap() : name("CL4P-TP"), hitPts(10), energyPts(10), attackDmg(0)
{
	std::cout << DEBUG << "Default constructor called.\tName:\t" << this->name << std::endl; 
}

ClapTrap::ClapTrap(std::string _name) : hitPts(10), energyPts(10), attackDmg(0)
{
	this->name = _name;
	std::cout << DEBUG << "Named constructor called.\tName:\t" << this->name << std::endl; 
}

ClapTrap::ClapTrap(const ClapTrap& ref)
{
	std::cout << DEBUG << "Copy constructor called.\tName:\t" << ref.name << std::endl; 
	if (this == &ref)
		return ;
	this->name = ref.name;
	this->hitPts = ref.hitPts;
	this->energyPts = ref.energyPts;
	this->attackDmg = ref.attackDmg;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& ref)
{
	std::cout << DEBUG << "Copy(=) constructor called.\tName:\t" << this->name << "\tbecomes\t" << ref.name << std::endl; 
	if (this == &ref)
		return (*this);
	this->name = ref.name;
	this->hitPts = ref.hitPts;
	this->energyPts = ref.energyPts;
	this->attackDmg = ref.attackDmg;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << DEBUG << "Destructor called.\t\tName:\t" << this->name << std::endl; 
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->energyPts <= 0)
		std::cout << INFO << this->name << "\thas no enough energy point, it cannot attack!";
	else if (this->hitPts <= 0)
		std::cout << INFO << this->name << "\tis dead, how could it ever attack?";
	else
	{
		this->energyPts--;
		std::cout << INFO << this->name << "\tattacks\t" << target << ".\t" << this->energyPts << "\tenergy left.";
	}
	std::cout << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->energyPts <= 0)
		std::cout << INFO << this->name << "\tis already dead, leave it alone.";
	else if (this->hitPts <= amount)
	{
		this->energyPts = 0;	
		std::cout << INFO << this->name << "\tcouldn't make it... R.I.P :(";
	}
	else
	{
		this->hitPts -= amount;
		std::cout << INFO << this->name << "\ttook\t" << amount << "\tpts of damage!\t" << this->hitPts << " left.";
	}
	std::cout << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPts <= 0)
		std::cout << INFO << this->name << "\tis out of energy to repair itself.";
	else if (this->hitPts <= 0)
		std::cout << INFO << this->name << "\tis a dead man, it can't be repaired...";
	else
	{
		this->energyPts--;
		this->hitPts += amount;
		std::cout << INFO << this->name << "\trepaired\t" << amount << "\tof hit pts!\t" << this->hitPts << " left.";
	}
	std::cout << std::endl;
}

std::string&	ClapTrap::getName(void)
{
	return (this->name);
}
unsigned int	ClapTrap::getHitPts(void)
{
	return (this->hitPts);
}
unsigned int	ClapTrap::getAttackDmg(void)
{
	return (this->attackDmg);
}
