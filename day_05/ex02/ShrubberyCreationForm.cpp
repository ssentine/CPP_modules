# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form ("SCF", false, 145, 137), _target(target) {}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & form)
{
	*this = form;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm &	ShrubberyCreationForm::operator = (ShrubberyCreationForm const & other)
{
	if (this != & other)
	{
		_target = other._target;
		Form::operator=(other);
	}
	return (*this);
}

void ShrubberyCreationForm::execute(Bureaucrat const & bureau) const
{
	try
	{
		Form::execute(bureau);
		std::ofstream fd;
		if (_target.empty())
			ShrubberyCreationForm::EmptyTarget();
		std::string name = _target + "_shrubbery";
		fd.open(name, std::ios::trunc);
		if (fd.good())
		{
			fd << "\n";
			fd << "  @@@@    @@@@    @@@@  \n";
			fd << " @@@@@@  @@@@@@  @@@@@@ \n";
			fd << "  @@@@    @@@@    @@@@  \n";
			fd << "   ||      ||      ||   \n";
		}
		fd.close();
		std::cout << "File " << name << " is successfuly created!" << std::endl;
	}
	catch (std::exception & exp)
	{std::cout << exp.what() << std::endl;}
}

const char * ShrubberyCreationForm::EmptyTarget::what() const throw()
{
	return ("Target name is empty!");
}
