#include "ScavTrap.hpp"

std::string ScavTrap::_challenges[5] = {"hitting a pinata", "dancing like Michael Jackson", 
"making a sad flaptrap laught", "passing all the projects before deadline", "living without problems"}; 

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
	std::cout << "ScavTrap constructor is called\n";
}

ScavTrap::ScavTrap(ScavTrap const &robot)
{
	*this = robot;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &other)
{
	if (this == &other)
		return (*this);
	_name = other._name;
	_hitPoints = other._hitPoints;
	_maxHitPoints = other._maxHitPoints;
	_energyPoints = other._energyPoints;
	_maxEnergyPoints = other._maxHitPoints;
	_level = other._level;
	_meleeAttackDamage = other._meleeAttackDamage;
	_rangesAttackDamage = other._rangesAttackDamage;
	_armorDamageReduction = other._armorDamageReduction;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor is called\n";
}

void ScavTrap::rangedAttack(std::string const &target)
{
	std::cout << "ScavTrap " << _name << " attacks " << target 
	<< " causing " << _rangesAttackDamage << " points of damage!\n";
}

void ScavTrap::meleeAttack(std::string const &target)
{
	std::cout << "ScavTrap " << _name << " attacks " << target 
	<< " causing " << _meleeAttackDamage << " points of damage!\n";
}
	
void ScavTrap::takeDamage(unsigned int amount)
{
	unsigned int damage;

	if (amount > _armorDamageReduction)
		damage = amount - _armorDamageReduction;
	else
		damage = amount;
	if (damage > _hitPoints)
		_hitPoints = 0;
	else
		_hitPoints -=damage;
	std::cout << _name << " got " << amount << " points of damage!\n"
	<< "Now she has " << _hitPoints << " hit points\n";
}

void ScavTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	std::cout << "ScavTrap " << _name << " got " << amount << " hit points!\n"
	<< "Now she has " << _hitPoints << " hit points\n";
}

void ScavTrap::challengeNewcomer()
{
	std::cout << "ScavTrap " << _name << " takes on challenge " << _challenges[rand() % 5] << "\n";
}

