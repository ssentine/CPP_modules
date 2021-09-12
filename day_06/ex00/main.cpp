# include <iostream>
# include <math.h>

void printChar(std::string str, double n)
{
	std::cout << "char: ";
	if (str == "nan" || str == "-inf" || str == "+inf" || n > INT_MAX || isnan(n))
		std::cout << "impossible" << std::endl;
	else if (n < 32 || n > 126)
		std::cout << "non displayable" << std::endl;
	else
		std::cout << static_cast<char>(n) << std::endl;
}

void printInt(std::string str, double n)
{
	std::cout << "int: ";
	if (str == "nan" || str == "-inf" || str == "+inf" || n > INT_MAX || isnan(n))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(n) << std::endl;
}

void printFloat(std::string str, double n)
{
	std::cout << "float: ";
	if (str == "nan" || str == "-inf" || str == "+inf" || isnan(n))
		std::cout << static_cast<float>(n) << "f" << std::endl;
	else
		std::cout << static_cast<float>(n) << (n == static_cast<int>(n) ? ".0" : "") << "f" << std::endl;
}

void printDouble(std::string str, double n)
{
	std::cout << "double: ";
	if (str == "nan" || str == "-inf" || str == "+inf" || isnan(n))
		std::cout << n << std::endl;
	else
		std::cout << n << (n == static_cast<int>(n) ? ".0" : "") << std::endl;
}

int main (int ac, char ** av)
{
	if (ac == 2)
	{
		std::string str = static_cast<std::string>(av[1]);
		double n = atof(av[1]);
		if (str.length() == 1 && !(str[0] >= '0' && str[0] <= '9'))
			n = static_cast<double>(av[1][0]);
		printChar(str, n);
		printInt(str, n);
		printFloat(str, n);
		printDouble(str, n);
	}
	else
		std::cout << "You should put only one argument!\n";
	return (0);
}
