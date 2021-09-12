# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
	: _name("name"), _grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	try 
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighExeption();
		else if (grade > 150)
			throw Bureaucrat::GradeTooLowExeption();
		else
			setGrade(grade);
	}
	catch (std::exception & exp)
	{std::cout << exp.what() << std::endl;}
}

Bureaucrat::Bureaucrat(Bureaucrat const & bureau)
	: _name(bureau._name)
{
	*this = bureau;
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat & Bureaucrat::operator = (Bureaucrat const & other)
{
	if (this != &other)
		_grade = other._grade;
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (_name);
}

int	Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::setGrade(int value)
{
	_grade = value;
}

void	Bureaucrat::incrementGrade()
{
	try
	{
		if (_grade == 1)
			throw Bureaucrat::GradeTooHighExeption();
		_grade--;
	}
	catch(const std::exception& exp)
	{std::cout << exp.what() << std::endl;}
}

void	Bureaucrat::decrementGrade()
{
	try
	{
		if (_grade == 150)
		throw Bureaucrat::GradeTooLowExeption();
	_grade++;
	}
	catch(const std::exception& exp)
	{std::cout << exp.what() << std::endl;}
}

std::ostream & operator << (std::ostream & out, const Bureaucrat & in)
{
	out << in.getName() << " bureaucrat grade " << in.getGrade() << std::endl;
	return (out);
}

const char * Bureaucrat::GradeTooLowExeption::what() const throw()
{
	return ("Grade too low!");
} 

const char * Bureaucrat::GradeTooHighExeption::what() const throw()
{
	return ("Grade too high!");
}
