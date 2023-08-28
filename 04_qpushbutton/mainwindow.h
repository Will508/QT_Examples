#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    //声明第一个按钮
    QPushButton *pushButton1;
    //声明第二个按钮
    QPushButton *pushButton2;

private slots:
    //声明按钮一槽函数
    void pushButton1_Clicked();
    //声明按钮二槽函数
    void pushButton2_Clicked();
};
#endif // MAINWINDOW_H
