#include "ClapTrap.hpp"

/**
 * Test 1 expected result:
 * - Removing the 10 base points of ClapTrap::objects should result to 0 points.
 * - The object will not be able to attack after that.
 * - Once the object repairs itself (regains 10 points), it can attack again.
 * - Edge case: the hitpoints or energy points should never go below 0.
 * 
 * Test 2 expected results:
 * - Using an explicit getter and setter function, I remove the points entirely
 * from a ClapTrap object. This is a more explicit form of the test above but
 * in a controlled manner.
 */
int main()
{
	//test : multiple attacks with hit points not 
	//looping over if negative.
	{
		std::cout << "Object created: " << '\n';
		ClapTrap Alice;
		ClapTrap Bob(Alice);
	}
	std::cout << '\n';
	{
		std::cout << "Object created: " << '\n';
		ClapTrap Bob;
		ClapTrap Charlie = Bob;
	}
	std::cout << '\n';
	{
		std::cout << "Object created: " << '\n';
		ClapTrap Alice("Alice");
		ClapTrap Bob("Bob");
		ClapTrap Charlie("Charlie");
		Alice.setAttackDammage(10);
		Alice.attack("Bob");
		Bob.takeDammage(10);
		std::cout << "\nBob has " << Bob.getHitPoints() << " hitpoints\n" << '\n';
		Bob.attack("Charlie");
		Bob.beRepaired(10);
		std::cout << "\nBob has " << Bob.getHitPoints() << " hitpoints\n" << '\n';
		Bob.attack("Charlie");
		Charlie.takeDammage(10);
	}
	return 0;
}
