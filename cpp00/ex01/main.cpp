#include "contact.hpp"
#include "phonebook.hpp"

int main()
{
    PhoneBook PhoneBook;
    
    PhoneBook.Contacts[0].setFirstName("John");
    PhoneBook.Contacts[0].setLastName("Doe");
    PhoneBook.Contacts[0].setNickname("Johnny");
    PhoneBook.Contacts[0].setPhoneNumber("123-456-7890");
    PhoneBook.Contacts[0].setDarkestSecret("Afraid of the dark");

    std::cout << "Contact 1 details:" << std::endl;

    PhoneBook.Contacts[0].displayContact();

    return 0;
}
