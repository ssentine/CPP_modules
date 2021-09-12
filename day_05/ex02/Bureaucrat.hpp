#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include "Form.hpp"

class Bureaucrat
{
public:
	class GradeTooLowExeption: public std::exception
	{
		virtual const char * what() const throw();
	};
	class GradeTooHighExeption: public std::exception
	{
		virtual const char * what() const throw();
	};

private:
	const std::string	_name;
	int 				_grade;
	
	Bureaucrat();
	void setGrade(int value);

public:
	Bureaucrat(std::string name, int _grade);
	Bureaucrat(Bureaucrat const & bureau);
	~Bureaucrat();

	Bureaucrat & operator = (Bureaucrat const & other);

	std::string getName() const;
	int			getGrade() const;

	void		incrementGrade();
	void		decrementGrade();
	void 		signForm(Form & form) const;
	void		executeForm(Form const & form) const;
};

std::ostream & operator << (std::ostream & out, const Bureaucrat & in);

#endif
