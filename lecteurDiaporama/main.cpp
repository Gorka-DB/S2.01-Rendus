#include <QApplication>
#include "lecteurvue.h"
#include "lecteurpresentation.h"
#include "lecteur.h"

int main(int argc, char *argv[]) {
    QApplication application(argc, argv);

    Lecteur* lecteur = new Lecteur();
    lecteurvue vue;
    LecteurPresentation* presentation = new LecteurPresentation();
    presentation->setLecteur(lecteur);
    presentation->setVue(&vue);
    vue.setPresentation(presentation);



    vue.show();
    //vue.majInterface();
    return application.exec();
}
