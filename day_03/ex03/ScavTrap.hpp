#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	static std::string challenges[5];
	
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &robot);
	virtual ~ScavTrap();
	ScavTrap& operator=(ScavTrap const &);

	virtual void rangedAttack(std::string const &target);
	virtual void meleeAttack(std::string const &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	void challengeNewcomer();
};

#endif
