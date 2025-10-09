#include "DiamondTrap.hpp"

int main()
{
	DiamondTrap diamond("jojo");
	diamond.whoAmI();
	std::cout << "DiamondTrap:: " << diamond.getName() << " has " << diamond.getHitPoints() << 
			" hitpoints from FragTrap " << diamond.getEnergyPoints() << " from ScavTrap " 
			<< " and " << diamond.getAttackDammage( ) << " from FragTrap." << '\n';

	std::cout << '\n';

	std::cout << "DiamondTrap:: additionaly, diamond attacks using ScavTrap antique techniques..." << '\n';
	diamond.attack("test Target");

	return 0;
}
