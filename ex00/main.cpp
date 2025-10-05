#include "ClapTrap.hpp"

int main()
{
	//test : multiple attacks with hit points not 
	//looping over if negative.
	{
		ClapTrap Alice("alice");
		ClapTrap Charlie("charlie");
		ClapTrap Bob("Bob");

		Bob.attack("Charlie");
		Charlie.takeDammage(10);

		Bob.attack("Charlie");
		Charlie.takeDammage(10);

		Bob.attack("Charlie");
		Charlie.has_points();

		Charlie.beRepaired(10);
		Charlie.has_points();
	}
	{
		//test for energy points
		ClapTrap Alice("alice");
		ClapTrap Charlie("charlie");
		ClapTrap Bob("Bob");

		for (int i = 0; i <= 10; i++)
		{
			Alice.attack("Bob");
			Bob.takeDammage(10);
			Bob.has_points();
			std::cout << '\n';
		}

		Bob.beRepaired(10);
	}
	return 0;
}
