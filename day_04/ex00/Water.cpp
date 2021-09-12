# include "Water.hpp"

Water::Water(std::string name) : Victim(name)
{
	std::cout << "* sounds of flowing water *" << std::endl;
}

Water::Water(Water const & theWater)
{
	*this = theWater;
}

Water::~Water()
{
	std::cout << "* sounds of an empty bottle *" << std::endl;
}

Water & Water::operator = (Water const & other)
{
	if (this != & other)
		_name = other._name;
	return (*this);
}

void Water::getPolymorphed() const
{
	std::cout << _name << " has been turned into wine! Cause old man knows how to use magic right ;) " << std::endl;
}
