#ifndef ENEMY_HPP
# define ENEMY_HPP
# include <iostream>

class Enemy
{
protected:
	int			_hitPoints;
	int			_maxHitPoints;
	std::string	_type;

public:
	Enemy() {}
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & theEnemy);
	virtual ~Enemy() {}

	Enemy & operator = (Enemy const & other);

	std::string 	getType() const;
	int				getHP() const;
	int				getMaxHP() const;

	virtual void takeDamage(int amount);
};

std::ostream & operator << (std::ostream & out, const Enemy & in);

#endif
