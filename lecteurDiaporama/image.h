#ifndef IMAGE_H
#define IMAGE_H
#include <iostream>
using namespace std;

class Image {
private:
    string titre;
    string categorie;
    string chemin;

public:
    Image(string pTitre = "vide", string pCategorie = "vide", string pChemin = "C:\\cartesDisney\\vide.gif");

    void setTitre(string pTitre);
    void setCategorie(string pCategorie);
    void setChemin(string pChemin);
    
    string getTitre();
    string getCategorie();
    string getChemin();

    void afficher();

};

#endif // IMAGE_H
