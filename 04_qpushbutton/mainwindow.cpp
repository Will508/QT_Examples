#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    //设置窗口大小
    this->setGeometry(0,0,800,480);
    //按钮实例化
    pushButton1=new QPushButton("skin 1",this);
    pushButton2=new QPushButton("skin 2",this);
    //设置按钮位置
    pushButton1->setGeometry(300,200,80,40);
    pushButton2->setGeometry(400,200,80,40);
    //信号槽连接
    connect(pushButton1,SIGNAL(clicked()),this,SLOT(pushButton1_Clicked()));
    connect(pushButton2,SIGNAL(clicked()),this,SLOT(pushButton2_Clicked()));
}

MainWindow::~MainWindow()
{
}

void MainWindow::pushButton1_Clicked()
{
    this->setStyleSheet("QMainWindow { background-color: rgba(255,245,238,100%);}");
}
void MainWindow::pushButton2_Clicked()
{
    this->setStyleSheet("QMainWindow { background-color: rgba(238,122,233,100%);}");
}
