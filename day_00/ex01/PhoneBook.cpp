#include <iostream>
#include <iomanip>
#include "PhoneBook.hpp"

void PhoneBook::AddContact()
{
	if (this->_index < MAX_CONTACTS)
	{
		this->_phoneBook[_index].InputInfo();
		std::cout << "The contact successfully added\n>";
		this->_index++;
	}
	else
		std::cout << "Phonebook already has 8 contacts, sorry.\n>";
};

void PhoneBook::ShowInfoTable()
{
	std::cout << "--------------------------------------------\n";
	std::cout << "| Index | Firstname |  Lastname | Nickname |\n";
	std::cout << "--------------------------------------------\n";
	for (int j = 0; j < this->_index; j++)
	{
		std::cout << "|" << j << "\t";
		this->_phoneBook[j].ShowInfo();
	}
	std::cout << "--------------------------------------------\n";
	std::cout << "Choose contact by index\n>";
	std::string  temp;
	std::getline(std::cin, temp);
	for (int k = 0; temp[k]; k++)
	{
		if (temp[k] > '9' || temp[k] < '0')
		{
			std::cout << "Invalid index\n>";
			return ;
		}
	}
	int temp_int = std::atoi(temp.c_str());
	if (temp_int < _index)
		this->_phoneBook[temp_int].ShowFullInfo();
	else
		std::cout << "Invalid index\n>";
};