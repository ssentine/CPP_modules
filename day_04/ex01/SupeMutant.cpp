# include "SuperMutant.hpp"

SuperMutant::SuperMutant()
	: Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads !" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & theEnemy)
{
	*this = theEnemy;
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant & SuperMutant::operator = (SuperMutant const & other)
{
	if (this == & other)
		return (*this);
	Enemy::operator=(other);
	return (*this);
}

void SuperMutant::takeDamage(int amount)
{
	Enemy::takeDamage(amount - 3);
}
