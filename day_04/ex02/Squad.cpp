# include "Squad.hpp"

int Squad:: unitsCount = 0;

Squad::Squad(Squad const & theSquad)
{
	*this = theSquad;
}

Squad::~Squad()
{
	for (int i = 0; i < unitsCount; i++)
		delete (units[i]);
}

Squad & Squad::operator = (Squad const & other)
{
	for (int i = 0; i < unitsCount; i++)
		delete (units[i]);
	for (int i = 0; i < other.unitsCount; i++)
		units[i] = other.units[i];
	unitsCount = other.unitsCount;
	return (*this);
}

int Squad::getCount() const
{
	return (unitsCount);
}

ISpaceMarine * Squad::getUnit(int n) const
{
	if (units[n])
		return (units[n]);
	return (NULL);
}

int Squad::push(ISpaceMarine* spaceMarine)
{
	units[unitsCount] = spaceMarine;
	unitsCount++;
	return (unitsCount);
}
