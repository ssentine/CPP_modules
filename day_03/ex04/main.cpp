#include "SuperTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main()
{
	srand(time(NULL));

	std::cout << "SuperTrap Keanu Reeves is coming!\n";
	SuperTrap robot("Keanu Reeves");

	srand(time(NULL));
	std::cout << "Super's metods\n\n";
	robot.rangedAttack("Intra");
	robot.meleeAttack("Intra");
	robot.takeDamage(20);
	robot.takeDamage(300);
	robot.beRepaired(10);
	robot.beRepaired(1000);

	std::cout << "\nFrag's metods\n\n";
	robot.vaulthunter_dot_exe("Intra");
	robot.vaulthunter_dot_exe("Intra");

	std::cout << "\nNinja's metods\n\n";
	FragTrap robot1("frag Juan");
	ScavTrap robot2("scav Juanita");
	robot.ninjaShoebox(robot1);
	robot.ninjaShoebox(robot2);
	std::cout << std::endl;
	
	return (0);
}
