#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	this->hitPoints = FragTrap::FRAG_HITPOINTS;
	this->energyPoints = ScavTrap::SCAV_ENERGYPOINTS;
	this->attackDammage = FragTrap::FRAG_ATTACK_DAMMAGE;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name")
{
	this->name = name;
	this->hitPoints = FragTrap::FRAG_HITPOINTS;
	this->energyPoints = ScavTrap::SCAV_ENERGYPOINTS;
	this->attackDammage = FragTrap::attackDammage;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other)
{
	std::cout << "DiamondTrap:: Derived class copy constructor called for " << this->name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		std::cout << "DiamondTrap:: Derived class assignment constructor called for " << this->name << std::endl;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap:: default destructor called" << '\n';
}

void	DiamondTrap::whoAmI()
{
	std::cout << "They call me " << ClapTrap::name << " but I prefer " << this->name << std::endl;
}
