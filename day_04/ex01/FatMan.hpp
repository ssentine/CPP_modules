#ifndef FATMAN_HPP
# define FATMAN_HPP
# include <iostream>
# include "AWeapon.hpp"

class FatMan : public AWeapon
{
public:
	FatMan();
	FatMan(FatMan const & weapon);
	virtual ~FatMan() {}

	FatMan & operator = (FatMan const & other);

	virtual void attack() const;
};

#endif
