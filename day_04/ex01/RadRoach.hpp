#ifndef RADROACH_HPP
# define RADROACH_HPP
# include <iostream>
# include "Enemy.hpp"

class RadRoach : public Enemy
{
public:
	RadRoach();
	RadRoach(RadRoach const & theEnemy);
	virtual ~RadRoach();

	RadRoach & operator = (RadRoach const & other);
};

#endif
