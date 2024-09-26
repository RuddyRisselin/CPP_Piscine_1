#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "contact.hpp"

class PhoneBook {

private:
	Contact Contacts[8];

public:
	PhoneBook();
	void addContact(void);
	void PrintContact(void);
	void SearchContact(void);
	int GetIndex(std::string str);
};

#endif