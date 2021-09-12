# include "Bureaucrat.hpp"
# include "Form.hpp"

Form::Form()
	: _name("name"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150) {}

Form::Form(std::string name, bool isSigned, int gradeToSign, int gradeToExecute)
	: _name(name), _isSigned(isSigned)
{
	try 
	{
		if (gradeToSign < 1 || gradeToExecute < 1)
			throw Form::GradeTooHighExeption();
		else if (gradeToSign > 150 || gradeToExecute > 150)
			throw Form::GradeTooLowExeption();
		else
		{
			_gradeToSign = gradeToSign;
			_gradeToExecute = gradeToExecute;
		}
	}
	catch (std::exception & exp)
	{std::cout << exp.what() << std::endl;}
}

Form::Form(Form const & form)
{
	*this = form;
}

Form::~Form(){}

Form &	Form::operator = (Form const & other)
{
	if (this != &other)
	{
		_name = other._name;
		_isSigned = other._isSigned;
		_gradeToSign = other._gradeToSign;
		_gradeToExecute = other._gradeToExecute;
	}
	return (*this);
}

std::string Form::getName() const
{
	return(_name);
}

bool Form::isSigned() const
{
	return(_isSigned);
}

int Form::getGradeToSign() const
{
	return(_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return(_gradeToExecute);
}

void Form::beSigned(Bureaucrat const & bureau)
{
	try
	{
		if (_isSigned)
			throw Form::AlreadySigned();
		else if (bureau.getGrade() > _gradeToSign)
			throw Form::GradeTooLowExeption();
		else
		{
			_isSigned = true;
			std::cout << bureau.getName() << " signes " << _name << std::endl;
		}
	}
	catch (std::exception & exp)
	{std::cout << exp.what() << std::endl;}
}

void Form::execute(Bureaucrat const & bureau) const
{
	if (!_isSigned)
		throw Form::FormNotSigned();
	else if (bureau.getGrade() > _gradeToExecute)
		throw Form::GradeTooLowExeption();
	else
		std::cout << bureau.getName() << " executes " << _name << std::endl;
}

const char * Form::GradeTooLowExeption::what() const throw()
{
	return ("Grade too low!");
} 

const char * Form::GradeTooHighExeption::what() const throw()
{
	return ("Grade too high!");
}

const char * Form::AlreadySigned::what() const throw()
{
	return ("This form is already signed!");
}

const char * Form::FormNotSigned::what() const throw()
{
	return ("Form not signed!");
}

std::ostream & operator << (std::ostream & out, const Form & in)
{
	if (in.isSigned())
		out << in.getName() << " is signed " <<  std::endl;
	else
		out << in.getName() << " is not signed." << std::endl;
	return (out);
}
