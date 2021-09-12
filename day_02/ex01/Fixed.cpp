#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	_fixed = 0;
}

Fixed::Fixed(Fixed const & n)
{
	std::cout << "Copy constructor called\n";
	*this = n;
}

Fixed::Fixed(const int n)
{
	_fixed = n << _fracBits;
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(const float n)
{
	_fixed = roundf(n * (1 << _fracBits));
	std::cout << "Float constructor called\n";
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
	return (_fixed);
}

void Fixed::setRawBits(int const raw)
{
	_fixed = raw;
}

int Fixed::toInt( void ) const
{
	return ((int)(_fixed >> _fracBits));
}

float Fixed::toFloat( void ) const
{
	return ((float)(_fixed) / ( 1 << _fracBits));
}

Fixed & Fixed::operator=(Fixed const & result)
{
	std::cout << "Assignation operator called\n";
	_fixed = result.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &in)
{
	out << in.toFloat();
	return(out);
}
