#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"
#include <iostream>

class Form
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
	class AlreadySigned: public std::exception
	{
		virtual const char * what() const throw();
	};
	
private:
	std::string	_name;
	bool		_isSigned;
	int 		_gradeToSign;
	int 		_gradeToExecute;
	
public:
	Form();
	Form(std::string name, bool isSigned, int gradeToSign, int gradeToExecute);
	Form(Form const & form);
	~Form();

	Form &	operator = (Form const & other);

	std::string getName() const;
	bool 		isSigned() const;
	int			getGradeToSign() const;
	int			getGradeToExecute() const;

	void beSigned(Bureaucrat const & bureau);
};

std::ostream & operator << (std::ostream & out, const Form & in);

#endif
