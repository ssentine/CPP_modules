# include "Bureaucrat.hpp"
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat a ("Bureau A", 2);
	Bureaucrat b ("Bureau B", 149);

	ShrubberyCreationForm form1 ("form_1");
	RobotomyRequestForm form2 ("form_2");
	PresidentialPardonForm form3 ("form_3");

	std::cout <<"Bureau A trying to sign and execute form 1" << std::endl;
	a.signForm(form1);
	a.executeForm(form1);

	std::cout << "\nBureau B trying to execute the form 2, but..." << std::endl;
	b.signForm(form2);

	std::cout << "\nBureau B trying to sign the form 2, but..." << std::endl;
	b.signForm(form2);

	std::cout << "\nBureau A trying to sign the form 2" << std::endl;
	a.signForm(form2);

	std::cout << "\nBureau B trying to execute the form 2, but..." << std::endl;
	b.executeForm(form2);

	std::cout << "\nBureau A trying to execute the form 2" << std::endl;
	a.executeForm(form2);

	std::cout << "\nBureau A trying to sign and execute the form 3" << std::endl;
	a.signForm(form3);
	a.executeForm(form3);
	
	return (0);
}
