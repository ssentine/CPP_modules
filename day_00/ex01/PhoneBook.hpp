#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#define MAX_CONTACTS 8

class PhoneBook
{
private:
	int			_index;
	Contact		_phoneBook[MAX_CONTACTS];

public:
	PhoneBook() {_index = 0;}
	~PhoneBook() {}

	void 		AddContact();
	void 		ShowInfoTable();
};

#endif