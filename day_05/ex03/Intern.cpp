# include "Intern.hpp"

Form *makeSCF(std::string target)
{
	return new ShrubberyCreationForm(target);
}

Form *makeRRF(std::string target)
{
	return new RobotomyRequestForm(target);
}

Form *makePPF(std::string target)
{
	return new PresidentialPardonForm(target);
}

struct FormTypes Intern::_forms[3] = {{"shrubbery creation", makeSCF}, {"robotomy request", makeRRF}, {"presidential pardon", makePPF }};

Intern::Intern(){}

Intern::Intern(Intern const & intern)
{
	*this = intern;
}

Intern::~Intern(){}

Intern & Intern::operator = (Intern const &)
{
	return(*this);
}

Form * Intern::makeForm(std::string formName, std::string target)
{
	try
	{
		for (int i = 0; i < 3; i++)
		{
			if (_forms[i].type == formName)
			{
				std::cout << "Intern creates " << formName << " form." << std::endl;
				return (_forms[i].func(target));
			}
		}
		throw Intern::NoSuchForm();
 	}
	catch (std::exception & exp)
	{std::cout << exp.what() << std::endl;}
	return NULL;
}

const char * Intern::NoSuchForm::what() const throw()
{
	return ("No such a form!");
}
