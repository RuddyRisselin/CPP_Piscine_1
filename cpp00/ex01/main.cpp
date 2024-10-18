#include "contact.hpp"
#include "phonebook.hpp"

int main()
{
    PhoneBook PhoneBook;

    std::string input = "";
    std::cout << "\nWelcome to Your PhoneBook \n";
    std::cout << "\nUse ADD to add a contact";
    std::cout << "\nUse SEARCH to search a contact";
    std::cout << "\nUse EXIT to exit\n";
    while (true)
    {
        std::cout << "> " << std::flush;
        if(!std::getline(std::cin, input))
        {
            std::cout << "\nInput stream closed. Exiting...\n";
            break;
        }
        if (input.empty())
            continue;       
        if (input.compare("ADD") == 0)
            PhoneBook.addContact();
        else if (input.compare("SEARCH") == 0)
        {
            PhoneBook.PrintContact();
            PhoneBook.SearchContact();
        }
        else if (input.compare("EXIT") == 0)
            break;
        else
            std::cout << "Unknown command. Please try again." << std::endl;
    }
    return (0);
}
