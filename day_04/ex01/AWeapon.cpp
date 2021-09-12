# include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage)
	: _name(name), _damage(damage), _apcost(apcost) {}

AWeapon::AWeapon(AWeapon const & weapon)
{
	*this = weapon;
}

AWeapon & AWeapon::operator = (AWeapon const & other)
{
	if (this != & other)
	{
		_name = other._name;
		_apcost = other._apcost;
		_damage = other._damage;
	}
	return (*this);
}

std::string AWeapon::getName() const
{
	return(_name);
}

int	AWeapon::getAPCost() const
{
	return(_apcost);
}

int	AWeapon::getDamage() const
{
	return(_damage);
}

std::ostream & operator << (std::ostream & out, const AWeapon & in)
{
	out << "<" << in.getName() << ">" << " damage points and costs " << in.getAPCost() << " action points";
	return (out);
}
