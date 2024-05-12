#include "lecteurvue.h"
#include "ui_lecteurvue.h"
#include "lecteurpresentation.h"

lecteurvue::lecteurvue(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::lecteurvue),
    presentation(new LecteurPresentation(this))
{
    ui->setupUi(this);
    // Connecter les signaux des éléments UI aux slots du présentateur
    connect(ui->btnSuivant, &QPushButton::clicked, presentation, &LecteurPresentation::btnSuivantClicked);
    connect(ui->btnPrecedent, &QPushButton::clicked, presentation, &LecteurPresentation::btnPrecedentClicked);
    connect(ui->btnLancer, &QPushButton::clicked, presentation, &LecteurPresentation::btnLancerClicked);
    connect(ui->btnArreter, &QPushButton::clicked, presentation, &LecteurPresentation::btnArreterClicked);

    // Connecter les actions du menu
    connect(ui->actionA_propos_de, &QAction::triggered, presentation, &LecteurPresentation::actionAProposDeTriggered);
    connect(ui->actionCharger_diaporama, &QAction::triggered, presentation, &LecteurPresentation::actionChargerDiaporamaTriggered);
    connect(ui->actionEnlever_diaporama, &QAction::triggered, presentation, &LecteurPresentation::actionEnleverDiaporamaTriggered);
    connect(ui->actionModifier_vitesse, &QAction::triggered, presentation, &LecteurPresentation::actionModifierVitesseTriggered);
    connect(ui->actionQuitter, &QAction::triggered, presentation, &LecteurPresentation::actionQuitterTriggered);
    connect(ui->actionFiltrer, &QAction::triggered, presentation, &LecteurPresentation::actionFiltrerTriggered);
}

lecteurvue::~lecteurvue()
{
    delete ui;
    delete presentation;
}

