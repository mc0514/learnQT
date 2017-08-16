#include "mainwindow.h"
#include <QApplication>
#include <QPushButton>
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QPushButton button("quit");
    //QObject::connect(&button,&QPushButton::clicked,&QApplication::quit);
    QObject::connect(&button,&QPushButton::clicked,[](bool){//lambda
        qDebug()<<"You clicked me!";
    });
    MainWindow w;
    w.show();
    button.show();

    return a.exec();
}
