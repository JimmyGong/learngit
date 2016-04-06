#-------------------------------------------------
#
# Project created by QtCreator 2016-04-01T10:51:32
#
#-------------------------------------------------

QT       += widgets xml

TARGET = LoopTestViewPlugin
TEMPLATE = lib

CONFIG +=   c++11

DEFINES += TPLUGIN_LIBRARY

INCLUDEPATH +=  ../ \
                ../common \
                ../../Util \
                ../../Interface \
                ../../Log

SOURCES += looptestviewplugin.cpp \
    looptestviewform.cpp


HEADERS += looptestviewplugin.h \
    looptestviewform.h


unix {
    target.path = /usr/lib
    INSTALLS += target
}
