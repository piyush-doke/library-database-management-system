#-------------------------------------------------
#
# Project created by QtCreator 2017-04-09T00:04:07
#
#-------------------------------------------------

QT       += core gui
QMAKE_CXXFLAGS += -std=c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Library
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    booksdatabase.cpp \
    studentsdatabase.cpp \
    issuebook.cpp \
    returnbook.cpp \
    confirmissuebook.cpp \
    listofbooks.cpp

HEADERS  += mainwindow.h \
    booksdatabase.h \
    studentsdatabase.h \
    issuebook.h \
    returnbook.h \
    confirmissuebook.h \
    listofbooks.h

FORMS    += mainwindow.ui \
    booksdatabase.ui \
    studentsdatabase.ui \
    issuebook.ui \
    returnbook.ui \
    confirmissuebook.ui \
    listofbooks.ui
