#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string.h>
#include <cctype>
#include <limits>
#include <cstdlib>

class Contact {
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;
    std::string index;

public:
    // Constructeur
    Contact();

    // Méthodes pour afficher le contact
    void displayContact() const;
    void init(void);
    std::string GetInput(std::string str);
    void Layout(int index);
    std::string PrintLen(std::string str);
    void setIndex(int i);
    bool isEmpty();

    // Mutateurs (setters)
    void setFirstName(const std::string& fn);
    void setLastName(const std::string& ln);
    void setNickname(const std::string& nn);
    void setPhoneNumber(const std::string& pn);
    void setDarkestSecret(const std::string& ds);
};

#endif
