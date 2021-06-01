QT -= gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = lib
DEFINES += staticlib

CONFIG += c++11

SOURCES += \
    Parallelepiped.cpp

HEADERS += \
    Parallelepiped.h

unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
