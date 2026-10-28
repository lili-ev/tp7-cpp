#include "CompteBancaire.hpp"
#include <iostream>

CompteBancaire::CompteBancaire() {
    solde = 0;
    codeSecurite = 1234;
}

CompteBancaire::CompteBancaire(double soldeInitial) {
    if (soldeInitial >= 0) {
        solde = soldeInitial;
    } else {
        solde = 0;
    }

    codeSecurite = 1234;
}

void CompteBancaire::afficherSolde() const {
    std::cout << "Solde actuel : " << solde << " DH" << std::endl;
}

void CompteBancaire::retrait(double montant) {
    if (montant <= 0) {
        std::cout << "Erreur : montant invalide." << std::endl;
    } else if (montant > solde) {
        std::cout << "Erreur : solde insuffisant." << std::endl;
    } else {
        solde -= montant;
        std::cout << "Retrait effectue avec succes." << std::endl;
    }
}

void CompteBancaire::retrait(double montant, int code) {
    if (code != codeSecurite) {
        std::cout << "Erreur : code de securite incorrect." << std::endl;
    } else {
        retrait(montant);
    }
}
