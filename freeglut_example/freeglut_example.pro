TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle
CONFIG -= qt
QT += opengl

LIBS += -lglut -lGL

SOURCES += \
        main.cpp \
        rectangle.cpp

INCLUDEPATH += -L/usr/lib/

HEADERS += \
    rectangle.h
