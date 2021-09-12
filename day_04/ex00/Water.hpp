#ifndef WATER_HPP
# define WATER_HPP
# include <iostream>
# include "Victim.hpp"

class Water : public Victim
{
public:
	Water(std::string name);
	Water(Water const & theWater);
	virtual ~Water();

	Water & operator = (Water const & other);

	void getPolymorphed() const;
};

#endif
