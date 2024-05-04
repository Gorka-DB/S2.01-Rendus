#include "lecteurvue.h"
#include <QApplication>


int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    lecteurvue lecteurvue0;
    lecteurvue0.show();
    return a.exec();
}
