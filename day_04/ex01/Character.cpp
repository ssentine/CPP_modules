# include "Character.hpp"

Character::Character(std::string const & name)
	 : _name(name), _weapon(NULL), _actionPoints(40), _maxActionPoints(40) {}

Character::Character(Character const & character)
{
	*this = character;
}

Character & Character::operator = (Character const & other)
{
	if (this != & other)
	{
		_name = other._name;
		_actionPoints = other._actionPoints;
		_maxActionPoints = other._maxActionPoints;
	}
	return (*this);
}

std::string	Character::getName() const
{
	return (_name);
}

int	Character::getActionPoints() const
{
	return (_actionPoints);
}

int	Character::getMAxActionPoints() const
{
	return (_maxActionPoints);
}

AWeapon *	Character::getWeapon() const
{
	return (_weapon);
}

void Character::recoverAP()
{
	if (_actionPoints + 10 > _maxActionPoints)
		_actionPoints = _maxActionPoints;
	else
		_actionPoints += 10;
}

void Character::equip(AWeapon *weapon)
{
	_weapon = weapon;
}

void Character::attack(Enemy *enemy)
{
	if (_weapon == NULL || _actionPoints < _weapon->getAPCost())
		return ;
	std::cout << _name << " attacks " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
	_weapon->attack();
	_actionPoints -= _weapon->getAPCost();
	enemy->takeDamage( _weapon->getDamage());

}

std::ostream & operator << (std::ostream & out, const Character & in)
{
	if (in.getWeapon() != NULL)
		out << in.getName() << " has " << in.getActionPoints() << " AP and wields a " << in.getWeapon()->getName() << std::endl;
	else
		out << in.getName() << " has " << in.getActionPoints() << " AP and is unarmed" << std::endl;
	return (out);
}
