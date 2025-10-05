#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	//test : multiple attacks with hit points not 
	//looping over if negative.
	{
		
		//ClapTrap Alice("alice");
		// ClapTrap Charlie("charlie");
		ScavTrap Scavy("test");
		Scavy.beRepaired(10);
		//Alice.attack("test");
	}
	return 0;
}
