# include <iostream>
# include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	std::cout << "Trying to find spans in an empty list..." << std::endl;
	try
	{
		std::cout << sp.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{std::cerr << e.what() << '\n';}

	std::cout << "\nAdd some numbers and try again." << std::endl;
	
	try
	{
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		sp.addNumber(90);
	}
	catch(const std::exception& e)
	{std::cerr << e.what() << "\n\n";}
	
	std::cout << "shortest span = " <<  sp.shortestSpan() << std::endl;
	std::cout << "longest span = " << sp.longestSpan() << std::endl;

	return (0);
}