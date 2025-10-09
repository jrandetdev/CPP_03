#include "ClapTrap.hpp"
#include <iostream>
#include <string>

/**
 * class ScavTrap is a derived class of the Class ClapTrap.
 * 1. Its constructors (all types) must output a different message 
 * 2. The destructor is in virtual 
 * 3. ScavTrap modifies the behaviour of the member function @param attack 
 * inherited from the ClapTrap class. It is considered best practice
 * to set the member function attack as a virtual in the base class
 * (in this case ClapTrap).
 * 4. @param guardGate is a member function which belongs to ScavTrap. 
 */
class ScavTrap : virtual public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& other);
		ScavTrap& operator=(const ScavTrap& other);
		virtual ~ScavTrap();
		void	attack(const std::string& target);
		void	guardGate();
	protected:
		static const int SCAV_HITPOINTS = 100;
		static const int SCAV_ENERGYPOINTS = 50;
		static const int SCAV_ATTACKDAMMAGE = 20;
};

