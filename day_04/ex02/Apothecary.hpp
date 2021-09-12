#ifndef APOTHECARY_HPP
# define APOTHECARY_HPP
# include "ISpaceMarine.hpp"
# include <iostream>

class Apothecary : public ISpaceMarine
{
public:
	Apothecary();
	Apothecary(Apothecary const & theMarine);
	virtual ~Apothecary();

	Apothecary &	operator = (Apothecary const & other);

	virtual ISpaceMarine*	clone() const;
	virtual void			battleCry() const;
	virtual void			rangedAttack() const;
	virtual void			meleeAttack() const;
};

#endif
