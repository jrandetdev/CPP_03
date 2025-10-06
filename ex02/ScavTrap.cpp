#include "ScavTrap.hpp"

// inititialisation en liste, d'abbord claptrap pour avoir la base et ensutie les 
ScavTrap::ScavTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDammage = 20;
	std::cout << GREEN << "ScavTrap::Default constructor called for ScavTrap " << this->name <<  "." << RESET <<  std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDammage = 20;
	std::cout << GREEN << "ScavTrap::Overloaded constructor called with the argument " << name << RESET << '\n';
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap()
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDammage = other.attackDammage;
	std::cout << MAG << "ScavTrap::Copy constructor called for ScavTrap " << this->name <<  "." << RESET << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDammage = other.attackDammage;
		std::cout << MAG << "ScavTrap::Copy assignment constructor called for ScavTrap " << this->name <<  "." <<  RESET << std::endl;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << GREEN << "ScavTrap::Default destructor called for ScavTrap " << this->name <<  "." << RESET << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << YELLOW << "ScavTrapp is now in gatekeeer mode!" << RESET << '\n';
}

void	ScavTrap::attack(const std::string& target) {
	if (!this->hasPoints())
	{
		std::cout << RED << "ScavTrap::Attack failed..." << RESET << std::endl;
		return;
	}
	std::cout << RED << "ScavTrap::" << this->name << " attacks " << target << " causing "
			<< this->hitPoints << " points of dammage >:) ." << RESET << std::endl;
	this->energyPoints -= 1;
}
