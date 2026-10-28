#ifndef FACTURE_HPP
#define FACTURE_HPP

#include <string>
#include <vector>

class Facture {
private:
    struct Article {
        std::string nom;
        float prixUnitaire;
        int quantite;
        float tauxTVA;
    };

    std::vector<Article> articles;

public:
    void ajouterArticle(std::string nom, float prixUnitaire);
    void ajouterArticle(std::string nom, float prixUnitaire, int quantite);
    void ajouterArticle(std::string nom, float prixUnitaire, int quantite, float tauxTVA);

    void afficherTotal() const;
};

#endif
