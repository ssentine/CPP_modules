#ifndef PEON_HPP
# define PEON_HPP
# include <iostream>
# include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon(std::string name);
	Peon(Peon const & thePeon);
	virtual ~Peon();

	Peon & operator = (Peon const & other);

	void getPolymorphed() const;
};

#endif
