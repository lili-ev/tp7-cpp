#include "Facture.hpp"

int main() {
    Facture f;

    f.ajouterArticle("Stylo", 5.0f);
    f.ajouterArticle("Cahier", 20.0f, 3);
    f.ajouterArticle("Ordinateur", 5000.0f, 1, 10.0f);

    f.afficherTotal();

    return 0;
}
