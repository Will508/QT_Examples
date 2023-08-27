#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton> // 声明一个QPushButton宏

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

signals:
    void pushButtonTextChanged(); // 声明一个信号，无需定义

public slots:
    void changeButtonText(); // 声明一个槽函数

    void pushButtonClicked(); // 声明按钮点击的槽函数

private:
    QPushButton *pushButton; // 声明一个pushButton对象
};
#endif // MAINWINDOW_H
