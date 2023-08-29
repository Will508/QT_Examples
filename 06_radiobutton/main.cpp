#include "mainwindow.h"

#include <QApplication>
#include <QFile>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFile file(":/style.qss");

    if(file.exists())
    {
        //只读方式打开文件
        file.open(QFile::ReadOnly);
        //用字符串保存读出结果
        QString styleSheet = QLatin1String(file.readAll());
        //设置全局模式
        qApp->setStyleSheet(styleSheet);
        //关闭文件
        file.close();
    }


    MainWindow w;
    w.show();
    return a.exec();
}
