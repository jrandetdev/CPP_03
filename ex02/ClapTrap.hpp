#ifndef TO_REPLACE_HPP
#define TO_REPLACE_HPP

#include <iostream>
#include <string>

#define RED     "\033[31m"      /* Red */
#define YELLOW  "\033[33m"      /* Yellow */
#define GREEN   "\033[32m"      /* Green */
#define BLUE    "\033[34m"      /* Blue */
#define RESET   "\033[0m"		/* Reset */
#define MAG		"\033[35m"

class ClapTrap
{
	protected:
		std::string 	name;
		unsigned int	hitPoints; //health of claptrap
		unsigned int	energyPoints;
		unsigned int	attackDammage;
	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDammage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		bool	hasPoints();


		const std::string	getName(void) const;
		// getters and setters useful for debugging process to check the points are correctly managed
		void	setHitPoints(const unsigned int hitPoints);
		unsigned int getHitPoints(void) const;

		void	setEnergyPoints(const unsigned int energyPoints);
		unsigned int getEnergyPoints(void) const;

		
	};

#endif
