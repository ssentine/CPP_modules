#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "\nFragTrap Juan is coming!\n\n";
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

	std::cout << "\nScavTrap Juanita is coming!\n\n";
	ScavTrap robot1("Juanita");

	srand(time(NULL));
	robot1.rangedAttack("Intra");
	robot1.meleeAttack("Intra");
	robot1.takeDamage(20);
	robot1.takeDamage(300);
	robot1.beRepaired(10);
	robot1.beRepaired(1000);
	robot1.challengeNewcomer();
	robot1.challengeNewcomer();
	robot1.challengeNewcomer();

	return (0);
}
