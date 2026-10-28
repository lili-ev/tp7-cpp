#include "Facture.hpp"
#include <iostream>

void Facture::ajouterArticle(std::string nom, float prixUnitaire) {
    Article a = {nom, prixUnitaire, 1, 20.0f};
    articles.push_back(a);
}

void Facture::ajouterArticle(std::string nom, float prixUnitaire, int quantite) {
    Article a = {nom, prixUnitaire, quantite, 20.0f};
    articles.push_back(a);
}

void Facture::ajouterArticle(std::string nom, float prixUnitaire, int quantite, float tauxTVA) {
    Article a = {nom, prixUnitaire, quantite, tauxTVA};
    articles.push_back(a);
}

void Facture::afficherTotal() const {
    float total = 0;

    for (int i = 0; i < articles.size(); i++) {
        float montantHT = articles[i].prixUnitaire * articles[i].quantite;
        float montantTTC = montantHT * (1 + articles[i].tauxTVA / 100.0f);

        total += montantTTC;
    }

    std::cout << "Total TTC : " << total << " DH" << std::endl;
}
