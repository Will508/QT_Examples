#include "mainwindow.h"
#include <QApplication>
#include <QStyle>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this->setGeometry(0,0,800,480);
    //实例化toolbar以及设置大小位置
    toolBar = new QToolBar(this);
    toolBar->setGeometry(0,0,800,100);
    //实例化QStyle类对象
    QStyle *style = QApplication::style();
    QIcon icon = style->standardIcon(QStyle::SP_TitleBarContextHelpButton);
    //实例化AToolButton对象并设置图标及其显示文本
    toolButton = new QToolButton();
    toolButton->setIcon(icon);
    toolButton->setText("HELP");
    toolButton->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
    //把toolbutton添加到toolbar里
    toolBar->addWidget(toolButton);
}

MainWindow::~MainWindow()
{
}
