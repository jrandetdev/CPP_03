#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
		virtual ~FragTrap();
		void	highFiveGuys(void);
	protected:
		static const int FRAG_HITPOINTS = 100;
		static const int FRAG_ENERGYPOINTS = 100;
		static const int FRAG_ATTACK_DAMMAGE = 30;
	private:
		void	initPoints();
};
