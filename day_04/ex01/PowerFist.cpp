#include "PowerFist.hpp"

PowerFist::PowerFist()
	: AWeapon("Power fist", 8, 50) {}

PowerFist::PowerFist(PowerFist const & weapon)
{
	*this = weapon;
}

PowerFist & PowerFist::operator = (PowerFist const & other)
{
	if (this == & other)
		return (*this);
	AWeapon::operator=(other);
	return (*this);
}

void PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
