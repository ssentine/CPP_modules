#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:
	int					_fixed;
	static const int	_fracBits = 8;
	
public:
	Fixed();
	Fixed(Fixed const &n);
	Fixed(const int n);
	Fixed(const float n);
	~Fixed();

	Fixed				&operator=(Fixed const &result);

	int					getRawBits( void ) const;
	void				setRawBits(int const raw);

	float				toFloat( void ) const;
	int					toInt ( void ) const;
};

std::ostream			&operator<<(std::ostream &out, Fixed const &in);

#endif
