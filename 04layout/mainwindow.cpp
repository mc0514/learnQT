#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSpinBox>
#include <QHBoxLayout>
#include <QSlider>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QWidget window;
    this->setWindowTitle("pls enter your number!");
    QSpinBox *spinBox =new QSpinBox(this);
    QSlider *slider=new QSlider(Qt::Horizontal,this);
    spinBox->setRange(0,130);
    slider->setRange(0,130);

    QObject::connect(slider,&QSlider::valueChanged,spinBox,&QSpinBox::setValue);
    void (QSpinBox::*spinBoxSignal)(int)=&QSpinBox::valueChanged;
    QObject::connect(spinBox,spinBoxSignal,slider,&QSlider::setValue);
    spinBox->setValue(35);

    QHBoxLayout *layout=new QHBoxLayout;
    layout->addWidget(spinBox);
    layout->addWidget(slider);
    this->setLayout(layout);
    //window.show();


}

MainWindow::~MainWindow()
{
    delete ui;
}
