#include "contact.hpp"

// constructeur
Contact::Contact() {};

// setters
void Contact::setFirstName(const std::string& fn) { this->firstName = fn; }
void Contact::setLastName(const std::string& ln) { this->lastName = ln; }
void Contact::setNickname(const std::string& nn) { this->nickname = nn; }
void Contact::setPhoneNumber(const std::string& pn) { this->phoneNumber = pn; }
void Contact::setDarkestSecret(const std::string& ds) { this->darkestSecret = ds; }

void Contact::displayContact() const
{
    std::cout << "First Name: " << this->firstName << std::endl;
    std::cout << "Last Name: " << this->lastName << std::endl;
    std::cout << "Nickname: " << this->nickname << std::endl;
    std::cout << "Phone Number: " << this->phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << this->darkestSecret << std::endl;
}