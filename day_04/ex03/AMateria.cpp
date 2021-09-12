# include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : _type(type), _xp(0) {}

AMateria::AMateria(AMateria const & aMateria)
{
	*this = aMateria;
}

AMateria &	AMateria::operator = (AMateria const & other)
{
	if (this != & other)
	{
		_type = other._type;
		_xp = other._xp;
	}
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (_type);
}

unsigned int	AMateria::getXP() const
{
	return (_xp);
}

std::ostream & operator << (std::ostream & out, const AMateria & in)
{
	out << in.getType() << std::endl;
	return (out);
}
