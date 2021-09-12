#include "ZombieHorde.hpp"

int main()
{
	srand(time(NULL));

	ZombieHorde horde = ZombieHorde(5);
	horde.announce();
	return (0);
}
