# include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(Cure const & aMateria)
{
	*this = aMateria;
}

Cure &	Cure::operator = (Cure const &)
{
	return (*this);
}

AMateria*	Cure::clone() const
{
	return (new Cure());
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals  " << target.getName() << "'s wounds *'" << std::endl;
}
