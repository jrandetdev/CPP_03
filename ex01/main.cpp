#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	{
		std::cout << "Original object: " << std::endl;
		ScavTrap Alice("Alice");
		ScavTrap Paul("Paul");

		std::cout << '\n';

		Alice.setAttackDammage(10);
		Alice.attack("Paul");
		Paul.takeDammage(10);
		Paul.attack("Alice");

		std::cout << '\n';

		ScavTrap Copy;
		Copy = Alice;
		std::cout << '\n';
	}
	std::cout << '\n';
	{
		ScavTrap Charlie;
		Charlie.guardGate();
	}
	return 0;
}
