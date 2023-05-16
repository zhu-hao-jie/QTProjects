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
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include <tchartview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actStart;
    QAction *actStop;
    QAction *actQuit;
    QAction *actTest;
    QAction *actPlayFile;
    QAction *actPreferFormat;
    QWidget *centralwidget;
    QFrame *frame;
    QCheckBox *chkBoxShowWave;
    QCheckBox *chkBoxSaveToFile;
    QPushButton *btnGetFile;
    QLineEdit *editFileName;
    QGroupBox *groupBoxDevice;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboDevice;
    QGroupBox *groupBox;
    QLabel *actualSampleTypeLabel;
    QLabel *actualFreqLabel;
    QSpinBox *spinSampRate;
    QLabel *labSampRateRange;
    QLabel *actualChannelLabel;
    QSpinBox *spinChanCount;
    QLabel *actualSampleSizeLabel;
    QSpinBox *spinBytesPerSamp;
    QLabel *actualSampleSizeLable_2;
    QSpinBox *spinBytesPerFrame;
    QLabel *labelChanCountRange;
    QComboBox *comboSampFormat;
    QLabel *label_2;
    QGroupBox *groupBox_2;
    TChartView *chartView;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labBlockSize;
    QLabel *labBufferSize;
    QSpacerItem *horizontalSpacer;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setWindowModality(Qt::NonModal);
        MainWindow->resize(815, 604);
        actStart = new QAction(MainWindow);
        actStart->setObjectName(QString::fromUtf8("actStart"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/images/626.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actStart->setIcon(icon);
        actStop = new QAction(MainWindow);
        actStop->setObjectName(QString::fromUtf8("actStop"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/images/624.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actStop->setIcon(icon1);
        actQuit = new QAction(MainWindow);
        actQuit->setObjectName(QString::fromUtf8("actQuit"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actQuit->setIcon(icon2);
        actTest = new QAction(MainWindow);
        actTest->setObjectName(QString::fromUtf8("actTest"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/images/22.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actTest->setIcon(icon3);
        actPlayFile = new QAction(MainWindow);
        actPlayFile->setObjectName(QString::fromUtf8("actPlayFile"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/images/632.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actPlayFile->setIcon(icon4);
        actPreferFormat = new QAction(MainWindow);
        actPreferFormat->setObjectName(QString::fromUtf8("actPreferFormat"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/images/237.GIF"), QSize(), QIcon::Normal, QIcon::Off);
        actPreferFormat->setIcon(icon5);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(30, 10, 761, 51));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        chkBoxShowWave = new QCheckBox(frame);
        chkBoxShowWave->setObjectName(QString::fromUtf8("chkBoxShowWave"));
        chkBoxShowWave->setGeometry(QRect(10, 10, 111, 23));
        chkBoxShowWave->setChecked(true);
        chkBoxSaveToFile = new QCheckBox(frame);
        chkBoxSaveToFile->setObjectName(QString::fromUtf8("chkBoxSaveToFile"));
        chkBoxSaveToFile->setGeometry(QRect(130, 10, 131, 23));
        chkBoxSaveToFile->setChecked(true);
        btnGetFile = new QPushButton(frame);
        btnGetFile->setObjectName(QString::fromUtf8("btnGetFile"));
        btnGetFile->setGeometry(QRect(270, 10, 93, 28));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/images/104.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        btnGetFile->setIcon(icon6);
        editFileName = new QLineEdit(frame);
        editFileName->setObjectName(QString::fromUtf8("editFileName"));
        editFileName->setGeometry(QRect(390, 10, 351, 24));
        groupBoxDevice = new QGroupBox(centralwidget);
        groupBoxDevice->setObjectName(QString::fromUtf8("groupBoxDevice"));
        groupBoxDevice->setGeometry(QRect(30, 70, 331, 441));
        horizontalLayoutWidget = new QWidget(groupBoxDevice);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 30, 301, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboDevice = new QComboBox(horizontalLayoutWidget);
        comboDevice->setObjectName(QString::fromUtf8("comboDevice"));

        horizontalLayout->addWidget(comboDevice);

        groupBox = new QGroupBox(groupBoxDevice);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 80, 301, 261));
        actualSampleTypeLabel = new QLabel(groupBox);
        actualSampleTypeLabel->setObjectName(QString::fromUtf8("actualSampleTypeLabel"));
        actualSampleTypeLabel->setGeometry(QRect(30, 30, 81, 19));
        actualFreqLabel = new QLabel(groupBox);
        actualFreqLabel->setObjectName(QString::fromUtf8("actualFreqLabel"));
        actualFreqLabel->setGeometry(QRect(20, 70, 91, 20));
        spinSampRate = new QSpinBox(groupBox);
        spinSampRate->setObjectName(QString::fromUtf8("spinSampRate"));
        spinSampRate->setGeometry(QRect(140, 70, 131, 24));
        spinSampRate->setMinimum(1);
        spinSampRate->setMaximum(10000000);
        labSampRateRange = new QLabel(groupBox);
        labSampRateRange->setObjectName(QString::fromUtf8("labSampRateRange"));
        labSampRateRange->setGeometry(QRect(140, 100, 171, 19));
        actualChannelLabel = new QLabel(groupBox);
        actualChannelLabel->setObjectName(QString::fromUtf8("actualChannelLabel"));
        actualChannelLabel->setGeometry(QRect(30, 130, 69, 19));
        spinChanCount = new QSpinBox(groupBox);
        spinChanCount->setObjectName(QString::fromUtf8("spinChanCount"));
        spinChanCount->setGeometry(QRect(140, 130, 131, 24));
        spinChanCount->setMinimum(1);
        spinChanCount->setMaximum(100);
        actualSampleSizeLabel = new QLabel(groupBox);
        actualSampleSizeLabel->setObjectName(QString::fromUtf8("actualSampleSizeLabel"));
        actualSampleSizeLabel->setGeometry(QRect(20, 190, 111, 19));
        spinBytesPerSamp = new QSpinBox(groupBox);
        spinBytesPerSamp->setObjectName(QString::fromUtf8("spinBytesPerSamp"));
        spinBytesPerSamp->setGeometry(QRect(140, 190, 131, 24));
        spinBytesPerSamp->setMinimum(1);
        spinBytesPerSamp->setMaximum(10);
        actualSampleSizeLable_2 = new QLabel(groupBox);
        actualSampleSizeLable_2->setObjectName(QString::fromUtf8("actualSampleSizeLable_2"));
        actualSampleSizeLable_2->setGeometry(QRect(20, 220, 81, 19));
        spinBytesPerFrame = new QSpinBox(groupBox);
        spinBytesPerFrame->setObjectName(QString::fromUtf8("spinBytesPerFrame"));
        spinBytesPerFrame->setGeometry(QRect(140, 220, 131, 24));
        spinBytesPerFrame->setMinimum(1);
        spinBytesPerFrame->setMaximum(10000000);
        labelChanCountRange = new QLabel(groupBox);
        labelChanCountRange->setObjectName(QString::fromUtf8("labelChanCountRange"));
        labelChanCountRange->setGeometry(QRect(140, 160, 171, 19));
        comboSampFormat = new QComboBox(groupBox);
        comboSampFormat->setObjectName(QString::fromUtf8("comboSampFormat"));
        comboSampFormat->setGeometry(QRect(140, 30, 131, 24));
        label_2 = new QLabel(groupBoxDevice);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 350, 241, 71));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(380, 80, 391, 431));
        chartView = new TChartView(groupBox_2);
        chartView->setObjectName(QString::fromUtf8("chartView"));
        chartView->setGeometry(QRect(10, 30, 371, 351));
        chartView->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CrossCursor)));
        horizontalLayoutWidget_2 = new QWidget(groupBox_2);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(10, 389, 416, 31));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labBlockSize = new QLabel(horizontalLayoutWidget_2);
        labBlockSize->setObjectName(QString::fromUtf8("labBlockSize"));
        labBlockSize->setMinimumSize(QSize(150, 0));

        horizontalLayout_2->addWidget(labBlockSize);

        labBufferSize = new QLabel(horizontalLayoutWidget_2);
        labBufferSize->setObjectName(QString::fromUtf8("labBufferSize"));
        labBufferSize->setMinimumSize(QSize(150, 0));

        horizontalLayout_2->addWidget(labBufferSize);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        MainWindow->setCentralWidget(centralwidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actPreferFormat);
        mainToolBar->addAction(actTest);
        mainToolBar->addAction(actStart);
        mainToolBar->addAction(actStop);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actPlayFile);
        mainToolBar->addAction(actQuit);

        retranslateUi(MainWindow);

        comboSampFormat->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\345\216\237\345\247\213\351\237\263\351\242\221\347\232\204\351\207\207\351\233\206\345\222\214\346\222\255\346\224\276", nullptr));
        actStart->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\351\207\207\351\233\206", nullptr));
#if QT_CONFIG(tooltip)
        actStart->setToolTip(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\351\207\207\351\233\206", nullptr));
#endif // QT_CONFIG(tooltip)
        actStop->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\351\207\207\351\233\206", nullptr));
#if QT_CONFIG(tooltip)
        actStop->setToolTip(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\351\207\207\351\233\206", nullptr));
#endif // QT_CONFIG(tooltip)
        actQuit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#if QT_CONFIG(tooltip)
        actQuit->setToolTip(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_CONFIG(tooltip)
        actTest->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\351\237\263\351\242\221\346\240\274\345\274\217", nullptr));
#if QT_CONFIG(tooltip)
        actTest->setToolTip(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\346\230\257\345\220\246\346\224\257\346\214\201\346\211\200\350\256\276\347\275\256\347\232\204\351\237\263\351\242\221\346\240\274\345\274\217", nullptr));
#endif // QT_CONFIG(tooltip)
        actPlayFile->setText(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276\346\226\207\344\273\266", nullptr));
#if QT_CONFIG(tooltip)
        actPlayFile->setToolTip(QCoreApplication::translate("MainWindow", "\346\222\255\346\224\276\346\226\207\344\273\266", nullptr));
#endif // QT_CONFIG(tooltip)
        actPreferFormat->setText(QCoreApplication::translate("MainWindow", "\351\246\226\351\200\211\351\237\263\351\242\221\346\240\274\345\274\217", nullptr));
#if QT_CONFIG(tooltip)
        actPreferFormat->setToolTip(QCoreApplication::translate("MainWindow", "\351\246\226\351\200\211\351\237\263\351\242\221\346\240\274\345\274\217", nullptr));
#endif // QT_CONFIG(tooltip)
        chkBoxShowWave->setText(QCoreApplication::translate("MainWindow", "\345\256\236\346\227\266\346\230\276\347\244\272\346\263\242\345\275\242", nullptr));
        chkBoxSaveToFile->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\350\256\260\345\275\225\345\210\260\346\226\207\344\273\266", nullptr));
        btnGetFile->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\346\226\207\344\273\266", nullptr));
        groupBoxDevice->setTitle(QCoreApplication::translate("MainWindow", "\351\237\263\351\242\221\350\276\223\345\205\245\350\256\276\345\244\207\345\222\214\346\240\274\345\274\217", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\351\273\230\350\256\244\351\237\263\351\242\221\350\276\223\345\205\245\350\256\276\345\244\207", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\351\237\263\351\242\221\346\240\274\345\274\217\350\256\276\347\275\256", nullptr));
        actualSampleTypeLabel->setText(QCoreApplication::translate("MainWindow", "\351\207\207\346\240\267\347\202\271\346\240\274\345\274\217", nullptr));
        actualFreqLabel->setText(QCoreApplication::translate("MainWindow", "\351\207\207\346\240\267\351\242\221\347\216\207(HZ)", nullptr));
        labSampRateRange->setText(QCoreApplication::translate("MainWindow", "\350\214\203\345\233\264\357\274\232", nullptr));
        actualChannelLabel->setText(QCoreApplication::translate("MainWindow", "\351\200\232\351\201\223\346\225\260", nullptr));
        actualSampleSizeLabel->setText(QCoreApplication::translate("MainWindow", "\346\257\217\351\207\207\346\240\267\347\202\271\345\255\227\350\212\202\346\225\260", nullptr));
        actualSampleSizeLable_2->setText(QCoreApplication::translate("MainWindow", "\346\257\217\345\270\247\345\255\227\350\212\202\346\225\260", nullptr));
        labelChanCountRange->setText(QCoreApplication::translate("MainWindow", "\350\214\203\345\233\264\357\274\232", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\263\250\346\204\217\357\274\232\346\273\241\350\266\263\344\273\245\344\270\213\346\235\241\344\273\266\346\211\215\345\217\257\344\273\245\346\230\276\347\244\272\346\233\262\347\272\277\n"
"\351\207\207\346\240\267\347\202\271\346\240\274\345\274\217 == UInt8\n"
" \351\200\232\351\201\223\346\225\260 ==1", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\345\256\236\346\227\266\351\207\207\351\233\206\347\232\204\351\237\263\351\242\221\346\263\242\345\275\242", nullptr));
        labBlockSize->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256\345\235\227\345\255\227\350\212\202\346\225\260=", nullptr));
        labBufferSize->setText(QCoreApplication::translate("MainWindow", "\345\267\262\345\275\225\345\210\266\346\227\266\351\227\264=", nullptr));
        mainToolBar->setWindowTitle(QCoreApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
