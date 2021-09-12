#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(const int &n)
{
	_nbr = n;
	initArray();
	_zombie = new Zombie[n];
	for(int i = 0; i < n; i++)
	{
		_zombie[i].setType("dead man");
		_zombie[i].setName(randomChump());
	}
}

ZombieHorde::~ZombieHorde()
{
	 delete [] _zombie;
}

void ZombieHorde::announce() const
{
	for (int i = 0; i < _nbr; i++)
		_zombie[i].announce();
}

const std::string&		ZombieHorde::randomChump()
{
	return (_names[rand() % 5]);
}

void	ZombieHorde::initArray()
{
	_names[0] = "Umpa Lumpa\t";
	_names[1] = "Dead Pitt\t";
	_names[2] = "Dead Little Pony";
	_names[3] = "Michael Jackson\t";
	_names[4] = "Your Ex\t\t";
}

