# include "Peon.hpp"
# include "Sorcerer.hpp"
# include "Victim.hpp"
# include "Water.hpp"
# include <iostream>

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Water wota("Water");

	std::cout << robert << jim << joe << wota;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(wota);
	return (0);
}
