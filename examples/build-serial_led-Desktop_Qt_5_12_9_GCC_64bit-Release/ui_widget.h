/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *centralwidget;
    QWidget *gridLayoutWidget_2;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *onbutton;
    QPushButton *closebutton;
    QPushButton *offbutton;
    QPushButton *openbutton;
    QVBoxLayout *verticalLayout;
    QComboBox *serialBox;
    QComboBox *baudrateBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *seriallabel;
    QLabel *baudratelabel;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menuserial_led;

    void setupUi(QMainWindow *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(196, 202);
        centralwidget = new QWidget(Widget);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayoutWidget_2 = new QWidget(centralwidget);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(10, 10, 170, 136));
        gridLayout_2 = new QGridLayout(gridLayoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        onbutton = new QPushButton(gridLayoutWidget_2);
        onbutton->setObjectName(QString::fromUtf8("onbutton"));

        gridLayout->addWidget(onbutton, 2, 0, 1, 1);

        closebutton = new QPushButton(gridLayoutWidget_2);
        closebutton->setObjectName(QString::fromUtf8("closebutton"));

        gridLayout->addWidget(closebutton, 1, 1, 1, 1);

        offbutton = new QPushButton(gridLayoutWidget_2);
        offbutton->setObjectName(QString::fromUtf8("offbutton"));

        gridLayout->addWidget(offbutton, 2, 1, 1, 1);

        openbutton = new QPushButton(gridLayoutWidget_2);
        openbutton->setObjectName(QString::fromUtf8("openbutton"));

        gridLayout->addWidget(openbutton, 1, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        serialBox = new QComboBox(gridLayoutWidget_2);
        serialBox->addItem(QString());
        serialBox->addItem(QString());
        serialBox->addItem(QString());
        serialBox->addItem(QString());
        serialBox->addItem(QString());
        serialBox->addItem(QString());
        serialBox->addItem(QString());
        serialBox->setObjectName(QString::fromUtf8("serialBox"));

        verticalLayout->addWidget(serialBox);

        baudrateBox = new QComboBox(gridLayoutWidget_2);
        baudrateBox->addItem(QString());
        baudrateBox->addItem(QString());
        baudrateBox->setObjectName(QString::fromUtf8("baudrateBox"));

        verticalLayout->addWidget(baudrateBox);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        seriallabel = new QLabel(gridLayoutWidget_2);
        seriallabel->setObjectName(QString::fromUtf8("seriallabel"));

        verticalLayout_2->addWidget(seriallabel);

        baudratelabel = new QLabel(gridLayoutWidget_2);
        baudratelabel->setObjectName(QString::fromUtf8("baudratelabel"));

        verticalLayout_2->addWidget(baudratelabel);


        gridLayout->addLayout(verticalLayout_2, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        Widget->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(Widget);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Widget->setStatusBar(statusbar);
        menubar = new QMenuBar(Widget);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 196, 28));
        menuserial_led = new QMenu(menubar);
        menuserial_led->setObjectName(QString::fromUtf8("menuserial_led"));
        Widget->setMenuBar(menubar);

        menubar->addAction(menuserial_led->menuAction());

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QMainWindow *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        onbutton->setText(QApplication::translate("Widget", "\347\202\271\347\201\257", nullptr));
        closebutton->setText(QApplication::translate("Widget", "\345\205\263\351\227\255\344\270\262\345\217\243", nullptr));
        offbutton->setText(QApplication::translate("Widget", "\347\201\255\347\201\257", nullptr));
        openbutton->setText(QApplication::translate("Widget", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        serialBox->setItemText(0, QApplication::translate("Widget", "COM3", nullptr));
        serialBox->setItemText(1, QApplication::translate("Widget", "COM4", nullptr));
        serialBox->setItemText(2, QApplication::translate("Widget", "COM5", nullptr));
        serialBox->setItemText(3, QApplication::translate("Widget", "COM6", nullptr));
        serialBox->setItemText(4, QApplication::translate("Widget", "COM7", nullptr));
        serialBox->setItemText(5, QApplication::translate("Widget", "COM8", nullptr));
        serialBox->setItemText(6, QApplication::translate("Widget", "COM9", nullptr));

        baudrateBox->setItemText(0, QApplication::translate("Widget", "9600", nullptr));
        baudrateBox->setItemText(1, QApplication::translate("Widget", "115200", nullptr));

        seriallabel->setText(QApplication::translate("Widget", "\344\270\262\345\217\243", nullptr));
        baudratelabel->setText(QApplication::translate("Widget", "\346\263\242\347\211\271\347\216\207", nullptr));
        menuserial_led->setTitle(QApplication::translate("Widget", "serial_led", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
