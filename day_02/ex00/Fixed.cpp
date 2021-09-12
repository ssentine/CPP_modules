#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called\n";
	_fixed = 0;
}

Fixed::Fixed(Fixed const &n)
{
	std::cout << "Copy constructor called\n";
	*this = n;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called\n";
	return (_fixed);
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	_fixed = raw;
}

Fixed &Fixed::operator=(Fixed const &result)
{
	std::cout << "Assignation operator called\n";
	_fixed = result.getRawBits();
	return (*this);
}
