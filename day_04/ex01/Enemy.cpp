# include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type)
	: _hitPoints(hp), _maxHitPoints(hp), _type(type) {}

Enemy::Enemy(Enemy const & theEnemy)
{
	*this = theEnemy;
}

Enemy & Enemy::operator = (Enemy const & other)
{
	if (this != & other)
	{
		_hitPoints = other._hitPoints;
		_maxHitPoints = other._maxHitPoints;
		_type = other._type;
	}
	return (*this);
}

std::string	Enemy::getType() const
{
	return (_type);
}

int	Enemy::getHP() const
{
	return (_hitPoints);
}

int	Enemy::getMaxHP() const
{
	return (_maxHitPoints);
}

void Enemy::takeDamage(int amount)
{
	if (amount < 0 || _hitPoints == 0)
		return ;
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
}

std::ostream & operator << (std::ostream & out, const Enemy & in)
{
	out << "<" << in.getType() << "> Enemy : " << in.getHP() << "/" << in.getMaxHP() << std::endl;
	return (out);
}
