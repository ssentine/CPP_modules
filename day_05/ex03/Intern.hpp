#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
private:
	class NoSuchForm: public std::exception
	{
		virtual const char * what() const throw();
	};

	static struct FormTypes _forms[3];

public:
	Intern();
	Intern(Intern const & intern);
	~Intern();

	Intern & operator = (Intern const & other);

	Form * makeForm(std::string formName, std::string target);
};

struct FormTypes
{
	std::string type;
	Form *(*func)(std::string);
};

#endif
