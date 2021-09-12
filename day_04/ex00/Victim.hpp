#ifndef VICTIM_HPP
# define VICTIM_HPP
# include <iostream>

class Victim
{
protected:
	std::string	_name;

public:
	Victim(){}
	Victim(std::string name);
	Victim(Victim const & theVictim);
	virtual ~Victim();

	Victim & operator = (Victim const & other);

	std::string getName() const;

	virtual void getPolymorphed() const;
};

std::ostream & operator << (std::ostream & out, const Victim & in);

#endif
