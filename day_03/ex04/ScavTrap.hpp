#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	static std::string challenges[5];

	ScavTrap();	
	ScavTrap(std::string const &name);
	ScavTrap(ScavTrap const &robot);
	virtual ~ScavTrap();
	ScavTrap& operator=(ScavTrap const &);

	void challengeNewcomer();
};

#endif
