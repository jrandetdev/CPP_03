#include "ClapTrap.hpp"
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << GREEN << "ClapTrap now exists and FragTrap can inherit its behaviours." << RESET << '\n';
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDammage = 30;
	std::cout << GREEN << "FragTrap::Default constructor called for " << this->name << RESET << '\n';
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	std::cout << YELLOW << "\nClapTrap now exists and FragTrap can inherit its behaviours\n" << RESET << '\n';
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDammage = 30;
	std::cout << GREEN << "FragTrap::" << MAG << "(inherited from ClapTrap) " << GREEN
			<< "constructor called for object " << this->name << RESET << '\n';
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		this->attackDammage = other.attackDammage;
		std::cout << GREEN << "FragTrap::Copy assignment constructor called for " << this->name << RESET << '\n';
	}
	return (*this);
}

FragTrap::FragTrap(const FragTrap& other)
{
	if (this != &other)
	{
		this->name = other.name;
		this->hitPoints = other.hitPoints;
		this->energyPoints = other.energyPoints;
		std::cout << GREEN << "FragTrap::Copy Constructor called for " << this->name << RESET << '\n';
	}
}

FragTrap::~FragTrap()
{
	std::cout << GREEN << "FragTrap::Default destructor called for " << this->name << RESET << '\n';
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << GREEN << "ScavTrap::" << this->name << " shouts High Five Guys! " << RESET << std::endl;
}
