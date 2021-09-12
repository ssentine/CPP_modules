# include "Sorcerer.hpp"

Sorcerer::Sorcerer() : _name("name"), _title("title") {}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const &theSorcer)
{
	*this = theSorcer;
}

Sorcerer::~Sorcerer()
{
	std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

Sorcerer& Sorcerer::operator=(Sorcerer const &other)
{
	if (this != & other)
	{
		_name = other._name;
		_title = other._title;
	}
	return (*this);
}

std::string	Sorcerer::getName() const
{
	return (_name);
}

std::string	Sorcerer::getTitle() const
{
	return (_title);
}

void Sorcerer::polymorph(Victim const & target) const
{
	target.getPolymorphed();
}

std::ostream & operator << (std::ostream & out, const Sorcerer & in)
{
	out << "I am " << in.getName() << ", " << in.getTitle() << ", and I like ponies!" << std::endl;
	return (out);
}
