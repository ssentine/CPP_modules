#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include <iostream>
# include <time.h>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : public ClapTrap
{
public:
	static std::string _shoebox[5];

	NinjaTrap(std::string const &name);
	NinjaTrap(NinjaTrap const &robot);
	virtual ~NinjaTrap();
	NinjaTrap& operator=(NinjaTrap const &);

	virtual void rangedAttack(std::string const &target);
	virtual void meleeAttack(std::string const &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	void ninjaShoebox(FragTrap const &target);
	void ninjaShoebox(ScavTrap const &target);
	void ninjaShoebox(NinjaTrap const &target);
};

#endif
