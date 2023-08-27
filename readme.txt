1.信号和槽
在类定义中加入宏Q_OBJECT ///#include <>

信号表示输入的各种指令（click,pull）槽表示对指令进行反映的函数

信号和槽通过QObject::connect()函数实现，格式如下：
QObject::connect(sender,SIGNAL(signal()),reciever,SLOT(slot()));
//在ui_mainwindow.h文件内的setUi()函数里查看
一个信号可以链接多个槽，一个槽也可以链接多个信号

