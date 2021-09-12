#include "ScavTrap.hpp"

std::string ScavTrap::challenges[5] = {"hitting a pinata", "dancing like Michael Jackson", 
"making a sad flaptrap laught", "passing all the projects before deadline", "living without problems"};

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Constructor is called\n\n";
}

ScavTrap::ScavTrap(std::string const &name)
{
	_name = name;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_meleeAttackDamage = 20;
	_rangesAttackDamage = 15;
	_armorDamageReduction = 3;
	std::cout << "ScavTrap Constructor is called\n\n";
}

ScavTrap::ScavTrap(ScavTrap const &robot)
{
	*this = robot;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &other)
{
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor is called\n";
}

void ScavTrap::challengeNewcomer()
{
	std::cout << _name << " takes on challenge " << challenges[rand() % 5] << "\n";
}
