#include "phonebook.hpp"

PhoneBook::PhoneBook() {};

void PhoneBook::SearchContact()
{
	long long int index = this->GetIndex("Please enter the contact index: ");
	this->Contacts[index].displayContact();
}

int PhoneBook::GetIndex(std::string str)
{
	int index = -1;
    int valid = 0;
    while (!valid)
    {
        std::cout << str << std::flush;
        std::cin >> index;
        if (std::cin.good() && (index >= 0 && index <= 8))
		{
			if (!Contacts[index].isEmpty())
				 valid = 1;
		}
        else
        {
            std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
            std::cout << "Invalid index; please try again.\n";
        }
    }
    return (index);
}

void PhoneBook::addContact(void)
{
	static int i;

	this->Contacts[i % 8].init();
	this->Contacts[i % 8].setIndex(i);
	i++;
}

void PhoneBook::PrintContact(void) 
{
	int i = 0;
	std::cout << "------------| PHONEBOOK |------------\n";
	while (i < 8)
	{
		this->Contacts[i].Layout(i);
		i++;
	}
	std::cout << "\n";
}
