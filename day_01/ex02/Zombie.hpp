#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie
{
private:
	std::string		_type;
	std::string		_name;

public:
	Zombie(std::string type, std::string name);
	~Zombie(){}

	void 			announce();
};

#endif
