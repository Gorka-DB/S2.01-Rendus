#include "image.h"

Image::Image(string pTitre, string pCategorie, string pChemin) : titre(pTitre), categorie(pCategorie), chemin(pChemin){}

string Image::getCategorie()
{
    return (*this).categorie;
}

string Image::getTitre()
{
    return (*this).titre;
}

string Image::getChemin()
{
    return (*this).chemin;
}

void Image::afficher()
{
    cout << "titre: " << titre << ", categorie: " << categorie << ", chemin: "<< chemin << endl;
}


void Image::setTitre(string pTitre)
{
    (*this).titre = pTitre;
}
void Image::setCategorie(string pCategorie){
    (*this).categorie = pCategorie;
}
void Image::setChemin(string pChemin){
    (*this).chemin = pChemin;
}