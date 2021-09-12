#include "FragTrap.hpp"

std::string FragTrap::attacks[5] = { "new pisciners", "smart-ass cadetes trying to get <Hackerman achivement>", 
	"frenchmen", "sber pentesters", "russian hackers"};

FragTrap::FragTrap(std::string const &name)
	: ClapTrap(name)
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
	std::cout << "FragTrap constructor is called\n\n";
}

FragTrap::FragTrap(FragTrap const &robot)
{
	*this = robot;
}

FragTrap& FragTrap::operator=(FragTrap const &other)
{
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor is called\n";
}

void FragTrap::vaulthunter_dot_exe(std::string const &target)
{
	if (_energyPoints < 25)
	{
		std::cout << "Not enough energy points\n";
		return ;
	}
	_energyPoints -=25;
	std::cout  << "FragTrap "<< _name << " attacks " << target 
	<< " with " << attacks[rand() % 5] 
	<< "\nNow he has " << _energyPoints << " energy point\n";
}

void FragTrap::rangedAttack(std::string const &target)
{
	std::cout << "FragTrap "<< _name << " attacks " << target 
	<< " causing " << _rangesAttackDamage << " points of damage!\n";
}

void FragTrap::meleeAttack(std::string const &target)
{
	std::cout << "FragTrap "<< _name << " attacks " << target 
	<< " causing " << _meleeAttackDamage << " points of damage!\n";
}
	
void FragTrap::takeDamage(unsigned int amount)
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
	std::cout << "FragTrap " << _name << " got " << amount << " points of damage!\n"
	<< "Now he has " << _hitPoints << " hit points\n";
}

void FragTrap::beRepaired(unsigned int amount)
{
	_hitPoints += amount;
	if (_hitPoints > _maxHitPoints)
		_hitPoints = _maxHitPoints;
	std::cout << "FragTrap " << _name << " got " << amount << " hit points!\n"
	<< "Now he has " << _hitPoints << " hit points\n";
}
