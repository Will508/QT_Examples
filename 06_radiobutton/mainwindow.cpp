#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0, 0, 800, 480);

    radioButton1 = new QRadioButton(this);
    radioButton2 = new QRadioButton(this);

    radioButton1->setGeometry(300, 200, 100, 50);
    radioButton2->setGeometry(400, 200, 100, 50);

    radioButton1->setText("BUTTON 1");
    radioButton2->setText("BUTTON 2");

    radioButton1->setChecked(false);
    radioButton2->setChecked(true);
}

MainWindow::~MainWindow()
{
}
