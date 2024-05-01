#ifndef DIAPORAMA_H
#define DIAPORAMA_H
#include "image.h"
#include <string>
#include <vector>
using namespace std;



class Diaporama {
    private:
        string titreDiaporama;
        unsigned int vitesseDefilement;
        vector<Image> ImagesDuDiaporama;
        int posImageCourante = 0;

    public:
        Diaporama(string pTitre = " ", unsigned int pVitesseDefilement = 1);

        void vider();
        void setVitesseDefilement(unsigned int pVitesseDefilement);
        void setTitreDiaporama(string pTitre);

        string getTitreDiaporama();
        int getVitesseDefilement();

        int getTailleDiaporama();

        int getPosImageCourante();

        void ajouterImage(Image image);
        
        void afficherImageCouranteDiaporama();

        void avancerImageDiaporama();
        void reculerImageDiaporama();
};


#endif // DIAPORAMA_H
