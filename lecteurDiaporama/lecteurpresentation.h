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
    lecteurvue* laVue;
    Lecteur* leLecteur;
    Diaporamas listeDeDiaporamas;
    QTimer* leTimer;

public:
    LecteurPresentation();
    Lecteur* getLecteur();
    lecteurvue* getVue();
    ImageDansDiaporama* getImageCourante();
    Diaporama* getDiapoCourant();
    void setLecteur(Lecteur*);
    void setVue(lecteurvue*);

    void btnSuivantClicked();
    void btnPrecedentClicked();
    void btnLancerClicked();
    void btnArreterClicked();
    void actionAProposDeTriggered();
    void actionChargerDiaporamaTriggered(unsigned int);
    void actionModifierVitesseTriggered();
    void actionEnleverDiaporamaTriggered();
    void actionQuitterTriggered();
    void actionFiltrerTriggered();
public slots:
    void autoSuivant();
};

#endif // LECTEURPRESENTATION_H
