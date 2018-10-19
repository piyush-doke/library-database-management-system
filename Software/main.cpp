#include "mainwindow.h"
#include <QApplication>
#include "./Library Management/handle.h"

Taskmanager allTask;


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
