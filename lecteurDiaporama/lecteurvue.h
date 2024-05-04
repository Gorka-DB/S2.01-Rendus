#ifndef LECTEURVUE_H
#define LECTEURVUE_H

#include <QMainWindow>
#include <QDebug>

namespace Ui {
class lecteurvue;
}

class lecteurvue : public QMainWindow
{
    Q_OBJECT

private:
    Ui::lecteurvue *ui;

public:
    explicit lecteurvue(QWidget *parent = nullptr);
    ~lecteurvue();

public slots:

    void btnSuivant_clicked();
    void btnPrecedent_clicked();
    void btnLancer_clicked();
    void btnArreter_clicked();
    void actionA_propos_de_triggered();
    void actionCharger_diaporama_triggered();
    void actionModifier_vitesse_triggered();
    void actionEnlever_diaporama_triggered();
    void actionQuitter_triggered();
    void actionFiltrer_triggered();


};

#endif // LECTEURVUE_H
