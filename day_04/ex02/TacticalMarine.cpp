# include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready battle" << std::endl;
}

TacticalMarine::TacticalMarine (TacticalMarine const & theMarine)
{
	*this = theMarine;
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh .." << std::endl;
}

TacticalMarine & TacticalMarine::operator = (TacticalMarine const &)
{
	return (*this);
}

ISpaceMarine*	TacticalMarine::clone() const
{
	return(new TacticalMarine());
}

void	TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT !" << std::endl;
}

void	TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with bolter *" << std::endl;
}

void	TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with chainsword *" << std::endl;
}
