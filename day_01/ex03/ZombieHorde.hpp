#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"
# include <iostream>

class ZombieHorde
{
private:
	Zombie				*_zombie;
	int					_nbr;
	std::string 		_names[5];

public:
	ZombieHorde(const int &n);
	~ZombieHorde();

	void				announce() const;
	const std::string&	randomChump();
	void				initArray();
};

#endif
