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
    while (true)
    {
        std::cout << str << std::flush;
        if (!std::getline(std::cin, input))
        {
            if (std::cin.eof())
            {
                std::cerr << "\nInput stream closed (Ctrl+D detected).\n";
                std::exit(EXIT_FAILURE);
            }
            else
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input; please try again.\n";
            }
        }
        else if (!input.empty())
            return input;
        else
            std::cout << "Input cannot be empty; please try again.\n";
    }
}

bool Contact::isEmpty() {
        return this->firstName.empty() && this->lastName.empty() && this->nickname.empty() && this->phoneNumber.empty() && this->darkestSecret.empty();
}

void Contact::setIndex(int i){
    this->index = i;
}

std::string Contact::PrintLen(std::string str)
{
    if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void Contact::init()
{
    this->firstName = GetInput("Please enter you first name: ");
    this->lastName = GetInput("Please enter you last name: ");
    this->nickname = GetInput("Please enter you nickname: ");
    this->phoneNumber = GetInput("Please enter you phone number: ");
    this->darkestSecret = GetInput("Please enter you darkest secret: ");
    std::cout << std::endl;
}

void Contact::Layout(int index)
{
    if (this->firstName.empty() || this->lastName.empty() || this->nickname.empty())
        return ;
    std::cout << "|" << std::setw(10) << index << std::flush;
    std::cout << "|" << std::setw(10) << this->PrintLen(this->firstName) << std::flush;
    std::cout << "|" << std::setw(10) << this->PrintLen(this->lastName) << std::flush;
    std::cout << "|" << std::setw(10) << this->PrintLen(this->nickname) << std::flush;
    std::cout << "|\n";
}

void Contact::displayContact() const
{ 
    std::cout << "First Name: " << this->firstName << std::endl;
    std::cout << "Last Name: " << this->lastName << std::endl;
    std::cout << "Nickname: " << this->nickname << std::endl;
    std::cout << "Phone Number: " << this->phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << this->darkestSecret << std::endl;
    std::cin.ignore();
}