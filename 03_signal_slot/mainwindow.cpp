#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->resize(800, 480);             // 设置窗口大小为800*480
    pushButton = new QPushButton(this); // 实例化pushbutton对象
    pushButton->setText("button 1");

    //链接信号和槽，点击信号链接点击槽输出文本信号改变，文本信号改变信号链接按钮文本改变
    connect(pushButton,SIGNAL(clicked()),this,SLOT(pushButtonClicked()));
    connect(this,SIGNAL(pushButtonTextChanged()),this,SLOT(changeButtonText()));

}

MainWindow::~MainWindow()
{
}

void MainWindow::pushButtonClicked()//按钮点击
{
    //使用emit发射信号
    emit pushButtonTextChanged();
}

void MainWindow::changeButtonText()//按钮文本改变
{
    pushButton->setText("clicked!");
}
