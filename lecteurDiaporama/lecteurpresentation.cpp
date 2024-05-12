// LecteurPresentation.cpp
#include "Lecteurpresentation.h"
#include "lecteurvue.h"
#include <QDebug>

LecteurPresentation::LecteurPresentation(lecteurvue* vue) : vue(vue) {}

void LecteurPresentation::btnSuivantClicked() {
    qDebug() << "Passage à l'image suivante";
    // logique pour passer à l'image suivante
}

void LecteurPresentation::btnPrecedentClicked() {
    qDebug() << "Passage à l'image precedente";
    // logique pour passer à l'image suivante
}

void LecteurPresentation::btnLancerClicked() {
    qDebug() << "Passage au mode auto : debut de la lecture";
    // logique pour passer à l'image suivante
}

void LecteurPresentation::btnArreterClicked() {
    qDebug() << "Passage au mode manuel : fin de la lecture";
    // logique pour passer à l'image suivante
}
void LecteurPresentation::actionAProposDeTriggered() {
    qDebug() << "Affichage des informations sur l'application.";
    // Afficher une boîte de dialogue avec les informations
}

void LecteurPresentation::actionChargerDiaporamaTriggered() {
    qDebug() << "Chargement d'un diaporama.";
    //
}

void LecteurPresentation::actionModifierVitesseTriggered() {
    qDebug() << "Changement de la vitesse de lecture.";
    // Ouvrir une boîte de dialogue pour sélectionner la nouvelle vitesse
}

void LecteurPresentation::actionQuitterTriggered() {
    qDebug() << "Fermeture de l'app";
}

void LecteurPresentation::actionEnleverDiaporamaTriggered() {
    qDebug() << "Ejection du diaporama";
}

void LecteurPresentation::actionFiltrerTriggered() {
    qDebug() << "Filtrage";
}
