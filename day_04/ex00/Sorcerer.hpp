#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include "Victim.hpp"

class Sorcerer
{
private:
	std::string	_name;
	std::string	_title;

public:
	Sorcerer();
	Sorcerer(std::string name, std::string	title);
	Sorcerer(Sorcerer const &theSorcer);
	~Sorcerer();

	Sorcerer& operator=(Sorcerer const &other);

	std::string	getName() const;
	std::string	getTitle() const;

	void polymorph(Victim const &target) const;
};

std::ostream & operator<<(std::ostream & out, const Sorcerer & in);

#endif
