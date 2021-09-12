#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <time.h>

class FragTrap
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
	static std::string _attacks[5];

public:

	FragTrap(std::string const &name);
	FragTrap(FragTrap const &robot);
	~FragTrap();
	FragTrap& operator=(FragTrap const &other);

	void rangedAttack(std::string const &target);
	void meleeAttack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const &target);
};

#endif
