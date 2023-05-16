/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *btnPlay;
    QPushButton *btnPause;
    QPushButton *btnPrevious;
    QPushButton *btnStop;
    QPushButton *btnNext;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *doubleSpinBox;
    QPushButton *btnLoop;
    QPushButton *btnSound;
    QSlider *sliderVolumn;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labCurMedia;
    QSlider *sliderPosition;
    QLabel *labRatio;
    QGroupBox *groupBox;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnAdd;
    QPushButton *btnRemove;
    QPushButton *btnClose;
    QPushButton *btnClear;
    QSplitter *splitter;
    QListWidget *listWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *labPic;
    QPushButton *btnAudioOutput;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(978, 666);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/audio24.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(40, 420, 581, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        btnPlay = new QPushButton(horizontalLayoutWidget_2);
        btnPlay->setObjectName(QString::fromUtf8("btnPlay"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/620.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnPlay->setIcon(icon1);

        horizontalLayout_2->addWidget(btnPlay);

        btnPause = new QPushButton(horizontalLayoutWidget_2);
        btnPause->setObjectName(QString::fromUtf8("btnPause"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/622.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnPause->setIcon(icon2);

        horizontalLayout_2->addWidget(btnPause);

        btnPrevious = new QPushButton(horizontalLayoutWidget_2);
        btnPrevious->setObjectName(QString::fromUtf8("btnPrevious"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/616.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnPrevious->setIcon(icon3);

        horizontalLayout_2->addWidget(btnPrevious);

        btnStop = new QPushButton(horizontalLayoutWidget_2);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/624.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnStop->setIcon(icon4);

        horizontalLayout_2->addWidget(btnStop);

        btnNext = new QPushButton(horizontalLayoutWidget_2);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/630.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnNext->setIcon(icon5);

        horizontalLayout_2->addWidget(btnNext);

        horizontalSpacer = new QSpacerItem(18, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        doubleSpinBox = new QDoubleSpinBox(horizontalLayoutWidget_2);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMinimum(0.500000000000000);
        doubleSpinBox->setMaximum(1.500000000000000);
        doubleSpinBox->setSingleStep(0.100000000000000);
        doubleSpinBox->setValue(1.000000000000000);

        horizontalLayout_2->addWidget(doubleSpinBox);

        btnLoop = new QPushButton(horizontalLayoutWidget_2);
        btnLoop->setObjectName(QString::fromUtf8("btnLoop"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/refresh16.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnLoop->setIcon(icon6);

        horizontalLayout_2->addWidget(btnLoop);

        btnSound = new QPushButton(horizontalLayoutWidget_2);
        btnSound->setObjectName(QString::fromUtf8("btnSound"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/images/volumn.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnSound->setIcon(icon7);

        horizontalLayout_2->addWidget(btnSound);

        sliderVolumn = new QSlider(horizontalLayoutWidget_2);
        sliderVolumn->setObjectName(QString::fromUtf8("sliderVolumn"));
        sliderVolumn->setMaximum(100);
        sliderVolumn->setValue(100);
        sliderVolumn->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(sliderVolumn);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(40, 490, 581, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        labCurMedia = new QLabel(horizontalLayoutWidget_3);
        labCurMedia->setObjectName(QString::fromUtf8("labCurMedia"));
        labCurMedia->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(labCurMedia);

        sliderPosition = new QSlider(horizontalLayoutWidget_3);
        sliderPosition->setObjectName(QString::fromUtf8("sliderPosition"));
        sliderPosition->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(sliderPosition);

        labRatio = new QLabel(horizontalLayoutWidget_3);
        labRatio->setObjectName(QString::fromUtf8("labRatio"));
        labRatio->setMinimumSize(QSize(80, 0));

        horizontalLayout_3->addWidget(labRatio);

        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 30, 611, 371));
        horizontalLayoutWidget = new QWidget(groupBox);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 40, 581, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        btnAdd = new QPushButton(horizontalLayoutWidget);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/images/316.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnAdd->setIcon(icon8);

        horizontalLayout->addWidget(btnAdd);

        btnRemove = new QPushButton(horizontalLayoutWidget);
        btnRemove->setObjectName(QString::fromUtf8("btnRemove"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/images/318.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnRemove->setIcon(icon9);

        horizontalLayout->addWidget(btnRemove);

        btnClose = new QPushButton(horizontalLayoutWidget);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnClose->setIcon(icon10);

        horizontalLayout->addWidget(btnClose);

        btnClear = new QPushButton(horizontalLayoutWidget);
        btnClear->setObjectName(QString::fromUtf8("btnClear"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/images/214.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnClear->setIcon(icon11);

        horizontalLayout->addWidget(btnClear);

        splitter = new QSplitter(groupBox);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setGeometry(QRect(10, 100, 581, 261));
        splitter->setOrientation(Qt::Horizontal);
        listWidget = new QListWidget(splitter);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        splitter->addWidget(listWidget);
        scrollArea = new QScrollArea(splitter);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setMinimumSize(QSize(200, 0));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 198, 259));
        labPic = new QLabel(scrollAreaWidgetContents);
        labPic->setObjectName(QString::fromUtf8("labPic"));
        labPic->setGeometry(QRect(0, 100, 69, 19));
        labPic->setAlignment(Qt::AlignCenter);
        scrollArea->setWidget(scrollAreaWidgetContents);
        splitter->addWidget(scrollArea);
        btnAudioOutput = new QPushButton(centralwidget);
        btnAudioOutput->setObjectName(QString::fromUtf8("btnAudioOutput"));
        btnAudioOutput->setGeometry(QRect(720, 160, 93, 28));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(660, 210, 261, 111));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\351\237\263\344\271\220\346\222\255\346\224\276\345\231\250\347\225\214\351\235\242", nullptr));
        btnPlay->setText(QString());
        btnPause->setText(QString());
        btnPrevious->setText(QString());
        btnStop->setText(QString());
        btnNext->setText(QString());
        doubleSpinBox->setSuffix(QCoreApplication::translate("MainWindow", "\345\200\215\351\200\237", nullptr));
        btnLoop->setText(QCoreApplication::translate("MainWindow", "\345\276\252\347\216\257", nullptr));
        btnSound->setText(QString());
        labCurMedia->setText(QCoreApplication::translate("MainWindow", "\346\227\240\346\233\262\347\233\256", nullptr));
        labRatio->setText(QCoreApplication::translate("MainWindow", "\350\277\233\345\272\246", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\351\237\263\344\271\220\346\222\255\346\224\276\345\231\250\347\225\214\351\235\242", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
        btnRemove->setText(QCoreApplication::translate("MainWindow", "\347\247\273\351\231\244", nullptr));
        btnClose->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "\346\270\205\347\251\272", nullptr));
        labPic->setText(QCoreApplication::translate("MainWindow", "Picture", nullptr));
        btnAudioOutput->setText(QCoreApplication::translate("MainWindow", "\351\237\263\351\242\221\350\276\223\345\207\272\350\256\276\345\244\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
