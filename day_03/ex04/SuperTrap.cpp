#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string const &name)
	: ClapTrap(name), FragTrap(name), NinjaTrap(name)
{
	_hitPoints = FragTrap::_bhitPoints;
	_maxHitPoints = FragTrap::_bmaxHitPoints;
	_energyPoints = NinjaTrap::_nenergyPoints;
	_maxEnergyPoints = NinjaTrap::_nmaxEnergyPoints;
	_meleeAttackDamage = NinjaTrap::_nmeleeAttackDamage;
	_rangesAttackDamage = FragTrap::_brangesAttackDamage;
	_armorDamageReduction = FragTrap::_barmorDamageReduction;
	std::cout << "SuperTrap constructor is called\n\n";
}

SuperTrap::SuperTrap(SuperTrap const &robot)
{
	*this = robot;
}

SuperTrap& SuperTrap::operator=(SuperTrap const &other)
{
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	return (*this);
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap destructor is called\n";
}

void SuperTrap::show() const
{
	std::cout << "name: " << _name << std::endl
	<< "hitPoints: " << _hitPoints << std::endl
	<< "maxHitPoints: " << _maxHitPoints << std::endl
	<< "energyPoints: " << _energyPoints << std::endl
	<< "maxEnergyPoints: " << _maxEnergyPoints << std::endl
	<< "level: " << _level << std::endl
	<< "meleeAttackDamage: " << _meleeAttackDamage << std::endl
	<< "rangesAttackDamage: " << _rangesAttackDamage << std::endl
	<< "armorDamageReduction: " << _armorDamageReduction << std::endl
	 << std::endl;
}

void SuperTrap::rangedAttack(std::string const &target)
{
	return(FragTrap::rangedAttack(target));
}

void SuperTrap::meleeAttack(std::string const &target)
{
	return(NinjaTrap::rangedAttack(target));
}
	
void SuperTrap::takeDamage(unsigned int amount)
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
	std::cout << "SuperTrap " << _name << " got " << amount << " points of damage!\n"
	<< "Now he has " << _hitPoints << " hit points\n";
}

void SuperTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	std::cout << "SuperTrap " << _name << " got " << amount << " hit points!\n"
	<< "Now he has " << _hitPoints << " hit points\n";
}
