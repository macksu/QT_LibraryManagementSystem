QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

DESTDIR = $$PWD/../bin

include($$PWD/cell/cell.pri)
include($$PWD/lib/lib.pri)





DISTFILES += \
    res/logo.ico

FORMS += \
    cell_uersmgr.ui

HEADERS += \
    cell_uersmgr.h

SOURCES += \
    cell_uersmgr.cpp
