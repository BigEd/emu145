#-------------------------------------------------
#
# Project created by QtCreator 2012-01-02T22:18:10
#
#-------------------------------------------------

QT       += core gui

TARGET = pmkemu
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    cmcu13.cpp \
    cmem.cpp \
    cdebugdlg.cpp

HEADERS  += mainwindow.h \
    cmcu13.h \
    cmem.h \
    ucommands.h \
    cdebugdlg.h \
    synchro.h \
    mcommands.h

FORMS    += mainwindow.ui \
    cdebugdlg.ui
