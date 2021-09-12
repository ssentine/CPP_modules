#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed
{
private:
	int					_fixed;
	static const int	_fracBits = 8;
	
public:
	Fixed();
	Fixed(Fixed const &n);
	~Fixed();

	int					getRawBits( void ) const;
	void				setRawBits(int const raw);

	Fixed				&operator=(Fixed const &result);
};

#endif
