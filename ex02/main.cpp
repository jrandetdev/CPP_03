#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	{
		FragTrap Fraggy("Fraggy");
		FragTrap Scrap("Scrap");
		Fraggy.printTrapClassMetrics();
		Scrap.printTrapClassMetrics();
		Fraggy.setAttackDammage(10);
		Fraggy.printTrapClassMetrics();
		Fraggy.attack("Scrap");
		Scrap.takeDammage(Fraggy.getAttackDammage());
		Fraggy.printTrapClassMetrics();
		Scrap.printTrapClassMetrics();
		Fraggy.highFiveGuys();
		Scrap.beRepaired(10);
		Scrap.printTrapClassMetrics();
	}
	std::cout << '\n';
	{
		FragTrap Alice("Alice");
		Alice.highFiveGuys();
	}
	return 0;
}
