#-------------------------------------------------
#
# Project created by QtCreator 2014-04-14T22:17:47
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Add-Salt-Pepper-Noise
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp

INCLUDEPATH += /usr/include/opencv2

LIBS += -L/usr/lib
LIBS += -lopencv_core
LIBS += -lopencv_imgproc
LIBS += -lopencv_highgui
