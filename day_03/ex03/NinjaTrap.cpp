#include "NinjaTrap.hpp"

std::string NinjaTrap::_shoebox[5] = {"an army shoe", "the lapot'", "the valenok", "a high heel shoe", "his own shoe"};

NinjaTrap::NinjaTrap(std::string const &name)
	: ClapTrap(name)
{
	_name = name;
	_hitPoints = 60;
	_maxHitPoints = 60;
	_energyPoints = 120;
	_maxEnergyPoints = 120;
	_level = 1;
	_meleeAttackDamage = 60;
	_rangesAttackDamage = 5;
	_armorDamageReduction = 0;
	std::cout << "NinjaTrap constructor is called\n\n";
}

NinjaTrap::NinjaTrap(NinjaTrap const &robot)
{
	*this = robot;
}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const &other)
{
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	return (*this);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap destructor is called\n";
}

void NinjaTrap::rangedAttack(std::string const &target)
{
	std::cout << "NinjaTrap " << _name << " attacks " << target 
	<< " causing " << _rangesAttackDamage << " points of damage!\n";
}

void NinjaTrap::meleeAttack(std::string const &target)
{
	std::cout << "NinjaTrap " << _name << " attacks " << target 
	<< " causing " << _meleeAttackDamage << " points of damage!\n";
}
	
void NinjaTrap::takeDamage(unsigned int amount)
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
	std::cout << "NinjaTrap " << _name << " got " << amount << " points of damage!\n"
	<< "Now he has " << _hitPoints << " hit points\n";
}

void NinjaTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	std::cout << "NinjaTrap " << _name << " got " << amount << " hit points!\n"
	<< "Now he has " << _hitPoints << " hit points\n";
}

void NinjaTrap::ninjaShoebox(FragTrap const &target)
{
	std::cout << "NinjaTrap " << _name << " kicked " << target.getName() << "'s ass with " << _shoebox[rand() % 5] << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const &target)
{
	std::cout << "NinjaTrap " << _name << " kicked " << target.getName() << "'s ass with " << _shoebox[rand() % 5] << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const &target)
{
	std::cout << "NinjaTrap " << _name << " kicked " << target.getName() << "'s ass with " << _shoebox[rand() % 5] << std::endl;
}
