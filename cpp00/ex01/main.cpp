#include "contact.hpp"
#include "phonebook.hpp"

int main()
{
    PhoneBook PhoneBook;

    std::string input = "";
    std::cout << "\nWelcome to Your PhoneBook \n";
    while (input.compare("EXIT") != 0)
    {
        if (input.compare("ADD") == 0)
            PhoneBook.addContact();
        if (input.compare("SEARCH") == 0) {
            PhoneBook.PrintContact();
            PhoneBook.SearchContact();
        }
        std::cout << "> " << std::flush;
        std::cin >> input;
    }

    return (0);
}
