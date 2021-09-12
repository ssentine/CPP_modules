#ifndef POWERFIST_HPP
# define POWERFIST_HPP
# include <iostream>
# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(PowerFist const & weapon);
	virtual ~PowerFist(){}

	PowerFist & operator = (PowerFist const & other);

	virtual void attack() const;
};

#endif
