#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDammage(0)
{
	std::cout << "ClapTrap:: Base class default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDammage(0)
{
	std::cout << "ClapTrap:: Base class constructor called with name " << name  << '\n';
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDammage = other.attackDammage;
	std::cout <<  "ClapTrap:: Base class copy constructor called." <<'\n';	
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDammage = other.attackDammage;
		std::cout << "ClapTrap:: Base class copy constructor called." << '\n';
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap:: Base class default destructor called." << std::endl;
}

const std::string	ClapTrap::getName(void) const
{
	return (this->name);
}

void	ClapTrap::setHitPoints(const int hitPoints)
{
	this->hitPoints = hitPoints;
}

int	ClapTrap::getHitPoints(void) const
{
	return (this->hitPoints);
}

void	ClapTrap::setEnergyPoints(const int energyPoints)
{
	this->energyPoints = energyPoints;
}

void	ClapTrap::setAttackDammage(int amount)
{
	this->attackDammage = amount;
}

int	ClapTrap::getEnergyPoints(void) const
{
	return (this->energyPoints);
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hasEnoughPoints() == false)
	{
		std::cout << "ClapTrap::object has no more points" << std::endl;
		return;
	}
	if ()
	std::cout << "ClapTrap:: " << this->name << " attacks " << target << " causing "
			<< this->attackDammage << " points of dammage." << std::endl;

	this->energyPoints--;
}

bool ClapTrap::hasEnoughPoints()
{
	if (this->hitPoints == 0 || this->energyPoints == 0)
	return (false);
	return (true);
}

void ClapTrap::takeDammage(unsigned int amount)
{
	this->hitPoints = std::max(this->hitPoints - static_cast<int>(amount), 0);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	
	std::cout << "ClapTrap::" << this->name << " regained " << amount << " hit points"
			<< RESET << std::endl;
	
	this->energyPoints--;
}
