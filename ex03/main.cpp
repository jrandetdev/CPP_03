#include "DiamondTrap.hpp"

int main()
{
	ClapTrap Alice("Alice");
	ScavTrap Scrap("Scrap");
	FragTrap Fraggy("Fraggy");
	DiamondTrap diamond("Diamond");
	Alice.printTrapClassMetrics();
	Scrap.printTrapClassMetrics();
	Fraggy.printTrapClassMetrics();
	diamond.printTrapClassMetrics();
	std::cout << '\n';
	diamond.whoAmI();
	std::cout << '\n';
	diamond.attack("test Target");

	return 0;
}
