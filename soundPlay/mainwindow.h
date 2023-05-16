#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtMultimedia>
#include <QtCharts>
#include "tmydevice.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QAudioSource* audioSource; //采集音频
    QAudioSink* audioSink;  //播放音频
    QLineSeries* lineSeries;
    QFile  sinkFileDevice;    //用于 audioSink 播放音频时的I/O 设备
    const qint64 m_bufferSize = 10000; //缓冲区大小
    bool m_isWorking = false;  // 是否正在采集或播放
    TMyDevice*  myDevice;   //用于显示 I/O 设备

    void initChart();//初始化图标
    void closeEvent(QCloseEvent *event);

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void do_IODevice_update(qint64 blockSize);
    void do_sink_stateChanged(QAudio::State state);

    void on_actPreferFormat_triggered();

    void on_actTest_triggered();

    void on_comboSampFormat_currentIndexChanged(int index);

    void on_spinChanCount_valueChanged(int arg1);

    void on_actStart_triggered();

    void on_actStop_triggered();

    void on_actPlayFile_triggered();

    void on_chkBoxSaveToFile_clicked(bool checked);

    void on_btnGetFile_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
