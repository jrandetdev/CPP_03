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
		ClapTrap Alice("alice");
		ClapTrap Charlie("charlie");
		ClapTrap Bob("Bob");
		std::cout << '\n';

		Bob.attack("Charlie");
		Charlie.takeDammage(10);

		std::cout << '\n';
		Bob.attack("Charlie");
		Charlie.takeDammage(10);

		std::cout << '\n';
		Bob.attack("Charlie");
		Charlie.hasEnoughPoints();

		std::cout << '\n';
		Charlie.beRepaired(10);
		Charlie.hasEnoughPoints();
	}
	std::cout << '\n' << '\n';
	{
		ClapTrap Alice("alice");
		ClapTrap Bob("Bob");
		ClapTrap Charlie;

		//test for the copy assignemnt constructor 
		Charlie = Bob;
		std::cout << "Alice has " << Alice.getHitPoints() << " hitpoints" << '\n';
		Alice.setHitPoints(0);
		std::cout << "Alice now has " << Alice.getHitPoints() << " hitpoints" << '\n';
		Alice.attack("test_attack");
		Alice.beRepaired(10);
		Alice.attack("test_attack");
	}
	return 0;
}
