# include "whatever.hpp"

class Test
{
private:
	int _n;

public:
	Test(){}
	Test(int n) : _n(n){}
	~Test(){}
	int getN() const { return _n;}
	bool operator==( Test const & rhs) const {return this->_n == rhs._n;}
	bool operator!=( Test const & rhs) const {return this->_n != rhs._n;}
	bool operator>( Test const & rhs) const {return this->_n > rhs._n;}
	bool operator<( Test const & rhs) const {return this->_n < rhs._n;}
	bool operator>=( Test const & rhs) const {return this->_n >= rhs._n;}
	bool operator<=( Test const & rhs) const {return this->_n <= rhs._n;}
};

std::ostream & operator<<(std::ostream & out, const Test & in) { out << in.getN(); return(out); }

int main( void ) 
{
	int a = 2;
	int b = 3;

	::swap( a, b );

	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);

	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl << std::endl;

	Test test1(2);
	Test test2(1);

	std::cout << "test1 = " << test1 << ", test2 = " << test2 << std::endl;
	::swap(test1, test2);
	std::cout << "min( test1, test2 ) = " << ::min( test1, test2 ) << std::endl;
	std::cout << "max( test1, test2 ) = " << ::max( test1, test2 ) << std::endl;

	return 0;
}
