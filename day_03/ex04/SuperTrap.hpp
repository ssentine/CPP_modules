#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
public:
	SuperTrap(std::string const &name);
	SuperTrap(SuperTrap const &robot);
	virtual ~SuperTrap();
	SuperTrap& operator=(SuperTrap const &);

	virtual void rangedAttack(std::string const &target);
	virtual void meleeAttack(std::string const &target);
	virtual void takeDamage(unsigned int amount);
	virtual void beRepaired(unsigned int amount);
	void show() const;
};

#endif
