# include "iter.hpp"
# include <iostream>

class Test
{
private:
	int _n;

public:
	Test() : _n(21){}
	int getN() const { return _n;}
	~Test(){}
};

std::ostream & operator<<(std::ostream & out, const Test & in) { out << in.getN(); return(out); }

template <typename T>
void print(T const & in)
{
	std::cout << in << std::endl;
}

int main( void ) 
{
	int testIntArray[] = {1, 2, 3, 4, 5};
	iter(testIntArray, 5, print);
	std::cout << std::endl;

	Test testClassArray[5];
	iter(testClassArray, 5, print);

	return 0;
}