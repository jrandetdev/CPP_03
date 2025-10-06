#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap Fraggy("Alice");
	Fraggy.attack("Bob");
	Fraggy.highFiveGuys();
	Fraggy.beRepaired(10);
	return 0;
}
