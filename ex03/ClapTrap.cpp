#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : hitPoints(10), energyPoints(10), attackDammage(0)
{
	std::cout << "ClapTrap:: Base class default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : name(name), hitPoints(10), energyPoints(10), attackDammage(0)
{
	std::cout << "ClapTrap:: Base class constructor called with name " << name  << '\n';
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), 
		hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDammage(other.attackDammage)
{
	std::cout <<  "ClapTrap:: Base class copy constructor called." <<'\n';	
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other) 
	{
		this->name = (other.name);
		this->hitPoints = (other.hitPoints);
		this->energyPoints = (other.energyPoints);
		this->attackDammage = (other.attackDammage);
		std::cout << "ClapTrap:: Base class copy assignment constructor called." << '\n';
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap:: Base class default destructor called." << std::endl;
}

const std::string	ClapTrap::getName(void) const
{
	return this->name;
}

void	ClapTrap::setHitPoints(const int hitPoints)
{
	this->hitPoints = (hitPoints);
}

int	ClapTrap::getHitPoints(void) const
{
	return this->hitPoints;
}

void	ClapTrap::setEnergyPoints(const int energyPoints)
{
	this->energyPoints = energyPoints;
}

void	ClapTrap::setAttackDammage(int amount)
{
	std::cout << this->name << "gains " << amount << " attackDammage" << '\n';
	this->attackDammage += amount;
}

int	ClapTrap::getAttackDammage(void) const
{
	return this->attackDammage;
}

int	ClapTrap::getEnergyPoints(void) const
{
	return this->energyPoints;
}

void	ClapTrap::printTrapClassMetrics() const
{
	
	if (this->hitPoints <= 0 || this->energyPoints <= 0)
	{
		std::cout << RED << "\nCLASS " << this->name << ":" << '\n';
		std::cout << "HITPOINTS: " << "   " << this->hitPoints << '\n';
		std::cout << "ENPOINTS: " << "    " << this->energyPoints << '\n';
		std::cout << "ATTPOINTS: " << "   " << this->attackDammage << '\n';
		std::cout << RESET << '\n';
	}
	else
	{
		std::cout << GREEN << "\nCLASS " << this->name << ":" << '\n';
		std::cout << "HITPOINTS: " << "   " << this->hitPoints << '\n';
		std::cout << "ENPOINTS: " << "    " << this->energyPoints << '\n';
		std::cout << "ATTPOINTS: " << "   " << this->attackDammage << '\n';
		std::cout << RESET << '\n';
	}
}

void	ClapTrap::attack(const std::string& target)
{
	if (this->hasEnoughPoints() == false)
	{
		std::cout << "ClapTrap:: " << this->name << " has no more points and cannot attack..."
				<< std::endl;
		return;
	}
	std::cout << "ClapTrap:: " << this->name << " has enough HP or EP attacks " << target << " causing "
			<< this->attackDammage << " (his/her own attackDammage) points of dammage." << std::endl;

	this->energyPoints--;
}

bool ClapTrap::hasEnoughPoints() const
{
	return (hitPoints > 0 && energyPoints > 0);
}

void ClapTrap::takeDammage(unsigned int amount)
{
	this->hitPoints = std::max(this->hitPoints - static_cast<int>(amount), 0);
	std::cout << "ClapTrap:: " << this->name << " takes " << amount << " of dammage "
			<< " and now has " << this->hitPoints << " hitPoints." << '\n';
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->hitPoints += amount;
	
	std::cout << "ClapTrap:: " << this->name << " regained " << amount << " hit points"
			<< RESET << std::endl;
	
	this->energyPoints--;
}
