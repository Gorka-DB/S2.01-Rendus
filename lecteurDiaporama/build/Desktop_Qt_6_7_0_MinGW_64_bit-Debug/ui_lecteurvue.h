/********************************************************************************
** Form generated from reading UI file 'lecteurvue.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LECTEURVUE_H
#define UI_LECTEURVUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_lecteurvue
{
public:
    QAction *actionCharger_diaporama;
    QAction *actionModifier_vitesse;
    QAction *actionEnlever_diaporama;
    QAction *actionQuitter;
    QAction *actionA_propos_de;
    QAction *actionFiltrer;
    QWidget *centralwidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnPrecedent;
    QPushButton *btnSuivant;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnLancer;
    QPushButton *btnArreter;
    QMenuBar *menubar;
    QMenu *menuParametres;
    QMenu *menuFichier;
    QMenu *menuAide;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *lecteurvue)
    {
        if (lecteurvue->objectName().isEmpty())
            lecteurvue->setObjectName("lecteurvue");
        lecteurvue->resize(1168, 659);
        actionCharger_diaporama = new QAction(lecteurvue);
        actionCharger_diaporama->setObjectName("actionCharger_diaporama");
        actionModifier_vitesse = new QAction(lecteurvue);
        actionModifier_vitesse->setObjectName("actionModifier_vitesse");
        actionEnlever_diaporama = new QAction(lecteurvue);
        actionEnlever_diaporama->setObjectName("actionEnlever_diaporama");
        actionQuitter = new QAction(lecteurvue);
        actionQuitter->setObjectName("actionQuitter");
        actionA_propos_de = new QAction(lecteurvue);
        actionA_propos_de->setObjectName("actionA_propos_de");
        actionFiltrer = new QAction(lecteurvue);
        actionFiltrer->setObjectName("actionFiltrer");
        centralwidget = new QWidget(lecteurvue);
        centralwidget->setObjectName("centralwidget");
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 10, 1131, 591));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");

        verticalLayout->addLayout(gridLayout);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        btnPrecedent = new QPushButton(verticalLayoutWidget);
        btnPrecedent->setObjectName("btnPrecedent");

        horizontalLayout->addWidget(btnPrecedent);

        btnSuivant = new QPushButton(verticalLayoutWidget);
        btnSuivant->setObjectName("btnSuivant");
        btnSuivant->setCheckable(false);

        horizontalLayout->addWidget(btnSuivant);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        btnLancer = new QPushButton(verticalLayoutWidget);
        btnLancer->setObjectName("btnLancer");

        horizontalLayout_2->addWidget(btnLancer);

        btnArreter = new QPushButton(verticalLayoutWidget);
        btnArreter->setObjectName("btnArreter");

        horizontalLayout_2->addWidget(btnArreter);


        verticalLayout->addLayout(horizontalLayout_2);

        lecteurvue->setCentralWidget(centralwidget);
        menubar = new QMenuBar(lecteurvue);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1168, 21));
        menuParametres = new QMenu(menubar);
        menuParametres->setObjectName("menuParametres");
        menuFichier = new QMenu(menubar);
        menuFichier->setObjectName("menuFichier");
        menuAide = new QMenu(menubar);
        menuAide->setObjectName("menuAide");
        lecteurvue->setMenuBar(menubar);
        statusbar = new QStatusBar(lecteurvue);
        statusbar->setObjectName("statusbar");
        lecteurvue->setStatusBar(statusbar);

        menubar->addAction(menuFichier->menuAction());
        menubar->addAction(menuParametres->menuAction());
        menubar->addAction(menuAide->menuAction());
        menuParametres->addAction(actionCharger_diaporama);
        menuParametres->addAction(actionEnlever_diaporama);
        menuParametres->addAction(actionModifier_vitesse);
        menuParametres->addAction(actionFiltrer);
        menuFichier->addAction(actionQuitter);
        menuAide->addAction(actionA_propos_de);

        retranslateUi(lecteurvue);

        QMetaObject::connectSlotsByName(lecteurvue);
    } // setupUi

    void retranslateUi(QMainWindow *lecteurvue)
    {
        lecteurvue->setWindowTitle(QCoreApplication::translate("lecteurvue", "MainWindow", nullptr));
        actionCharger_diaporama->setText(QCoreApplication::translate("lecteurvue", "Charger diaporama", nullptr));
        actionModifier_vitesse->setText(QCoreApplication::translate("lecteurvue", "Vitesse de d\303\251filement", nullptr));
        actionEnlever_diaporama->setText(QCoreApplication::translate("lecteurvue", "Enlever diaporama", nullptr));
        actionQuitter->setText(QCoreApplication::translate("lecteurvue", "Quitter", nullptr));
        actionA_propos_de->setText(QCoreApplication::translate("lecteurvue", "A propos de...", nullptr));
        actionFiltrer->setText(QCoreApplication::translate("lecteurvue", "Filtrer", nullptr));
        label->setText(QCoreApplication::translate("lecteurvue", "ImageDuDiaporama", nullptr));
        btnPrecedent->setText(QCoreApplication::translate("lecteurvue", "Pr\303\251c\303\251dent", nullptr));
        btnSuivant->setText(QCoreApplication::translate("lecteurvue", "Suivant", nullptr));
        btnLancer->setText(QCoreApplication::translate("lecteurvue", "Lancer diaporama", nullptr));
        btnArreter->setText(QCoreApplication::translate("lecteurvue", "Arreter diaporama", nullptr));
        menuParametres->setTitle(QCoreApplication::translate("lecteurvue", "Param\303\250tres", nullptr));
        menuFichier->setTitle(QCoreApplication::translate("lecteurvue", "Fichier", nullptr));
        menuAide->setTitle(QCoreApplication::translate("lecteurvue", "Aide", nullptr));
    } // retranslateUi

};

namespace Ui {
    class lecteurvue: public Ui_lecteurvue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LECTEURVUE_H
