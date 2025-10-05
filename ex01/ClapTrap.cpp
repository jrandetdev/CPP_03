#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDammage(0)
{
	std::cout << "Default constructor called for ClapTrap " << this->name <<  "." <<  std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDammage(0){
	std::cout << "Overloaded constructor called with the argument " << name << '\n';
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDammage = other.attackDammage;
	std::cout << "Copy constructor called for ClapTrap " << this->name <<  "." <<  std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDammage = other.attackDammage;
	std::cout << "Copy assignment constructor called for ClapTrap " << this->name <<  "." <<  std::endl;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called for ClapTrap " << this->name <<  "." <<  std::endl;
}

void	ClapTrap::attack(const std::string& target) {
	if (!this->has_points())
	{
		std::cout << "Attack failed..." << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << " causing "
			<< this->hitPoints << " points of dammage >:) ." << std::endl;
	this->energyPoints -= 1;
}

void ClapTrap::takeDammage(unsigned int amount) {
	if (this->hitPoints >= amount)
		this->hitPoints -= amount;
	else
		this->hitPoints = 0;		
	std::cout << "ClapTrap " << this->name << " took " << amount << " hitpoints"
			<< " in an attack :( ." << std::endl;
	std::cout << "his hitpoints are " << this->hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	this->hitPoints += amount;
	std::cout << "ClapTrap " << this->name << " regained " << amount << " hit points" << std::endl;
	this->energyPoints -= 1;
}

bool ClapTrap::has_points() {
	if (this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " has no more hitpoints!" << '\n';
		return (false);
	}
	if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " has no more energy points!" << '\n';
		return (false);
	}
	std::cout << "ClapTrap " << this->name  << " has enough hitpoints:" << this->hitPoints << "  or has enough energypoints:" << this->energyPoints << '\n';
	return (true);
}
