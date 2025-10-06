#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	//test : multiple attacks with hit points not 
	//looping over if negative.
	{
		ScavTrap Alice("Alice");
		std::cout << '\n';
		Alice.attack("Paul");
		Alice.beRepaired(10);
		std::cout << '\n';
	}
	return 0;
}
