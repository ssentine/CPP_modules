# include <iostream>
# include "Character.hpp"
# include "AWeapon.hpp"
# include "Enemy.hpp"
# include "RadScorpion.hpp"
# include "RadRoach.hpp"
# include "PowerFist.hpp"
# include "PlasmaRifle.hpp"
# include "FatMan.hpp"

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();
	Enemy* c = new RadRoach();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	AWeapon* fm = new FatMan();

	me->equip(pr);
	std::cout << *me;
	me->equip(fm);

	me->attack(b);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->equip(pf);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	me->equip(fm);
	std::cout << *b;
	std::cout << *c;

	delete me;
	delete pr;
	delete pf;
	delete fm;
	delete b;
	delete c;
	return (0);
}
