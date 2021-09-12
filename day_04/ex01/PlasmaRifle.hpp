#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP
# include <iostream>
# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();
	PlasmaRifle(PlasmaRifle const & weapon);
	virtual ~PlasmaRifle() {}

	PlasmaRifle & operator = (PlasmaRifle const & other);

	virtual void attack() const;
};

#endif
