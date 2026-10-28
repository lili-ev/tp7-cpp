#include "Contact.hpp"
#include <iostream>

Contact::Contact(std::string nom) {
    this->nom = nom;
    telephone = "Non renseigne";
    email = "Non renseigne";
}

Contact::Contact(std::string nom, std::string telephone) {
    this->nom = nom;
    this->telephone = telephone;
    email = "Non renseigne";
}

Contact::Contact(std::string nom, std::string telephone, std::string email) {
    this->nom = nom;
    this->telephone = telephone;
    this->email = email;
}

void Contact::afficher() const {
    std::cout << "Nom : " << nom << std::endl;
    std::cout << "Telephone : " << telephone << std::endl;
    std::cout << "Email : " << email << std::endl;
}
