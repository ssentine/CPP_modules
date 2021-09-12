#include "FragTrap.hpp"

int main()
{
	FragTrap robot("Juan");

	srand(time(NULL));
	robot.rangedAttack("Intra");
	robot.meleeAttack("Intra");
	robot.takeDamage(20);
	robot.takeDamage(300);
	robot.beRepaired(10);
	robot.beRepaired(1000);
	robot.vaulthunter_dot_exe("Intra");
	robot.vaulthunter_dot_exe("Intra");
	robot.vaulthunter_dot_exe("Intra");
	robot.vaulthunter_dot_exe("Intra");
	robot.vaulthunter_dot_exe("Intra");

	return (0);
}
