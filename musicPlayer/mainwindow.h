#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QListWidgetItem>
#include <QtMultimedia>


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

private:
    QMediaPlayer *player;  //定义播放器
    bool loopPlay = true;  //循环播放
    QString durationTime;  //总时长
    QString positionTime;  //当前播放到的位置

    QUrl getUrlFromItem(QListWidgetItem *item); //获取用户数据
    bool eventFilter(QObject* watched,QEvent* event); //事件过滤处理

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void do_stateChanged(QMediaPlayer::PlaybackState state);//播放器状态改变
    void do_sourceChanged(const QUrl &media);
    void do_durationChanged(qint64 duration); //播放时长发生改变
    void do_positionChanged(qint64 position); //播放位置发生改变
    void do_metaDataChanged();                //元数据发生改变


    void on_btnAdd_clicked();

    void on_btnRemove_clicked();

    void on_btnClear_clicked();

    void on_listWidget_doubleClicked(const QModelIndex &index);

    void on_btnPrevious_clicked();

    void on_btnNext_clicked();

    void on_btnClose_clicked();

    void on_btnPlay_clicked();

    void on_btnPause_clicked();

    void on_btnStop_clicked();

    void on_doubleSpinBox_valueChanged(double arg1);

    void on_btnLoop_clicked(bool checked);

    void on_sliderVolumn_valueChanged(int value);

    void on_btnSound_clicked();

    void on_sliderPosition_valueChanged(int value);

    void on_btnAudioDevice_clicked();

    void on_btnAudioOutput_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
