#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include <iostream>
# include "AWeapon.hpp"
# include "Enemy.hpp"

class Character
{
private:
	std::string _name;
	AWeapon	*	_weapon;
	int			_actionPoints;
	int			_maxActionPoints;

public:
	Character(std::string const & name);
	Character(Character const & character);
	~Character() {}

	Character & operator = (Character const & other);

	std::string 	getName() const;
	int				getActionPoints() const;
	int				getMAxActionPoints() const;
	AWeapon *		getWeapon() const;

	void recoverAP();
	void equip(AWeapon *weapon);
	void attack(Enemy *enemy);
};

std::ostream & operator << (std::ostream & out, const Character & in);

#endif
