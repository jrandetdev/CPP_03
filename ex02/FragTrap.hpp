#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& other);
		FragTrap& operator=(const FragTrap& other);
		virtual ~FragTrap();
	
		void	highFiveGuys(void);
};
