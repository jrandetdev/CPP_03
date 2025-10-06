#include "ClapTrap.hpp"

// CONSTRUCTORS 

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDammage(0)
{
	std::cout << BLUE << "ClapTrap::Default constructor called for a ClapTrap with no name."
			<< RESET << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDammage(0){
	std::cout << BLUE << "ClapTrap::constructor called with name." << name << RESET << '\n';
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDammage = other.attackDammage;
	std::cout << BLUE << "ClapTrap::Copy constructor called for ClapTrap " << this->name
			<<  "." << RESET << std::endl;
}

// ASSIGNMENT OPERATOR

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDammage = other.attackDammage;
	std::cout << BLUE << "ClapTrap::Copy assignment constructor called for ClapTrap "
			<< this->name <<  "." << RESET <<  std::endl;
	return (*this);
}

// DESTRUCTOR

ClapTrap::~ClapTrap()
{
	std::cout << BLUE << "ClapTrap::Default destructor called for ClapTrap " << this->name <<  "."
			<< RESET << std::endl;
}

// MEMBER FUNCTIONS

void	ClapTrap::attack(const std::string& target) {
	if (!this->hasEnoughPoints())
	{
		std::cout << MAG << "(Member Attack inherited from ClapTrap):" << '\n';
		std::cout <<  "Attack failed..." << std::endl;
		return;
	}
	std::cout << MAG << "(Member Attack inherited from ClapTrap class):" << '\n';
	std::cout << BLUE << "ClapTrap::" << this->name << " attacks " << target << " causing "
			<< this->hitPoints << " points of dammage >:) ." << RESET << std::endl;
	this->energyPoints -= 1;
}

void ClapTrap::takeDammage(unsigned int amount) {
	if (this->hitPoints >= amount)
		this->hitPoints -= amount;
	else
		this->hitPoints = 0;		
	std::cout << BLUE << "ClapTrap::" << this->name << " took " << amount << " hitpoints"
			<< " in an attack :( ." << std::endl;
	std::cout << "his hitpoints are " << this->hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	std::cout << BLUE << "ClapTrap::" << this->name << " regained " << amount << " hit points"
			<< RESET << std::endl;
	this->energyPoints -= 1;
}

bool ClapTrap::hasEnoughPoints() {
	if (this->hitPoints == 0)
	{
		std::cout << BLUE << "ClapTrap::" << this->name << " has no more hitpoints!"
				<< RESET << '\n';
		return (false);
	}
	if (this->energyPoints == 0)
	{
		std::cout << BLUE << "ClapTrap::" << this->name << " has no more energy points!"
				<< RESET << '\n';
		return (false);
	}
	std::cout << MAG << "(Member hasPoints inherited from ClapTrap class):\n" << BLUE <<
			"ClapTrap::" << this->name  << " has enough hitpoints: " << this->hitPoints 
			<< "  or has enough energypoints: " << this->energyPoints << RESET << '\n';
	return (true);
}

// GETTERS AND SETTERS 

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
