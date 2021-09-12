#include "Brain.hpp"

std::string Brain::identify() const 
{
	std::stringstream stream;

	stream << this;
	return (stream.str());
}
