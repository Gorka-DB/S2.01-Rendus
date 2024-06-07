#ifndef DIAPORAMA_H
#define DIAPORAMA_H
#include <vector>
#include "imageDansDiaporama.h"


typedef vector<ImageDansDiaporama*> ImagesDiaporama; // collection de pointeurs vers les images de ce
                                                     // diaporama (= pteurs vers objets de type ImageDansDiaporama)

class Diaporama //diaporama contenant une collection d'images (vecteur de pointeurs d'images)
{
private:
    unsigned int id;                // identifiant du diaporama dans la Base de données
    string titre ;                  // titre du diaporama
    unsigned int vitesseDefilement; // vitesse de défilement des images du diaporama
    unsigned int posImageCourante;    // position de l'image courante du diaporama
    ImagesDiaporama images;         // vecteur de pointeurs sur les objets ImageDansDiaporama de ce diaporama
    void trierParRangCroissant(); // trie les images du diaporama par ordre de rang croissant

public:
    Diaporama(); // constructeur par défaut
    ~Diaporama();
    unsigned int getId() const; //getter pour id
    string getTitre() const;  //getter pour titre
    int getVitesseDefilement() const;  //getter pour vitesseDefilement
    ImagesDiaporama getImages() const;  //getter pour images
    ImageDansDiaporama* getImageCourante() const;  //getter pour image courante
    unsigned int getPosImageCourante() const;  //getter pour posImageCourante


    unsigned int nbImages() const;  // nbre de pointeurs d'images contenus dans diaporama

    void setId(unsigned int pId);  //setter pour id
    void setTitre(string pTitre);  //setter pour titre
    void setVitesseDefilement(unsigned int pVitesseDefilement);  //setter pour vitesseDefilement
    void setImages(const ImagesDiaporama& pImages);  //setter pour images
    void setPosImageCourante(int pos);  //setter pour posImageCourante

    void ajouterImageEnFin(ImageDansDiaporama* pImage);     // ajoute une image au diaporama (en fin de l'attribut images)
    void enleverImageEnFin();   // enlève la dernière image du diaporama, et delete l'objet image enlevé
    void vider();       // enlève toutes les images du diaporama, et delete chaque objet enlevé
    void charger();     // chargement, dans l'attribut images, des images associées au diaporama courant (d'attribut id).


};

#endif // DIAPORAMA_H
