#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
		std::cout << "Original object: " << std::endl;
		ScavTrap Alice("Alice");
		std::cout << '\n';
		Alice.attack("Paul");
		Alice.beRepaired(10);
		std::cout << '\n';
		ScavTrap Copy = Alice;
		std::cout << "Copied Object: " << Copy.getName() << '\n';
		std::cout << '\n';
	}
	return 0;
}
