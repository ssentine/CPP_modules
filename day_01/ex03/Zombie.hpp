#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
private:
	std::string		_type;
	std::string 	_name;

public:
	Zombie(){}
	~Zombie(){}

	void			setType(const std::string& type){_type = type;}
	void			setName(const std::string& name){_name = name;}
	
	void			announce() const;
};

#endif
