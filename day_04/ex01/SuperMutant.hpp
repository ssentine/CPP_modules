#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include <iostream>
# include "Enemy.hpp"

class SuperMutant : public Enemy
{
public:
	SuperMutant();
	SuperMutant(SuperMutant const & theEnemy);
	virtual ~SuperMutant();

	SuperMutant & operator = (SuperMutant const & other);

	virtual void takeDamage(int amount);
};

#endif
