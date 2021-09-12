#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string _target;

public:
	RobotomyRequestForm(std::string _target);
	RobotomyRequestForm(RobotomyRequestForm const & form);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &	operator = (RobotomyRequestForm const & other);

	virtual void execute(Bureaucrat const & bureau) const;
};

#endif
