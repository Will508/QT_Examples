#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Widget)
{
    QStringList serialNamePort;
    ui->setupUi(this);
    this->setWindowTitle("serial_led");

    serialPort = new  QSerialPort(this);
    foreach (const QSerialPortInfo &inf0, QSerialPortInfo::availablePorts()) {
        serialNamePort<<inf0.portName();
    }
    ui->serialBox->addItems(serialNamePort);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_openbutton_clicked()
{
    serialPort->setPortName(ui->serialBox->currentText());
    serialPort->setBaudRate(ui->baudrateBox->currentText().toInt());
    serialPort->setDataBits(QSerialPort::Data8);
    serialPort->setStopBits(QSerialPort::OneStop);
    serialPort->setParity(QSerialPort::NoParity);

    if(serialPort->open(QIODevice::ReadWrite) == true) {
        QMessageBox::information(this,"提示","串口打开成功");
    }
    else {
        QMessageBox::critical(this, "提示", "串口打开失败");
    }
}

void Widget::on_closebutton_clicked()
{
    serialPort->close();
}

void Widget::on_onbutton_clicked()
{
    serialPort->write("ON\n");
    qDebug("ON\n");
}

void Widget::on_offbutton_clicked()
{
    serialPort->write("OFF\n");
    qDebug("OFF\n");
}
