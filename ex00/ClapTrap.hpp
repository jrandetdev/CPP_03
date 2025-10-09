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
	private:
		std::string name;
		int			hitPoints;
		int			energyPoints;
		int			attackDammage;
	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();

		void	attack(const std::string& target);	// loses one energy point
		void	takeDammage(unsigned int amount);	// loses <attackdammage points> hitpoints
		void	beRepaired(unsigned int amount);	// regains <amount> points
		bool	hasEnoughPoints() const;
		virtual void	printTrapClassMetrics() const;

		const std::string	getName(void) const;
		
		void setHitPoints(const int hitPoints);
		int getHitPoints(void) const;

		void setAttackDammage(int amount);
		int	getAttackDammage(void) const;

		void setEnergyPoints(const int energyPoints);
		int getEnergyPoints(void) const;
	};

#endif
