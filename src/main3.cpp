#include <iostream>
#include "CompteBancaire.hpp"

int main() {
    CompteBancaire c1;
    CompteBancaire c2(1000);

    std::cout << "--- Compte 1 ---" << std::endl;
    c1.afficherSolde();

    std::cout << "\n--- Compte 2 ---" << std::endl;
    c2.afficherSolde();

    std::cout << "\nRetrait de 200 DH sans code :" << std::endl;
    c2.retrait(200);
    c2.afficherSolde();

    std::cout << "\nRetrait de 100 DH avec un mauvais code :" << std::endl;
    c2.retrait(100, 1111);
    c2.afficherSolde();

    std::cout << "\nRetrait de 100 DH avec le bon code :" << std::endl;
    c2.retrait(100, 1234);
    c2.afficherSolde();

    return 0;
}
