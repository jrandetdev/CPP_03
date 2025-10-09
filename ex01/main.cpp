#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	{
		std::cout << "Original object: " << std::endl;
		ScavTrap Alice("Alice");
		ScavTrap Paul("Paul");

		Alice.printTrapClassMetrics();
		Paul.printTrapClassMetrics();

		std::cout << '\n';

		Alice.setAttackDammage(10);
		Alice.printTrapClassMetrics();
		Alice.attack("Paul");
		Paul.takeDammage(Alice.getAttackDammage());
		Alice.printTrapClassMetrics();
		Paul.printTrapClassMetrics();

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
