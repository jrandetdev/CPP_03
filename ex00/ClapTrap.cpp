#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDammage(0)
{
	std::cout << "ClapTrap:: Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDammage(0)
{
	std::cout << "ClapTrap:: constructor called with name " << name  << '\n';
}

void	ClapTrap::copyFrom(const ClapTrap& other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDammage = other.attackDammage;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	copyFrom(other);
	std::cout <<  "ClapTrap:: object " << this->name << "was made through a copy constructor" << '\n';
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		copyFrom(other);
		std::cout << "ClapTrap:: object " << this->name <<  "was assigned its attributes from an existing object" << '\n';
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap:: Default destructor called for object " << this->name << RESET << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hasEnoughPoints() == false)
	{
		std::cout << "ClapTrap::object" << this->name << " has no more points" << std::endl;
		return;
	}

	std::cout << "ClapTrap:: " << this->name << " attacks " << target << " causing "
			<< this->attackDammage << " points of dammage." << std::endl;

	this->energyPoints--;
}

void ClapTrap::takeDammage(unsigned int amount)
{
	this->hitPoints = std::max(this->hitPoints - static_cast<int>(amount), 0);
}


bool ClapTrap::hasEnoughPoints()
{
	if (this->hitPoints == 0 || this->energyPoints == 0)
		return (false);
	return (true);
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	
	std::cout << "ClapTrap::" << this->name << " regained " << amount << " hit points"
			<< RESET << std::endl;
	
	this->energyPoints--;
}

const std::string	ClapTrap::getName(void) const
{
	return (this->name);
}

void	ClapTrap::setHitPoints(const unsigned int hitPoints)
{
	this->hitPoints = hitPoints;
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (this->hitPoints);
}

void	ClapTrap::setEnergyPoints(const unsigned int energyPoints)
{
	this->energyPoints = energyPoints;
}

unsigned int	ClapTrap::getEnergyPoints(void) const
{
	return (this->energyPoints);
}
