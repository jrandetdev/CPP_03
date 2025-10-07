#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDammage = 20;
	std::cout << "ScavTrap:: Default constructor called." << '\n';
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDammage = 20;
	std::cout << "ScavTrap:: Derived class constructor called with name " << name << '\n';
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap:: Derived class copy constructor called for ScavTrap " << this->name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		std::cout << "ScavTrap:: Derived class copy assignment operaror called for " << other.name << '\n';
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap:: Derived class default destructor called for object " << this->name << std::endl;
}


void	ScavTrap::attack(const std::string& target)
{
	if (!this->hasEnoughPoints())
	{
		std::cout << "ScavTrap::object" << this->name << " has no more points" << std::endl;
		return;
	}
	std::cout << "ScavTrap:: " << this->name << " attacks " << target << " causing "
			<< this->attackDammage << " points of dammage." << std::endl;
	
	this->energyPoints--;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrapp has a special ability and is now in gatekeeer mode!" << '\n';
}
