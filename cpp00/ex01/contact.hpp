#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

public:
    // Constructeur
    Contact();

    // Méthodes pour afficher le contact
    void displayContact() const;

    // Mutateurs (setters)
    void setFirstName(const std::string& fn);
    void setLastName(const std::string& ln);
    void setNickname(const std::string& nn);
    void setPhoneNumber(const std::string& pn);
    void setDarkestSecret(const std::string& ds);
};

#endif
