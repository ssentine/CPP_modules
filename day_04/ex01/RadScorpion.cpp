# include "RadScorpion.hpp"

RadScorpion::RadScorpion()
	: Enemy(80, "Rad Scorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & theEnemy)
{
	*this = theEnemy;
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *" << std::endl;
}

RadScorpion & RadScorpion::operator = (RadScorpion const & other)
{
	if (this == & other)
		return (*this);
	Enemy::operator=(other);
	return (*this);
}
