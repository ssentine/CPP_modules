#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	std::cout << "NinjaTrap Yamamoto is coming!\n";
	NinjaTrap robot("Yamamoto");
	srand(time(NULL));
	robot.rangedAttack("Intra");
	robot.meleeAttack("Intra");
	robot.takeDamage(20);
	robot.takeDamage(300);
	robot.beRepaired(10);
	robot.beRepaired(1000);

	FragTrap robot1("Juan");
	ScavTrap robot2("Juanita");
	
	std::cout << std::endl;
	robot.ninjaShoebox(robot1);
	robot.ninjaShoebox(robot2);
	robot.ninjaShoebox(robot);
	std::cout << std::endl;
	return (0);
}
