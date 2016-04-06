#-------------------------------------------------
#
# Project created by QtCreator 2016-03-30T10:47:27
#
#-------------------------------------------------

QT       += widgets xml

TARGET = BarcodeViewPlugin
TEMPLATE = lib

CONFIG += c++11

DEFINES += TPLUGIN_LIBRARY

#LIBS += /usr/local/lib/libzmq.dylib

INCLUDEPATH +=  ../ \
                ../common \
                ../../Util \
                ../../Interface \
                ../../Log

SOURCES +=  barcodeviewplugin.cpp \
            barcodeviewform.cpp \
            ../Common/uutbutton.cpp \
            ../../Util/util.cpp \
            ../../Util/message.cpp \
            ../../Log/qlog.cpp

HEADERS +=  barcodeviewplugin.h\
            barcodeviewform.h\
            ../Common/uutbutton.h \
            ../../Util/util.h \
            ../../Util/plugin_global.h \
            ../../Util/const.h \
            ../../Util/message.h \
            ../../Log/qlog.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

FORMS +=
