#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <time.h>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_maxHitPoints;
	unsigned int	_energyPoints;
	unsigned int	_maxEnergyPoints;
	unsigned int	_level;
	unsigned int	_meleeAttackDamage;
	unsigned int	_rangesAttackDamage;
	unsigned int	_armorDamageReduction;

public:
	ClapTrap();
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &robot);
	virtual ~ClapTrap();
	ClapTrap& operator=(ClapTrap const &other);

	virtual void rangedAttack(std::string const &target);
	virtual void meleeAttack(std::string const &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
};

#endif
