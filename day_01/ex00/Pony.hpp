#ifndef PONY_HPP
#define PONY_HPP

#include <iostream>

class Pony
{
private:
	std::string _name;
	std::string _color;
	std::string _hobby;

public:
	Pony(const std::string &name, const std::string &color, const std::string &hobby);
	~Pony() {}
	
	void sayHello();
};

#endif
