# include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a ("Bureau A", 2);
	Bureaucrat b ("Bureau B", 149);

	std::cout <<  "Catching exeption while constructor is called\n" << std::endl;
	Bureaucrat c ("c", -155);
	Bureaucrat d ("d", 155);

	std::cout <<  "\nCatching exeption trying to call increment/decrement fuctions\n" << std::endl;	
	std::cout << a;
	a.incrementGrade();
	std::cout << a;
	a.incrementGrade();

	std::cout << b;
	b.decrementGrade();
	std::cout << b;
	b.decrementGrade();

	return (0);
}
