QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

LIBS += -L../Cube/debug -lcube
LIBS += -L../Parallelepiped/debug -lparallelepiped
LIBS += -L../Tetrahedron/debug -ltetrahedron

SOURCES += \
    WorkspaceWindow.cpp \
    main.cpp \
    MainWindow.cpp

HEADERS += \
    MainWindow.h \
    WorkspaceWindow.h

FORMS += \
    MainWindow.ui \
    WorkspaceWindow.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
