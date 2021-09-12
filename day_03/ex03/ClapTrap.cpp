#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	_name = "name";
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangesAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "ClapTrap constructor is called\n";
}

ClapTrap::ClapTrap(std::string const &name)
{
	_name = name;
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_meleeAttackDamage = 30;
	_rangesAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "ClapTrap constructor is called\n";
}

ClapTrap::ClapTrap(ClapTrap const &robot)
{
	*this = robot;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &other)
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

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor is called\n";
}

std::string const &ClapTrap::getName() const
{
	return (_name);
}

void ClapTrap::rangedAttack(std::string const &target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target 
	<< " causing " << _rangesAttackDamage << " points of damage!\n";
}

void ClapTrap::meleeAttack(std::string const &target)
{
	std::cout << "ClapTrap " << _name << " attacks " << target 
	<< " causing " << _meleeAttackDamage << " points of damage!\n";
}
	
void ClapTrap::takeDamage(unsigned int amount)
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
	std::cout << "ClapTrap " << _name << " got " << amount << " points of damage!\n"
	<< "Now he has " << _hitPoints << " hit points\n";
}

void ClapTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	std::cout << "ClapTrap " << _name << " got " << amount << " hit points!\n"
	<< "Now he has " << _hitPoints << " hit points\n";
}
