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
		std::cout << "test for copy assignment: " << '\n';
		ScavTrap Copy;
		Copy = Alice;
		Copy.guardGate();
	}
	return 0;
}
