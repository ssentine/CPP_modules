#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

int main()
{
	std::string	command;
	PhoneBook book;

	std::cout << "Welcome to the phonebook!\n";
	std::cout << "Commands available:\n-ADD\n-SEARCH\n-EXIT\n>";
	while (21)
	{
		std::getline(std::cin, command);
		if (command == "ADD")
			book.AddContact();
		else if (command == "SEARCH")
			book.ShowInfoTable();
		else if (command == "EXIT")
			break ;
		else
			std::cout << ">";
	}
	return (1);
}