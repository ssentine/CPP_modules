# include "Apothecary.hpp"

Apothecary::Apothecary()
{
	std::cout << "Apothecary here." << std::endl;
}

Apothecary::Apothecary(Apothecary const & theMarine)
{
	*this = theMarine;
}

Apothecary::~Apothecary()
{
	std::cout << "The battlefield awaits." << std::endl;
}

Apothecary &	Apothecary::operator = (Apothecary const &)
{
	return (*this);
}

ISpaceMarine*	Apothecary::clone() const
{
	return (new Apothecary());
}

void	Apothecary::battleCry() const
{
	std::cout << "The fallen shall be forever remembered as the Emperor's finest." << std::endl;
}

void	Apothecary::rangedAttack() const
{
	std::cout << "* cure injured *" << std::endl;
}

void	Apothecary::meleeAttack() const
{
	std::cout << "What are your needs?" << std::endl;
}
