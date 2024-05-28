QT += core gui
QT += widgets
CONFIG += console c++17

SOURCES += \
        diaporama.cpp \
        imageDansDiaporama.cpp \
        lecteur.cpp \
        lecteurpresentation.cpp \
        lecteurvue.cpp \
        main.cpp

HEADERS += \
    diaporama.h \
    imageDansDiaporama.h \
    lecteur.h \
    lecteurpresentation.h \
    lecteurvue.h

FORMS += \
    lecteurvue.ui

RESOURCES += \
    images.qrc
