# include <iostream>
# include <vector>
# include <list>
# include <array>
# include "easyfind.hpp"

int main()
{
	std::list<int> testList;
	for (int i = 1; i <= 10; i++)
		testList.push_back(i);

	std::cout << "We have a list from 1 to 10, trying to find 3, 7 and 21..." << std::endl;

	try
	{
		std::cout << easyfind(testList, 3) << " is found!" << std::endl;
		std::cout << easyfind(testList, 7) << " is found!" << std::endl;
		std::cout << "21: " << easyfind(testList, 21) << std::endl;
	}
	catch(const std::exception& e)
	{std::cerr << e.what() << '\n';}
	

	std::vector<int> testVector;
	for (int i = 1; i <= 10; i++)
		testVector.push_back(i);

	std::cout << "\nWe have a vector from 1 to 10, trying to find 3, 7 and 21..." << std::endl;

	try
	{
		std::cout << easyfind (testVector, 3) << " is found!" << std::endl;
		std::cout << easyfind(testVector, 7) << " is found!" << std::endl;
		std::cout << "21: " << easyfind(testVector, 21) << std::endl;
	}
	catch(const std::exception& e)
	{std::cerr << e.what() << '\n';}

	std::array<int, 10> testArray;
	for (int i = 1; i <= 10; i++)
		testArray[i- 1] = i;

	std::cout << "\nWe have an array from 1 to 10, trying to find 3, 7 and 21..." << std::endl;

	try
	{
		std::cout << easyfind(testArray, 3) << " is found!" << std::endl;
		std::cout << easyfind(testArray, 7) << " is found!"<< std::endl;
		std::cout <<  "21: " << easyfind(testArray, 21) << std::endl;
	}
	catch(const std::exception& e)
	{std::cerr << e.what() << '\n';}
	
	return(0);
}