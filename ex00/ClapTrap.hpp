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

/**
 * Classes in c++ can be extended, creating new classes 
 * which retain characteristics of the base class. 
 * This process, known as inheritance, involves a base class 
 * (claptrap) and a derived class (flaptrap): the derived class
 * inherits the members of the base class, omn top of which it
 * can add its own members.
 * 
 * Classes that are derived from others inherit all the accessible 
 * members of the base  class. That means that if a base class includes a member 
 * A and we derive a class from it with another member called B
 * the derived class will contain both member a and member b 
 * 
 * 
 * the derived class is declared as such:
 * class derived_class: public baseclass {}
 * the access specifier public can me modified. It limits 
 * the most accessible level for the members inherited from the 
 * base class. The members with a more accessible level are inherited 
 * with this more restrictive type instead. memebrs <= restriction 
 * keep their level of restriction. if public, protected stays protected.
 * if it was public and protected is applied, public become protected
 * 
 * We use protected as it behaves differently to private in the case of inheritance. 
 * When a class inherits anothe one, the members of the derived classcan 
 * access the protected members of the baseclass, but not the private. 
 * 
 * These members will also be accessible from the derived classes instead
 * of just the base class. If they were public, they could be accessed from
 * anywhere.
 * 
 * Access	public	protected	private
 * members of the same class	yes	yes	yes
 * members of derived class	    yes	yes	no
 * not members	                yes	no	no //represnets main, another class, or from a func.

 */
class ClapTrap
{
	private:
		std::string 	name;
		unsigned int	hitPoints; //health of claptrap
		unsigned int	energyPoints;
		unsigned int	attackDammage;
		void			copyFrom(const ClapTrap& other);
	public:
		ClapTrap();
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();

		void	attack(const std::string& target);	// loses one energy point
		void	takeDammage(unsigned int amount);	// loses <attackdammage points> hitpoints
		void	beRepaired(unsigned int amount);	// regains <amount> points
		bool	hasEnoughPoints();


		const std::string	getName(void) const;
		void	setHitPoints(const unsigned int hitPoints);
		unsigned int getHitPoints(void) const;

		void	setEnergyPoints(const unsigned int energyPoints);
		unsigned int getEnergyPoints(void) const;

		
	};

#endif
