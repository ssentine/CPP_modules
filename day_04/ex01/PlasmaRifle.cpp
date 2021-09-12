#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
	: AWeapon("Plasma Rifle", 5, 21){}

PlasmaRifle::PlasmaRifle(PlasmaRifle const & weapon)
{
	*this = weapon;
}

PlasmaRifle & PlasmaRifle::operator = (PlasmaRifle const & other)
{
	if (this != & other)
		AWeapon::operator=(other);
	return (*this);
}

void PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
