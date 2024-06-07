#ifndef IMAGE_DANS_DIAPORAMA_H
#define IMAGE_DANS_DIAPORAMA_H
#include <iostream>
using namespace std;

//une image qui sera insérée dans un vecteur d'images qui sera lui-même inséré dans un diaporama
class ImageDansDiaporama
{
private:
    unsigned int rangDansDiaporama;         /* rang de l'image au sein du diaporama
                                   auquel l'image est associée */
    string titre;              // intitulé de l'image
    string categorie;          // catégorie de l'image (personne, animal, objet)
    string chemin;             // chemin complet vers le dossier où se trouve l'image

public:
    ImageDansDiaporama(unsigned int pRangDansDiaporama=0,
                       string pCategorie="", string pTitre="", string pChemin = "");
    ~ImageDansDiaporama();
    unsigned int getRangDansDiaporama() const; //getters
    string getCategorie() const;
    string getTitre() const;
    string getChemin() const;

    void afficher();    // affiche tous les champs de l'image

    void setRangDansDiaporama (unsigned int pRangDansDiaporama); //setters
    void setTitre (string pTitre);
    void setCategorie (string pCategorie);
    void setChemin (string pChemin);

};

#endif // IMAGE_DANS_DIAPORAMA_H
