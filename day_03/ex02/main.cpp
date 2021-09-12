#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	srand(time(NULL));
	std::cout << "FragTrap Juan is coming!\n";
	FragTrap robot("Juan");
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
	robot.vaulthunter_dot_exe("Intra");
	
	std::cout << "\nScavTrap Juanita is coming!\n";
	ScavTrap robotita("Juanita");

	robotita.rangedAttack("Intra");
	robotita.meleeAttack("Intra");
	robotita.takeDamage(20);
	robotita.takeDamage(300);
	robotita.beRepaired(10);
	robotita.beRepaired(1000);
	robotita.challengeNewcomer();
	robotita.challengeNewcomer();
	robotita.challengeNewcomer();
	std::cout << std::endl;

	return (0);
}
