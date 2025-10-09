#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ScavTrap(), FragTrap()
{
	this->hitPoints = FragTrap::FRAG_HITPOINTS;
	this->energyPoints = ScavTrap::SCAV_ENERGYPOINTS;
	this->attackDammage = FragTrap::FRAG_ATTACK_DAMMAGE;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
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
	std::cout << "\nDiamondTrap:: default destructor called" << '\n';
}

void	DiamondTrap::whoAmI()
{
	std::cout << YELLOW << "\nDiamondTrap:: They call me " << ClapTrap::name << " but I secretly prefer "
			<< this->name << "...\n" << RESET << std::endl;
}

void	DiamondTrap::printTrapClassMetrics() const
{
		if (this->hitPoints <= 0 || this->energyPoints <= 0)
	{
		std::cout << RED << "\nCLASS " << this->name << ":" << '\n';
		std::cout << "HITPOINTS: " << "   " << this->hitPoints << " inherited from FragTrap" << '\n';
		std::cout << "ENPOINTS: " << "    " << this->energyPoints << " inherited from ScavTrap" << '\n';
		std::cout << "ATTPOINTS: " << "   " << this->attackDammage << " inherited from FragTrap" << '\n';
		std::cout << RESET << '\n';
	}
	else
	{
		std::cout << GREEN << "\nCLASS " << this->name << ":" << '\n';
		std::cout << "HITPOINTS: " << "   " << this->hitPoints << " inherited from FragTrap" << '\n';
		std::cout << "ENPOINTS: " << "    " << this->energyPoints << " inherited from ScavTrap" << '\n';
		std::cout << "ATTPOINTS: " << "   " << this->attackDammage << " inherited from FragTrap" << '\n';
		std::cout << RESET << '\n';
	}
}
