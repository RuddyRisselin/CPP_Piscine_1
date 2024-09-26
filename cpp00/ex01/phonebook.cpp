#include "phonebook.hpp"

PhoneBook::PhoneBook() {};

void PhoneBook::SearchContact()
{
	long long int index = PhoneBook::GetIndex("Please enter the contact index: ");
	PhoneBook::Contacts[index].displayContact();
}

//mettre une garde pour les Max et Min + une garde si il n'y a pas le contact alors ne rien afficher
int PhoneBook::GetIndex(std::string str)
{
	int index = -1;
    int valid = 0;
    while (!valid)
    {
        std::cout << str << std::flush;
        std::cin >> index;
         if (std::cin.good() && (index >= 0 && index <= 8))
            valid = 1;
         else
        {
            std::cin.clear();
            std::cout << "Invalid input; please try again.\n";
        }
    }
    return (index);
}

void PhoneBook::addContact(void)
{
	static int i;
	if (i == 8)
		i = 0;	
	PhoneBook::Contacts[i % 8].init();
	PhoneBook::Contacts[i % 8].setIndex(i);
	i++;
}

void PhoneBook::PrintContact(void) 
{
	int i = 0;
	std::cout << "------------| PHONEBOOK |------------\n";
	while (i < 8)
	{
		PhoneBook::Contacts[i].Layout(i);
		i++;
	}
	std::cout << "\n";
}
