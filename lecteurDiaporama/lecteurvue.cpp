#include "lecteurvue.h"
#include "ui_lecteurvue.h"
#include "lecteurpresentation.h"
#include <QInputDialog>
#include <QTimer>

lecteurvue::lecteurvue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::lecteurvue)
{
    ui->setupUi(this);
    // Connecter les signaux des éléments UI aux slots du présentateur
    connect(ui->btnSuivant, SIGNAL(clicked()), this, SLOT(demander_btnSuivant_clicked()));
    connect(ui->btnPrecedent, SIGNAL(clicked()), this, SLOT(demander_btnPrecedent_clicked()));
    connect(ui->btnLancer, SIGNAL(clicked()), this, SLOT(demander_btnLancer_clicked()));
    connect(ui->btnArreter, SIGNAL(clicked()), this, SLOT(demander_btnArreter_clicked()));

    // Connecter les actions du menu
    connect(ui->actionA_propos_de, SIGNAL(triggered()), this, SLOT(demander_actionA_propos_de_triggered()));
    connect(ui->actionCharger_diaporama, SIGNAL(triggered()), this, SLOT(demander_actionCharger_diaporama_triggered()));
    connect(ui->actionEnlever_diaporama, SIGNAL(triggered()), this, SLOT(demander_actionEnlever_diaporama_triggered()));
    connect(ui->actionModifier_vitesse, SIGNAL(triggered()), this, SLOT(demander_actionModifier_vitesse_triggered()));
    connect(ui->actionQuitter, SIGNAL(triggered()), this, SLOT(demander_actionQuitter_triggered()));
    connect(ui->actionFiltrer, SIGNAL(triggered()), this, SLOT(demander_actionFiltrer_triggered()));

    ui->btnArreter->setEnabled(false);

}

lecteurvue::~lecteurvue()
{
    delete ui;
    delete presentation;
}

LecteurPresentation *lecteurvue::getPresentation()
{
    return this->presentation;
}

void lecteurvue::initialisation()
{

}

void lecteurvue::demander_btnSuivant_clicked()
{
    presentation->btnSuivantClicked();
}

void lecteurvue::demander_btnPrecedent_clicked()
{
    presentation->btnPrecedentClicked();
}

void lecteurvue::demander_btnLancer_clicked()
{
    ui->btnLancer->setEnabled(false);
    ui->btnArreter->setEnabled(true);
    presentation->btnLancerClicked();
}

void lecteurvue::demander_btnArreter_clicked()
{
    ui->btnLancer->setEnabled(true);
    ui->btnArreter->setEnabled(false);
    presentation->btnArreterClicked();
}

void lecteurvue::demander_actionA_propos_de_triggered()
{
    presentation->actionAProposDeTriggered();
}

void lecteurvue::demander_actionCharger_diaporama_triggered()
{
    unsigned int numDiapoChoisi = QInputDialog::getInt(this, tr("QInputDialog::getText()"),tr("Numero du diaporama:"), QLineEdit::Normal);
    presentation->actionChargerDiaporamaTriggered(numDiapoChoisi);
}

void lecteurvue::demander_actionModifier_vitesse_triggered()
{

    unsigned int vitesse = QInputDialog::getInt(this, tr("QInputDialog::getText()"),tr("Vitesse de défilement (en sec.) :"), QLineEdit::Normal);
    presentation->actionModifierVitesseTriggered(vitesse);
}

void lecteurvue::demander_actionEnlever_diaporama_triggered()
{
    presentation->actionEnleverDiaporamaTriggered();
}

void lecteurvue::demander_actionQuitter_triggered()
{
    presentation->actionQuitterTriggered();
}

void lecteurvue::demander_actionFiltrer_triggered()
{

}

void lecteurvue::majInterface(QString chemin, string titre, string categorie, int rang)
{
    ui->label->setPixmap(chemin);
    ui->titreImage->setText(QString::fromStdString(titre));
    ui->categorieImage->setText(QString::fromStdString(categorie));
    ui->rangImage->setText(QString::number(rang));
}
//


void lecteurvue::setPresentation(LecteurPresentation* p)
{
    presentation = p;
}



