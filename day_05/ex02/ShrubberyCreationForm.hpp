#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
public:
	class EmptyTarget: public std::exception
	{
		virtual const char * what() const throw();
	};
	
private:
	std::string _target;

public:
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & form);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm &	operator = (ShrubberyCreationForm const & other);

	virtual void execute(Bureaucrat const & bureau) const;
};

#endif
