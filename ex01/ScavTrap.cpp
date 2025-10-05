#include "ScavTrap.hpp"

// inititialisation en liste, d'abbord claptrap pour avoir la base et ensutie les 
ScavTrap::ScavTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDammage = 20;
	std::cout << "ScavTrap::Default constructor called for ScavTrap " << this->name <<  "." <<  std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDammage = 20;
	std::cout << "ScavTrap::Overloaded constructor called with the argument " << name << '\n';
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(name)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDammage = other.attackDammage;
	std::cout << "Copy constructor called for ScavTrap " << this->name <<  "." <<  std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDammage = other.attackDammage;
		std::cout << "Copy assignment constructor called for ScavTrap " << this->name <<  "." <<  std::endl;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap::Default destructor called for ScavTrap " << this->name <<  "." <<  std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrapp is now in gatekeeer mode!" << '\n';
}

void	ScavTrap::attack(const std::string& target) {
	if (!this->has_points())
	{
		std::cout << "Attack failed..." << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->name << " attacks " << target << " causing "
			<< this->hitPoints << " points of dammage >:) ." << std::endl;
	this->energyPoints -= 1;
}
