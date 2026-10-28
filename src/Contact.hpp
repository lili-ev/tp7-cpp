#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
private:
    std::string nom;
    std::string telephone;
    std::string email;

public:
    Contact(std::string nom);
    Contact(std::string nom, std::string telephone);
    Contact(std::string nom, std::string telephone, std::string email);

    void afficher() const;
};

#endif

