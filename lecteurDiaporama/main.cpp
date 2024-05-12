#include <QApplication>
#include "lecteurvue.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    lecteurvue fenetrePrincipale; // Crée l'instance de votre vue principale
    fenetrePrincipale.show(); // Affiche la fenêtre principale

    return app.exec(); // Lance la boucle d'événements de l'application
}
