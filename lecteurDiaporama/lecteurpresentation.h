// LecteurPresentation.h
#ifndef LECTEURPRESENTATION_H
#define LECTEURPRESENTATION_H

#include <QObject>

class lecteurvue; // Déclaration anticipée

class LecteurPresentation : public QObject {
    Q_OBJECT

private:
    lecteurvue* vue;

public:
    LecteurPresentation(lecteurvue* vue);

public slots:
    void btnSuivantClicked();
    void btnPrecedentClicked();
    void btnLancerClicked();
    void btnArreterClicked();
    void actionAProposDeTriggered();
    void actionChargerDiaporamaTriggered();
    void actionModifierVitesseTriggered();
    void actionEnleverDiaporamaTriggered();
    void actionQuitterTriggered();
    void actionFiltrerTriggered();

};

#endif // LECTEURPRESENTATION_H
