# include "RadRoach.hpp"

RadRoach::RadRoach()
	: Enemy(33, "Rad Roach")
{
	std::cout << "* la cucaracha, la cucaracha *" << std::endl;
}

RadRoach::RadRoach(RadRoach const & theEnemy)
{
	*this = theEnemy;
}

RadRoach::~RadRoach()
{
	std::cout << "* no cucaracha *" << std::endl;
}

RadRoach & RadRoach::operator = (RadRoach const & other)
{
	if (this == & other)
		return (*this);
	Enemy::operator=(other);
	return (*this);
}
