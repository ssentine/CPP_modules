#include "ZombieEvent.hpp"

void 		ZombieEvent::setZombieType(const std::string& type)
{
	_type = type;
}

const std::string& ZombieEvent::getZombieType() const
{
	return (_type);
}

Zombie		*ZombieEvent::newZombie(const std::string& name)
{
	return (new Zombie(_type, name));
}

Zombie		*ZombieEvent::randomChump()
{
	return (newZombie(_names[rand() % 5]));
}

void	ZombieEvent::initArray()
{
	_names[0] = "Umpa Lumpa\t";
	_names[1] = "Dead Pitt\t";
	_names[2] = "Dead Little Pony";
	_names[3] = "Michael Jackson\t";
	_names[4] = "Your Ex\t\t";
}
