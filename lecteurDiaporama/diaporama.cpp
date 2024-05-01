#include "diaporama.h"

Diaporama::Diaporama(string pTitre, unsigned int pVitesseDefilement) : titreDiaporama(pTitre), vitesseDefilement(pVitesseDefilement){}

void Diaporama::vider() {
    this->ImagesDuDiaporama.clear();
    this->ImagesDuDiaporama.push_back(Image());
    this->titreDiaporama = "vide";
}

void Diaporama::setVitesseDefilement(unsigned int pVitesseDefilement)
{
    while(true)
    {
        if (pVitesseDefilement < 1){
            cout << "La vitesse de défilement doit être supérieure à 0";
        }
        else{
            this->vitesseDefilement = pVitesseDefilement;
            break;
        }
    };
}
    
void Diaporama::setTitreDiaporama(string pTitre)
{
    (*this).titreDiaporama = pTitre;
}

string Diaporama::getTitreDiaporama(){
    return (*this).titreDiaporama;
}

int Diaporama::getVitesseDefilement(){
    return (*this).vitesseDefilement;
}

int Diaporama::getTailleDiaporama(){
    return (*this).ImagesDuDiaporama.size();
}

int Diaporama::getPosImageCourante(){
    return (*this).posImageCourante;
}

void Diaporama::ajouterImage(Image image)
{
    ImagesDuDiaporama.push_back(image);
    // ImagesDuDiaporama.size() - 1 -> position de l'image
}


void Diaporama::afficherImageCouranteDiaporama()
{
    ImagesDuDiaporama[posImageCourante].afficher();
}

void Diaporama::avancerImageDiaporama()
{
    if (posImageCourante < ImagesDuDiaporama.size() - 1)
        posImageCourante++;
    else
        posImageCourante = 0;
}

void Diaporama::reculerImageDiaporama()
{
    if (posImageCourante > 0)
        posImageCourante--;
    else
        posImageCourante = ImagesDuDiaporama.size() - 1;
}


