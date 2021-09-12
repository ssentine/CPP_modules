#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap
{
private:
	std::string		_name;
	unsigned int	_hitPoints;
	unsigned int	_maxHitPoints;
	unsigned int	_energyPoints;
	unsigned int	_maxEnergyPoints;
	unsigned int	_level;
	unsigned int	_meleeAttackDamage;
	unsigned int	_rangesAttackDamage;
	unsigned int	_armorDamageReduction;
	static	std::string _challenges[5];

public:
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &robot);
	~ScavTrap();
	ScavTrap& operator=(ScavTrap const &);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer();
};

#endif
