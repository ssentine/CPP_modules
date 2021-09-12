#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string _target;

public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & form);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm & operator = (PresidentialPardonForm const & other);

	virtual void execute(Bureaucrat const & bureau) const;
};

#endif
