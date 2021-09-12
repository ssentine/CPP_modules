#include <iostream>
#include <iomanip>
#include "Contact.hpp"

void Contact::InputInfo()
{
	std::cout << "Enter first name:";
	std::getline(std::cin, this->firstName);
	std::cout << "Enter last name:";
	std::getline(std::cin, this->lastName);
	std::cout << "Enter nickname:";
	std::getline(std::cin, this->nickname);
	std::cout << "Enter login:";
	std::getline(std::cin, this->login);
	std::cout << "Enter postal:";
	std::getline(std::cin, this->postal);
	std::cout << "Enter address:";
	std::getline(std::cin, this->address);
	std::cout << "Enter email address:";
	std::getline(std::cin, this->emailAdress);
	std::cout << "Enter phone number:";
	std::getline(std::cin, this->phoneNumber);
	std::cout << "Enter birthday date:";
	std::getline(std::cin, this->birthdayDate);
	std::cout << "Enter favourite meal:";
	std::getline(std::cin, this->favoriteMeal);
	std::cout << "Enter underwear color:";
	std::getline(std::cin, this->_underwearColor);
	std::cout << "Enter darkest secret:";
	std::getline(std::cin, this->_darkestSecret);
}

std::string firstTen(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(10);
		str[9] = '.';
	}
	else
	{
		str.resize(10);
		for (int i = 0; i < 10; i++)
		{
			if (str[i] == '\0')
				str[i] = ' ';
		}
	}
	return (str);
}

void Contact::ShowInfo()
{
	std::cout << "|" << firstTen(this->firstName) << " ";
	std::cout << "|" << firstTen(this->lastName) << " ";
	std::cout << "|" << firstTen(this->nickname) << "|" << "\n";
}

void Contact::ShowFullInfo()
{
	std::cout << "First name: " << this->firstName << std::endl;
	std::cout << "Last name: " << this->lastName << std::endl;
	std::cout << "Nickname: " << this->nickname << std::endl;
	std::cout << "Login: " << this->login << std::endl;
	std::cout << "Postal: " << this->postal << std::endl;
	std::cout << "Address: " << this->address << std::endl;
	std::cout << "Email address: " << this->emailAdress << std::endl;
	std::cout << "Phone number: " << this->phoneNumber << std::endl;
	std::cout << "Birthday date: " << this->birthdayDate << std::endl;
	std::cout << "Favourite meal: " << this->favoriteMeal << std::endl;
	std::cout << "Underwear color: " << this->_underwearColor << std::endl;
	std::cout << "Darkest secret: " << this->_darkestSecret << std::endl << ">";
};