# include "Bureaucrat.hpp"
# include "Intern.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main()
{
	Intern someRandomIntern;
	Form* rrf;

	std::cout << "Trying to create a robotomy request form..." << std::endl;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	std::cout << "\nTrying to create some shitty form..." << std::endl;
	rrf = someRandomIntern.makeForm("some shitty", "You");

	delete rrf;
	return (0);
}
