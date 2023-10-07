#ifndef WIDGET_H
#define WIDGET_H

#include <QMainWindow>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QMainWindow
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_openbutton_clicked();
    void on_closebutton_clicked();
    void on_onbutton_clicked();
    void on_offbutton_clicked();

private:
    Ui::Widget *ui;
    QSerialPort *serialPort;
};
#endif // WIDGET_H
