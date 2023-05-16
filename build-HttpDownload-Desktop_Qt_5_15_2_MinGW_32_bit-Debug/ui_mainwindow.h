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
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGroupBox *groupBox;
    QLabel *label;
    QLineEdit *editURL;
    QPushButton *btnDownload;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *editPath;
    QPushButton *btnDefaultPath;
    QProgressBar *progressBar;
    QCheckBox *chkBoxOpen;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(100, 70, 491, 80));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 41, 20));
        editURL = new QLineEdit(groupBox);
        editURL->setObjectName(QString::fromUtf8("editURL"));
        editURL->setGeometry(QRect(60, 30, 301, 25));
        btnDownload = new QPushButton(groupBox);
        btnDownload->setObjectName(QString::fromUtf8("btnDownload"));
        btnDownload->setGeometry(QRect(380, 30, 93, 29));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(100, 150, 491, 151));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 40, 131, 20));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 121, 20));
        editPath = new QLineEdit(groupBox_2);
        editPath->setObjectName(QString::fromUtf8("editPath"));
        editPath->setGeometry(QRect(150, 40, 231, 25));
        btnDefaultPath = new QPushButton(groupBox_2);
        btnDefaultPath->setObjectName(QString::fromUtf8("btnDefaultPath"));
        btnDefaultPath->setGeometry(QRect(390, 40, 93, 29));
        progressBar = new QProgressBar(groupBox_2);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setGeometry(QRect(150, 90, 231, 23));
        progressBar->setValue(0);
        chkBoxOpen = new QCheckBox(groupBox_2);
        chkBoxOpen->setObjectName(QString::fromUtf8("chkBoxOpen"));
        chkBoxOpen->setGeometry(QRect(390, 90, 98, 24));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QString());
        label->setText(QCoreApplication::translate("MainWindow", "URL:", nullptr));
        btnDownload->setText(QCoreApplication::translate("MainWindow", "\344\270\213\350\275\275", nullptr));
        groupBox_2->setTitle(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "\344\270\213\350\275\275\346\226\207\344\273\266\344\277\235\345\255\230\350\267\257\345\276\204:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\226\207\344\273\266\344\270\213\350\275\275\350\277\233\345\272\246\357\274\232", nullptr));
        btnDefaultPath->setText(QCoreApplication::translate("MainWindow", "\351\273\230\350\256\244\350\267\257\345\276\204", nullptr));
        chkBoxOpen->setText(QCoreApplication::translate("MainWindow", "\345\256\214\346\210\220\345\220\216\346\211\223\345\274\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
