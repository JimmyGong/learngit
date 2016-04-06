#-------------------------------------------------
#
# Project created by QtCreator 2016-03-22T09:31:46
#
#-------------------------------------------------

QT       += widgets xml

TARGET = DutViewPlugin
TEMPLATE = lib

CONFIG += c++11

DEFINES += TPLUGIN_LIBRARY

LIBS += /usr/local/lib/libzmq.dylib#Added by Jimmy.G

INCLUDEPATH += ../ \
                ../common \
                ../../Util \
                ../../Interface \
                ../../Log \
                ../../ZmqCtrl \
                ../../ZmqCtrl/ZeroMQ/include \

SOURCES += dutviewplugin.cpp \
    dutviewform.cpp \
    ../../Log/qlog.cpp \
    dutviewconfigdlg.cpp \
    dutzmqrpc.cpp \
    ../../ZmqCtrl/zmqsocket.cpp \
    ../../ZmqCtrl/buffer.cpp \
    ../../Util/util.cpp

HEADERS += dutviewplugin.h\
    ../../Util/plugin_global.h \
    dutviewform.h \
    ../../Log/qlog.h \
    dutviewconfigdlg.h \
    dutzmqrpc.h \
    ../../ZmqCtrl/zmqsocket.h \
    ../../ZmqCtrl/buffer.h \
    ../../Util/util.h

unix {
    target.path = /usr/lib
    INSTALLS += target
}

FORMS +=
