#include <iostream>
#include "Contact.hpp"

int main() {
    Contact c1("Sara");
    Contact c2("Youssef", "0612345678");
    Contact c3("Amine", "0623456789", "amine@gmail.com");

    std::cout << "--- Contact 1 ---" << std::endl;
    c1.afficher();

    std::cout << "\n--- Contact 2 ---" << std::endl;
    c2.afficher();

    std::cout << "\n--- Contact 3 ---" << std::endl;
    c3.afficher();

    return 0;
}
