#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Bureaucrat;

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
	class FormNotSigned: public std::exception
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
	virtual ~Form();

	Form & operator = (Form const & other);

	std::string 	getName() const;
	bool 			isSigned() const;
	int				getGradeToSign() const;
	int				getGradeToExecute() const;

	void			beSigned(Bureaucrat const & bureau);
	virtual void	execute(Bureaucrat const & bureau) const;
};

std::ostream & operator << (std::ostream & out, const Form & in);

#endif
