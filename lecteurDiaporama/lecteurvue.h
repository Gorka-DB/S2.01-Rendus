#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include <QDebug>

namespace Ui {
class lecteurvue;
}

class LecteurPresentation;
class lecteurvue : public QMainWindow
{
    Q_OBJECT

private:
    Ui::lecteurvue* ui;
    LecteurPresentation* presentation;

public:
    lecteurvue(QWidget *parent = nullptr);
    ~lecteurvue();
    //mise à jour de la vue
    void majInterface(QString, std::string, std::string, int);
    void setPresentation(LecteurPresentation*);
    LecteurPresentation* getPresentation();
    void initialisation();

private slots:

    void demander_btnSuivant_clicked();
    void demander_btnPrecedent_clicked();
    void demander_btnLancer_clicked();
    void demander_btnArreter_clicked();
    void demander_actionA_propos_de_triggered();
    void demander_actionCharger_diaporama_triggered();
    void demander_actionModifier_vitesse_triggered();
    void demander_actionEnlever_diaporama_triggered();
    void demander_actionQuitter_triggered();
    void demander_actionFiltrer_triggered();

};

#endif // LECTEURVUE_H
