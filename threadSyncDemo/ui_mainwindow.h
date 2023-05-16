/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actThread_Run;
    QAction *actDice_Run;
    QAction *actDice_Pause;
    QAction *actThread_Quit;
    QAction *actClear;
    QAction *actClose;
    QWidget *centralwidget;
    QPlainTextEdit *plainTextEdit;
    QLabel *labPic;
    QMenuBar *menubar;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(662, 425);
        actThread_Run = new QAction(MainWindow);
        actThread_Run->setObjectName(QString::fromUtf8("actThread_Run"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/flag24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actThread_Run->setIcon(icon);
        actDice_Run = new QAction(MainWindow);
        actDice_Run->setObjectName(QString::fromUtf8("actDice_Run"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/play24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actDice_Run->setIcon(icon1);
        actDice_Pause = new QAction(MainWindow);
        actDice_Pause->setObjectName(QString::fromUtf8("actDice_Pause"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/pause24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actDice_Pause->setIcon(icon2);
        actDice_Pause->setVisible(true);
        actThread_Quit = new QAction(MainWindow);
        actThread_Quit->setObjectName(QString::fromUtf8("actThread_Quit"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/block24.png"), QSize(), QIcon::Normal, QIcon::Off);
        actThread_Quit->setIcon(icon3);
        actClear = new QAction(MainWindow);
        actClear->setObjectName(QString::fromUtf8("actClear"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/212.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClear->setIcon(icon4);
        actClose = new QAction(MainWindow);
        actClose->setObjectName(QString::fromUtf8("actClose"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actClose->setIcon(icon5);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(10, 0, 381, 301));
        labPic = new QLabel(centralwidget);
        labPic->setObjectName(QString::fromUtf8("labPic"));
        labPic->setGeometry(QRect(390, 0, 181, 301));
        labPic->setPixmap(QPixmap(QString::fromUtf8(":/dice/images/d0.jpg")));
        labPic->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 662, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        toolBar->addAction(actThread_Run);
        toolBar->addAction(actDice_Run);
        toolBar->addAction(actDice_Pause);
        toolBar->addAction(actThread_Quit);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actThread_Run->setText(QCoreApplication::translate("MainWindow", "\345\220\257\345\212\250\347\272\277\347\250\213", nullptr));
#if QT_CONFIG(tooltip)
        actThread_Run->setToolTip(QCoreApplication::translate("MainWindow", "\345\220\257\345\212\250\347\272\277\347\250\213\350\277\220\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        actDice_Run->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213", nullptr));
#if QT_CONFIG(tooltip)
        actDice_Run->setToolTip(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\346\216\267\351\252\260\345\255\220", nullptr));
#endif // QT_CONFIG(tooltip)
        actDice_Pause->setText(QCoreApplication::translate("MainWindow", "\346\232\202\345\201\234", nullptr));
#if QT_CONFIG(tooltip)
        actDice_Pause->setToolTip(QCoreApplication::translate("MainWindow", "\346\232\202\345\201\234\346\216\267\351\252\260\345\255\220", nullptr));
#endif // QT_CONFIG(tooltip)
        actThread_Quit->setText(QCoreApplication::translate("MainWindow", "\347\273\223\346\235\237\347\272\277\347\250\213", nullptr));
#if QT_CONFIG(tooltip)
        actThread_Quit->setToolTip(QCoreApplication::translate("MainWindow", "\347\273\223\346\235\237\347\272\277\347\250\213\350\277\220\350\241\214", nullptr));
#endif // QT_CONFIG(tooltip)
        actClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
#if QT_CONFIG(tooltip)
        actClear->setToolTip(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272\346\226\207\346\234\254\346\241\206", nullptr));
#endif // QT_CONFIG(tooltip)
        actClose->setText(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#if QT_CONFIG(tooltip)
        actClose->setToolTip(QCoreApplication::translate("MainWindow", "\345\205\263\351\227\255", nullptr));
#endif // QT_CONFIG(tooltip)
        labPic->setText(QString());
        toolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
