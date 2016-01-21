TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    widget.cpp \
    openmessage.cpp

HEADERS += \
    factory.h \
    object.h \
    widget.h \
    message.h \
    openmessage.h

