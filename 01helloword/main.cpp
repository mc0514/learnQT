#include "mainwindow.h"
#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel label("Hello, world");
    label.show();
    MainWindow w;
    w.show();

    return a.exec();
}
