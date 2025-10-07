#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	{
		FragTrap Fraggy("Fraggy");
		FragTrap Scrap("Scrap");
		Fraggy.setAttackDammage(10);
		Fraggy.attack("Scrap");
		Scrap.takeDammage(10);
		std::cout << "Scrap has " << Scrap.getHitPoints() << " hitpoints "
				<< "and " << Scrap.getEnergyPoints() << " energy points" << '\n';
		std::cout << "Fragy has " << Fraggy.getHitPoints() << " hitpoints "
				<< " and " << Fraggy.getEnergyPoints() << " energy points" << '\n';
		Fraggy.highFiveGuys();
		Scrap.beRepaired(10);
		Scrap.attack("Fraggy");
	}
	std::cout << '\n';
	{
		FragTrap Alice("Alice");
		std::cout << "Alice has " << Alice.getHitPoints() << " hitpoints and " 
				<< Alice.getEnergyPoints() << " energypoints." << '\n';
	}
	return 0;
}
