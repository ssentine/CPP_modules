#ifndef SQUAD_HPP
# define SQUAD_HPP
# include "ISpaceMarine.hpp"
# include "ISquad.hpp"
# include <iostream>

class Squad : public ISquad
{
public:
	static int unitsCount;
	ISpaceMarine* units[512];

	Squad(){}
	Squad(Squad const & theSquad);
	virtual ~Squad();

	Squad & operator = (Squad const & other);

	virtual int				getCount() const;
	virtual ISpaceMarine *	getUnit(int n) const;
	virtual int				push(ISpaceMarine* spaceMarine);
};

#endif
