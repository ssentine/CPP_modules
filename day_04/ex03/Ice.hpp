#ifndef ICE_HPP
# define ICE_HPP
# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const & materia);
	virtual	~Ice() {}

	Ice &	operator = (Ice const &);

	virtual AMateria*	clone() const;
	virtual void		use(ICharacter& target);
};

#endif
