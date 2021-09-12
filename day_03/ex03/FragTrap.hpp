#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include <time.h>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
	static std::string attacks[5];

	FragTrap(std::string const &name);
	FragTrap(FragTrap const &robot);
	virtual ~FragTrap();
	FragTrap& operator=(FragTrap const &);

	virtual void rangedAttack(std::string const &target);
	virtual void meleeAttack(std::string const &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const &target);
};

#endif
