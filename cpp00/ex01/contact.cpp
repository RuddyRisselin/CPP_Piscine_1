#include "contact.hpp"

// constructeur
Contact::Contact() {};

// setters
void Contact::setFirstName(const std::string& fn) { this->firstName = fn; }
void Contact::setLastName(const std::string& ln) { this->lastName = ln; }
void Contact::setNickname(const std::string& nn) { this->nickname = nn; }
void Contact::setPhoneNumber(const std::string& pn) { this->phoneNumber = pn; }
void Contact::setDarkestSecret(const std::string& ds) { this->darkestSecret = ds; }

std::string Contact::GetInput(std::string str)
{
    std::string input;
    int valid = 0;
    while (!valid)
    {
        std::cout << str << std::flush;
        std::getline(std::cin, input);
        if (std::cin.good() && !input.empty())
            valid = 1;
        else
        {
            std::cin.clear();
            std::cout << "Invalid input; please try again.\n";
        }
    }
    return (input);
}
bool Contact::isEmpty() {
        return Contact::firstName.empty() && Contact::lastName.empty() && Contact::nickname.empty() && Contact::phoneNumber.empty() && Contact::darkestSecret.empty();
}

void Contact::setIndex(int i){
    Contact::index = i;
}

std::string Contact::PrintLen(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void Contact::init()
{
    std::cin.ignore();
    Contact::firstName = GetInput("Please enter you first name: ");
    Contact::lastName = GetInput("Please enter you last name: ");
    Contact::nickname = GetInput("Please enter you nickname: ");
    Contact::phoneNumber = GetInput("Please enter you phone number: ");
    Contact::darkestSecret = GetInput("Please enter you darkest secret: ");
    std::cout << std::endl;
}

void Contact::Layout(int index)
{
        if (Contact::firstName.empty() || Contact::lastName.empty() || Contact::nickname.empty())
        return ;
    std::cout << "|" << std::setw(10) << index << std::flush;
    std::cout << "|" << std::setw(10) << Contact::PrintLen(Contact::firstName) << std::flush;
    std::cout << "|" << std::setw(10) << Contact::PrintLen(Contact::lastName) << std::flush;
    std::cout << "|" << std::setw(10) << Contact::PrintLen(Contact::nickname) << std::flush;
    std::cout << "|\n";
}

void Contact::displayContact() const
{ 
    std::cout << "First Name: " << this->firstName << std::endl;
    std::cout << "Last Name: " << this->lastName << std::endl;
    std::cout << "Nickname: " << this->nickname << std::endl;
    std::cout << "Phone Number: " << this->phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << this->darkestSecret << std::endl;
}