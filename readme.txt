1.信号和槽
在类定义中加入宏Q_OBJECT ///#include <>
信号表示输入的各种指令（click,pull）槽表示对指令进行反映的函数
信号和槽通过QObject::connect()函数实现，格式如下：
QObject::connect(sender,SIGNAL(signal()),reciever,SLOT(slot()));
//在ui_mainwindow.h文件内的setUi()函数里查看
一个信号可以链接多个槽，一个槽也可以链接多个信号
alt+方向左键 返回上一级
alt+方向右键 进入下一级

2.QT控件
2.1 按钮
QPushButton下压按钮：
QToolButton工具按钮:
QRadioButton选择按钮:
QCheckButton检查框:
QCommandLinkButton命令链接按钮:
QDialogButtonBox对话框按钮: