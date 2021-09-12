#include "Pony.hpp"

Pony::Pony(const std::string &name, const std::string &color, const std::string &hobby)
{
	_name = name;
	_color =color;
	_hobby = hobby;
}
void Pony::sayHello()
{
	std::cout << "Hi, I'm " << _name << std::endl;
}
