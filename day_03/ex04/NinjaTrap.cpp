#include "NinjaTrap.hpp"

std::string NinjaTrap::_shoebox[5] = {"an army shoe", "the lapot'", "the valenok", "a high heel shoe", "his own shoe"};

const unsigned int	NinjaTrap::_nhitPoints = 60;
const unsigned int	NinjaTrap::_nmaxHitPoints = 60;
const unsigned int	NinjaTrap::_nenergyPoints = 120;
const unsigned int	NinjaTrap::_nmaxEnergyPoints = 120;
const unsigned int	NinjaTrap::_nmeleeAttackDamage = 60;
const unsigned int	NinjaTrap::_nrangesAttackDamage = 5;
const unsigned int	NinjaTrap::_narmorDamageReduction = 0;

NinjaTrap::NinjaTrap()
{
	std::cout << "NinjaTrap constructor is called\n";
}

NinjaTrap::NinjaTrap(std::string const &name)
	: ClapTrap(name)
{
	_hitPoints = _nhitPoints;
	_maxHitPoints = _nmaxHitPoints;
	_energyPoints = _nenergyPoints;
	_maxEnergyPoints = _nmaxEnergyPoints;
	_meleeAttackDamage = _nmeleeAttackDamage;
	_rangesAttackDamage = _nrangesAttackDamage;
	_armorDamageReduction = _narmorDamageReduction;
	std::cout << "NinjaTrap constructor is called\n";
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
	std::cout << "NinjaTrap Destructor is called\n";
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
