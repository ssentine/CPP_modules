#include <time.h>
#include "ZombieEvent.hpp"
#include "Zombie.hpp"

int main()
{
	srand(time(NULL));
	
	ZombieEvent event;
	event.initArray();
	event.setZombieType("Dead man");
	Zombie *zombo1 = event.newZombie("Mad and dead\t");
	zombo1->announce();
	delete zombo1;

	event.setZombieType("Noisy bitch");
	Zombie *zombo2 = event.randomChump();
	zombo2->announce();
	delete zombo2;

	event.setZombieType("Creepy potato");
	Zombie *zombo3 = event.randomChump();
	zombo3->announce();
	delete zombo3;

	return (0);
}
