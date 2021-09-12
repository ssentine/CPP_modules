# include "Bureaucrat.hpp"
# include "Form.hpp"

int main()
{
	std::cout <<  "Trying to create unappropriate form..." << std::endl;
	Form badForm("a very unappropriate form #1", false, 0, 0);

	Bureaucrat a ("Bureau A", 2);
	Bureaucrat b ("Bureau B", 149);

	Form form1("a very stupid form #23", false, 135, 5);

	
	std::cout <<  "\nChecking signForm()\n" << std::endl;
	std::cout << form1;
	std::cout <<  "\nBureaucrat B trying to sign the form" << std::endl;
	b.signForm(form1);
	std::cout <<  "\nBureaucrat A trying to sign the form" << std::endl;
	a.signForm(form1);
	std::cout << form1;

	std::cout << "\nTrying to sign again..." << std::endl;
	a.signForm(form1);
	
	return (0);
}
