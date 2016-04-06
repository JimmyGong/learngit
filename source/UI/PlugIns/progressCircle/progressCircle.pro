#-------------------------------------------------
#
# Project created by QtCreator 2016-04-05T17:25:35
#
#-------------------------------------------------

QT       += widgets

TARGET = progressCircle
TEMPLATE = lib

DEFINES += PROGRESSCIRCLE_LIBRARY

SOURCES += progresscircle.cpp \
    dialog.cpp \
    main.cpp

HEADERS += progresscircle.h\
    dialog.h


unix {
    target.path = /usr/lib
    INSTALLS += target
}

FORMS += \
    dialog.ui
