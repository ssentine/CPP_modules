# include "Span.hpp"

int Span::_alreadyInNumbers = 0;

Span::Span() : _size(0) {}

Span::Span(unsigned int size): _size(size) {}

Span::Span(Span const & span)
{
	*this = span;
}

Span::~Span(){}

Span & Span::operator = (Span const & other)
{
	_size = other.getSize();
	_alreadyInNumbers = other.getAlreadyInNumbers();
	_numbers.assign(other.getNumbers().begin(), other.getNumbers().end());
	return (*this);
}

int Span::getSize() const
{
	return(_size);
}

int Span::getAlreadyInNumbers() const
{
	return(_alreadyInNumbers);
}

std::list<int> Span::getNumbers() const
{
	return(_numbers);
}

void Span::addNumber(int n)
{
	if (_alreadyInNumbers == _size)
	{
		throw std::overflow_error ("Container is full!");
	}
	_alreadyInNumbers++;
	_numbers.push_back(n);

}

int	Span::shortestSpan()
{
	if (_alreadyInNumbers < 2)
	{
		throw std::out_of_range("Too few numbers, no spans!");
	}
	std::list<int>::iterator i = _numbers.begin();
	std::list<int>::iterator j = _numbers.begin();
	j++;
	int diff = INT_MAX;
	for (; j != _numbers.end() && diff > 0; i++, j++)
	{
		diff = std::min(diff, std::abs(*j - *i));
	}
	return (diff);
}

int	Span::longestSpan()
{
	if (_alreadyInNumbers < 2)
	{
		throw std::out_of_range("Too few numbers, no spans!");
	}
	std::list<int>::iterator i = _numbers.begin();
	std::list<int>::iterator j = _numbers.begin();
	j++;
	int diff = 0;
	for (; j != _numbers.end(); i++, j++)
	{
		// std::cout << " r = " << *j << "  " << *i << std::endl;
		diff = std::max(diff, std::abs(*j - *i));
	}
	return (diff);
}
