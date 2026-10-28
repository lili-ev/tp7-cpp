#ifndef COMPTEBANCAIRE_HPP
#define COMPTEBANCAIRE_HPP

class CompteBancaire {
private:
    double solde;
    int codeSecurite;

public:
    CompteBancaire();
    CompteBancaire(double soldeInitial);

    void afficherSolde() const;

    void retrait(double montant);
    void retrait(double montant, int code);
};

#endif
