QT -= gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TEMPLATE = lib
DEFINES += staticlib

CONFIG += c++11

SOURCES += \
    Tetrahedron.cpp

HEADERS += \
    Tetrahedron.h

unix {
    target.path = /usr/lib
}
!isEmpty(target.path): INSTALLS += target
