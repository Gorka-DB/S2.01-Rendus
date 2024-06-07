// LecteurPresentation.h
#ifndef LECTEURPRESENTATION_H
#define LECTEURPRESENTATION_H

#include <QObject>
#include <QTimer>
#include "lecteur.h"
#include "lecteurvue.h"

struct InfosDiaporama {
    unsigned int id;    // identifiant du diaporama dans la BD
    string titre;       // titre du diaporama
    unsigned int vitesseDefilement;
};
typedef vector<InfosDiaporama> Diaporamas;

class lecteurvue; // Déclaration anticipée

class LecteurPresentation : public QObject {
    Q_OBJECT

private:
    lecteurvue* laVue; // la vue associée à cette presentation
    Lecteur* leLecteur; // le modèle associé à cette présentation
    Diaporamas listeDeDiaporamas; // liste des diaporamas disponibles
    QTimer* leTimer; // timer pour le défilement automatique des images

public:
    LecteurPresentation();
    Lecteur* getLecteur(); // getter pour le modèle
    lecteurvue* getVue(); // getter pour la vue
    ImageDansDiaporama* getImageCourante(); // getter pour l'image courante
    Diaporama* getDiapoCourant(); // getter pour le diaporama courant
    void setLecteur(Lecteur*); // setter pour le modèle
    void setVue(lecteurvue*); // setter pour la vue

    // Méthodes de gestion des diaporamas
    void btnSuivantClicked();
    void btnPrecedentClicked();
    void btnLancerClicked();
    void btnArreterClicked();
    void actionAProposDeTriggered();
    void actionChargerDiaporamaTriggered(unsigned int);
    void actionModifierVitesseTriggered(unsigned int);
    void actionEnleverDiaporamaTriggered();
    void actionQuitterTriggered();
    void actionFiltrerTriggered();

public slots:
    void autoSuivant(); // slot pour le défilement automatique des images
};

#endif // LECTEURPRESENTATION_H
