#ifndef HUMAN_HPP
#define HUMAN_HPP

#include<iostream>
#include<sstream>
#include "Brain.hpp"
class Human
{
private:
	Brain 		_brain;
public:
	Human(){}
	~Human(){}

	Brain		&getBrain(){return _brain;}
	std::string identify();
};

#endif
