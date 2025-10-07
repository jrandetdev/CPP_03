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
		Alice.takeDammage(10);
		Alice.beRepaired(10);
		std::cout << '\n';
		ScavTrap Copy = Alice;
		std::cout << "Copied Object: " << Copy.getName() << '\n';
		std::cout << '\n';
	}
	return 0;
}
