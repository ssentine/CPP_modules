#include "FatMan.hpp"

FatMan::FatMan()
	: AWeapon("Fat Man", 5, 21){}

FatMan::FatMan(FatMan const & weapon)
{
	*this = weapon;
}

FatMan & FatMan::operator = (FatMan const & other)
{
	if (this == & other)
		return (*this);
	AWeapon::operator=(other);
	return (*this);
}

void FatMan::attack() const
{
	std::cout << "* sounds of a nuclear gun *" << std::endl;
}
