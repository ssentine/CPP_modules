# include "Array.hpp"
# include <iostream>


int main()
{
	std::cout << "Creating empty array" << std::endl;
	Array <int> a;
	for (int i = 0; i < a.size(); i++)
		std::cout << i << " = " << a[i] << std::endl;

	std::cout << "\nArray of 5 int values and 6'th for catching an exeption" << std::endl;
	Array <int> b(5);
	try
	{
		for (int i = 0; i < b.size() + 1; i++)
			std::cout << i << " = " << b[i] << std::endl;
	}
	catch(const std::exception& e)
	{std::cerr << e.what() << '\n';}
	
	std::cout << "\nArray of 5 int values and 6'th for catching an exeption" << std::endl;
	Array <std::string> c(5);
	c[0] = "test";
	c[1] = "it";
	c[2] = "better";
	try
	{
		for (int i = 0; i < c.size() + 1; i++)
			std::cout << i << " = " << c[i] << std::endl;
	}
	catch(const std::exception& e)
	{std::cerr << e.what() << '\n';}

	return (1);
}
