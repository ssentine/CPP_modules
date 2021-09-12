#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <list>
# include <vector>

class Span
{
private:
	int				_size;
	static int		_alreadyInNumbers;
	std::list<int>	_numbers;

	Span();
public:
	Span(unsigned int size);
	Span(Span const & span);
	~Span();

	Span & operator = (Span const & other);

	int 			getSize() const;
	int 			getAlreadyInNumbers() const;
	std::list<int> getNumbers() const;

	void 			addNumber(int n);
	int				shortestSpan();
	int				longestSpan();
};

#endif
