#ifndef ZOMBIEEVENT_HPP
#define ZOMBIEEVENT_HPP

#include "Zombie.hpp"
#include <iostream>

class ZombieEvent
{
private:
	std::string			_type;
	std::string			_names[5]; 

public:

	ZombieEvent(){}
	~ZombieEvent(){}

	const std::string&	getZombieType() const;
	void 				setZombieType(const std::string& type);

	Zombie				*newZombie(const std::string& name);
	Zombie				*randomChump();
	void				initArray();
};

#endif
