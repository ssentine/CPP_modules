# include "Victim.hpp"

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const & theVictim)
{
	*this = theVictim;
}

Victim::~Victim()
{
	std::cout << "Victim " << _name << " just died for no apparent reason!" << std::endl;
}

Victim& Victim::operator = (Victim const & other)
{
	if (this != &other)
		_name = other._name;
	return (*this);
}

std::string Victim::getName() const
{
	return(_name);
}

void Victim::getPolymorphed() const
{
	std::cout << _name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream & operator << (std::ostream & out, const Victim & in)
{
	out << "I'm " << in.getName() << " and I like otters!" << std::endl;
	return (out);
 }
