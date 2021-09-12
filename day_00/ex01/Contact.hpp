#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact
{
private:
	std::string _underwearColor;
	std::string _darkestSecret;

public:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string login;
	std::string postal;
	std::string address;
	std::string emailAdress;
	std::string phoneNumber;
	std::string birthdayDate;
	std::string favoriteMeal;

	Contact() {}
	~Contact() {}

	void InputInfo();
	void ShowInfo();
	void ShowFullInfo();
};


#endif