#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include <iostream>
# include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(RadScorpion const & theEnemy);
	virtual ~RadScorpion();

	RadScorpion & operator = (RadScorpion const & other);
};

#endif
