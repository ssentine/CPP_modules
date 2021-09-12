# include "AssaultTerminator.hpp"
# include "ISpaceMarine.hpp"
# include "ISquad.hpp"
# include "Squad.hpp"
# include "TacticalMarine.hpp"
# include "Apothecary.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISpaceMarine* sam = new Apothecary;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(sam);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;
	
	return 0;
}
