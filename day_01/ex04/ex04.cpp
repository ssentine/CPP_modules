#include<iostream>

int main()
{
	std::string string = "HI THIS IS A BRAIN";
	std::string *pointer = &string;
	std::string &reference = string;

	std::cout << *pointer << std::endl;
	std::cout << reference << std::endl;
	return (0);
}