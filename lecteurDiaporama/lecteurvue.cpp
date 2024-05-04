#include "lecteurvue.h"
#include "ui_lecteurvue.h"

lecteurvue::lecteurvue(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::lecteurvue)
{
    ui->setupUi(this);

    QObject::connect(ui->btnPrecedent, SIGNAL(clicked()), this, SLOT(btnPrecedent_clicked()));
    QObject::connect(ui->btnSuivant, SIGNAL(clicked()), this, SLOT(btnSuivant_clicked()));
    QObject::connect(ui->btnArreter, SIGNAL(clicked()), this, SLOT(btnArreter_clicked()));
    QObject::connect(ui->btnLancer, SIGNAL(clicked()), this, SLOT(btnLancer_clicked()));

    QObject::connect(ui->actionA_propos_de, SIGNAL(triggered()), this, SLOT(actionA_propos_de_triggered()));
    QObject::connect(ui->actionCharger_diaporama, SIGNAL(triggered()), this, SLOT(actionCharger_diaporama_triggered()));
    QObject::connect(ui->actionEnlever_diaporama, SIGNAL(triggered()), this, SLOT(actionEnlever_diaporama_triggered()));
    QObject::connect(ui->actionModifier_vitesse, SIGNAL(triggered()), this, SLOT(actionModifier_vitesse_triggered()));
    QObject::connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(actionQuitter_triggered()));
    QObject::connect(ui->actionFiltrer, SIGNAL(triggered()), this, SLOT(actionFiltrer_triggered()));

    this->setLayout(ui->verticalLayout);

}

lecteurvue::~lecteurvue()
{
    delete ui;
}

void lecteurvue::btnSuivant_clicked()
{
    qDebug() << "passage a l'image suivante" << Qt::endl;
}

void lecteurvue::btnPrecedent_clicked()
{
    qDebug() << "passage a l'image precedente" << Qt::endl;
}

void lecteurvue::btnLancer_clicked()
{
    qDebug() << "Demarrage de la lecture du diaporama, passage au mode Automatique" << Qt::endl;
}

void lecteurvue::btnArreter_clicked()
{
    qDebug() << "Arret de la lecture du diaporama, passage au mode manuel" << Qt::endl;
}

void lecteurvue::actionA_propos_de_triggered()
{
    qDebug() << "affichage des informations sur l'application ( auteurs et version )" << Qt::endl;
}

void lecteurvue::actionCharger_diaporama_triggered()
{
    qDebug() << "Chargement d'un diaporama" << Qt::endl;
}

void lecteurvue::actionModifier_vitesse_triggered()
{
    qDebug() << "Changement de la vitesse de lecture" << Qt::endl;
}

void lecteurvue::actionEnlever_diaporama_triggered(){
    //si le lecteur est en etat chagé
    qDebug() << "Dechargement d'un diaporama" << Qt::endl;

    //sinon
    //qDebug() << "Le Lecteur est deja vide" << Qt::endl;
}

void lecteurvue::actionQuitter_triggered()
{
    qDebug() << "fermeture du programme" << Qt::endl;
    QCoreApplication::quit();
}


void lecteurvue::actionFiltrer_triggered()
{
    qDebug() << "filtrage d'un diaporama" << Qt::endl;
}

