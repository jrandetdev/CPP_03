#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDammage = 30;
	std::cout << "FragTrap:: Derived class default constructor called." << '\n';
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDammage = 30;
	std::cout << "FragTrap:: Derived class constructor called for object " << name << '\n';
}


FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		ClapTrap::operator=(other);
		std::cout << "FragTrap:: Derived class copy assignment operator called for" << other.name << '\n';
	}
	return (*this);
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap:: Derived class copy constructor called for" << other.name << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap:: Derived class default destructor calle d for " << this->name << '\n';
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "ScavTrap::" << this->name << " shouts High Five Guys! " << RESET << std::endl;
}
