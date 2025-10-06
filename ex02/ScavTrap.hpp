#include "ClapTrap.hpp"
#include <iostream>
#include <string>

// the colon (:) with an access specifier allows the derived class 
// to inherit the member and member functions of the base class
class ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		// take notes on destructor 
		virtual ~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();
};

