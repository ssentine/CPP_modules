#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <time.h>
# include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
protected:
	static const unsigned int	_bhitPoints;
	static const unsigned int	_bmaxHitPoints;
	static const unsigned int	_benergyPoints;
	static const unsigned int	_bmaxEnergyPoints;
	static const unsigned int	_blevel;
	static const unsigned int	_bmeleeAttackDamage;
	static const unsigned int	_brangesAttackDamage;
	static const unsigned int	_barmorDamageReduction;

public:
	static std::string attacks[5];

	FragTrap();
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &robot);
	virtual ~FragTrap();
	FragTrap& operator=(FragTrap const &other);

	virtual void rangedAttack(std::string const &target);
	virtual void meleeAttack(std::string const &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const &target);
};

#endif
