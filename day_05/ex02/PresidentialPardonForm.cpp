# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("PPF", false, 25, 5), _target(target) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & form)
{
	*this = form;
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm & PresidentialPardonForm::operator = (PresidentialPardonForm const & other)
{
	if (this != & other)
	{
		_target = other._target;
		Form::operator=(other);
	}
	return (*this);
}

void PresidentialPardonForm::execute(Bureaucrat const & bureau) const
{
	try
	{
		Form::execute(bureau);
		std::cout << _target << " has been pardoned by Zafod Beeblebrox." << std::endl;
	}
	catch (std::exception & exp)
	{std::cout << exp.what() << std::endl;}
}
