// LecteurPresentation.cpp
#include "Lecteurpresentation.h"
#include "lecteurvue.h"
#include "lecteur.h"
#include <QDebug>
#include <QCoreApplication>
#include <QMessageBox>
#include <QTimer>

LecteurPresentation::LecteurPresentation(){
    InfosDiaporama infosACharger;
    // Diaporama de Pantxika
    infosACharger.id = 1;
    infosACharger.titre = "Diaporama Pantxika";
    infosACharger.vitesseDefilement = 2;
    listeDeDiaporamas.push_back(infosACharger);

    // Diaporama de Thierry
    infosACharger.id = 2;
    infosACharger.titre = "Diaporama Thierry";
    infosACharger.vitesseDefilement = 4;
    listeDeDiaporamas.push_back(infosACharger);

    // Diaporama de Yann
    infosACharger.id = 3;
    infosACharger.titre = "Diaporama Yann";
    infosACharger.vitesseDefilement = 2;
    listeDeDiaporamas.push_back(infosACharger);

    // Diaporama de Manu
    infosACharger.id = 4;
    infosACharger.titre = "Diaporama Manu";
    infosACharger.vitesseDefilement = 1;
    listeDeDiaporamas.push_back(infosACharger);

    leTimer = new QTimer(this);
    connect(leTimer, SIGNAL(timeout()), this, SLOT(autoSuivant()));
}



Lecteur *LecteurPresentation::getLecteur()
{
    return leLecteur;
}

lecteurvue *LecteurPresentation::getVue()
{
    return laVue;
}

ImageDansDiaporama* LecteurPresentation::getImageCourante(){
    return leLecteur->getDiaporama()->getImageCourante();
}

Diaporama *LecteurPresentation::getDiapoCourant()
{
    return leLecteur->getDiaporama();
}

void LecteurPresentation::setLecteur(Lecteur* unLecteur){
    leLecteur = unLecteur;
}

void LecteurPresentation::setVue(lecteurvue* uneVue){
    laVue = uneVue;
}

void LecteurPresentation::btnSuivantClicked() {
    //passer à l'image suivante si le modele existe
    if (leLecteur != nullptr)
    {
        leLecteur->avancer();
        laVue->majInterface(QString::fromStdString(getLecteur()->getImageCourante()->getChemin()), getLecteur()->getImageCourante()->getTitre(), getLecteur()->getImageCourante()->getCategorie(), getLecteur()->getImageCourante()->getRangDansDiaporama());
        qDebug() << "Passage à l'image suivante";
    }
}

void LecteurPresentation::btnPrecedentClicked() {
    //passer à l'image précédente si le modele existe
    if (leLecteur != nullptr)
    {
        leLecteur->reculer();
        laVue->majInterface(QString::fromStdString(getLecteur()->getImageCourante()->getChemin()), getLecteur()->getImageCourante()->getTitre(), getLecteur()->getImageCourante()->getCategorie(), getLecteur()->getImageCourante()->getRangDansDiaporama());
        qDebug() << "Passage à l'image précédente";
    }
}


void LecteurPresentation::btnLancerClicked() {
    qDebug() << "Passage au mode auto : debut de la lecture";
    //logique pour verif si un diapo est charge et si il n'est pas deja en mode auto
    if(leLecteur->lecteurVide() == false && leLecteur->getEtat() == m){
        leLecteur->setEtat(a);
        int intervalle = leLecteur->getDiaporama()->getVitesseDefilement()*1000;
        qDebug() << intervalle << Qt::endl;
        leTimer->start(intervalle);
    }
}

void LecteurPresentation::btnArreterClicked() {
    qDebug() << "Passage au mode manuel : fin de la lecture";
    if(leLecteur->lecteurVide() == false && leLecteur->getEtat() == a){
        leLecteur->setEtat(m);
        leTimer->stop();
    }
    // logique pour passer à l'image suivante
}
void LecteurPresentation::actionAProposDeTriggered() {
    qDebug() << "Affichage des informations sur l'application.";
    QMessageBox::about(laVue, "A propos de cette application","Version: 3.0 MVP \nDate de création: 05/2024\nAuteurs: DALMAYRAC Gorka / CAMPISTRON Julian");
}

void LecteurPresentation::actionChargerDiaporamaTriggered(unsigned int num) {
    qDebug() << "Chargement d'un diaporama.";
    if (leLecteur->getDiaporama() != nullptr)
    {
        delete leLecteur->getDiaporama();
    }
    qDebug() << listeDeDiaporamas.size();
    for (unsigned int i = 0; i < listeDeDiaporamas.size(); i++)
    {

        if (listeDeDiaporamas[i].id == num)
        {
            leLecteur->changerDiaporama(listeDeDiaporamas[i].id, listeDeDiaporamas[i].titre, listeDeDiaporamas[i].vitesseDefilement);
        }

    }
    laVue->majInterface(QString::fromStdString(getLecteur()->getDiaporama()->getImageCourante()->getChemin()), getLecteur()->getDiaporama()->getImageCourante()->getTitre(), getLecteur()->getDiaporama()->getImageCourante()->getCategorie(), getLecteur()->getDiaporama()->getImageCourante()->getRangDansDiaporama());

}


void LecteurPresentation::actionModifierVitesseTriggered(unsigned int v) {
    qDebug() << "Changement de la vitesse de lecture.";
    // Ouvrir une boîte de dialogue pour sélectionner la nouvelle vitesse
    leLecteur->getDiaporama()->setVitesseDefilement(v);

}

void LecteurPresentation::actionQuitterTriggered() {
    qDebug() << "Fermeture de l'app";
    QCoreApplication::quit();
}

void LecteurPresentation::actionEnleverDiaporamaTriggered() {
    qDebug() << "Ejection du diaporama";
    if (leLecteur->getDiaporama() != nullptr)
    {
        delete leLecteur->getDiaporama();
        leLecteur->viderLecteur();
        laVue->majInterface("Chemin", "Titre", "Categorie", 0);
    }
}

void LecteurPresentation::actionFiltrerTriggered() {
    qDebug() << "Filtrage";
}


void LecteurPresentation::autoSuivant(){
    btnSuivantClicked();
}
