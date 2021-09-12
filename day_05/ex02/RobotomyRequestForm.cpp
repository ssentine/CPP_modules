# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("RRF", false, 72, 45), _target(target) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & form)
{
	*this = form;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm & RobotomyRequestForm::operator = (RobotomyRequestForm const & other)
{
	if (this != & other)
	{
		_target = other._target;
		Form::operator=(other);
	}
	return (*this);
}

void RobotomyRequestForm::execute(Bureaucrat const & bureau) const
{
	try
	{
		Form::execute(bureau);
		std::cout << "* Makes some drilling noises *" << std::endl;
		srand(time(NULL));
		if (rand() % 2)
			std::cout << _target << " has been robotomized successfully!" << std::endl;
		else
			std::cout << "Failure!" << std::endl;	
	}
	catch (std::exception & exp)
	{std::cout << exp.what() << std::endl;}
}
