#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
private:
	std::string	 _type;
	unsigned int _xp;

public:
	AMateria(){}
	AMateria(std::string const & type);
	AMateria(AMateria const & materia);
	virtual ~AMateria(){}

	AMateria &	operator = (AMateria const & other);

	std::string const & getType() const;
	unsigned int		getXP() const;

	virtual AMateria *	clone() const = 0;
	virtual void		use(ICharacter & target) = 0;
};

std::ostream & operator << (std::ostream & out, const AMateria & in);

#endif
