#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->listWidget->installEventFilter(this); //安装事件过滤器
    ui->listWidget->setDragEnabled(true);     //允许拖放操作
    //允许列表项在组件内部被拖放
    ui->listWidget->setDragDropMode(QAbstractItemView::InternalMove);

    //1.创建 QMediaPlayer 对象
    player = new QMediaPlayer(this);
    //2.创建 QAudioOutput 音频输出对象
    QAudioOutput *audioOutput = new QAudioOutput(this);
    //3.设置音频输出
    player->setAudioOutput(audioOutput);

    connect(player,&QMediaPlayer::positionChanged,this,&MainWindow::do_positionChanged);
    connect(player,&QMediaPlayer::durationChanged,this,&MainWindow::do_durationChanged);
    connect(player,&QMediaPlayer::sourceChanged,this,&MainWindow::do_sourceChanged);
    connect(player,&QMediaPlayer::mediaStatusChanged,this,&MainWindow::do_metaDataChanged);

}


bool MainWindow::eventFilter(QObject* watched,QEvent* event)
{
    if(event->type() != QEvent::KeyPress){
        return QWidget::eventFilter(watched,event);
    }
    QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);

    if(keyEvent->key() != Qt::Key_Delete){
        return QWidget::eventFilter(watched,event);
    }

    if(watched==ui->listWidget){
        QListWidgetItem* item = ui->listWidget->takeItem(ui->listWidget->currentRow());
        delete item;
    }
    return true;//事件已被处理
}
//返回 item 的用户数据
QUrl MainWindow::getUrlFromItem(QListWidgetItem* item)
{
    QVariant itemData = item->data(Qt::UserRole); //获取用户数据
    QUrl source = itemData.value<QUrl>();        //将 QVarient 数据转换为 QUrl 数据
    return source;
}

MainWindow::~MainWindow()
{
    delete ui;
}

//添加
void MainWindow::on_btnAdd_clicked()
{
    QString curPath = QDir::homePath();
    QString dlgTitle = "选择音频文件";
    QString filter = "音频文件(*.mp3 *.wav *.wma);;所有文件(*.*)"; //文件过滤器
    QStringList fileList = QFileDialog::getOpenFileNames(this,dlgTitle,curPath,filter);

    if(fileList.count()<1){
        return;
    }

    for(int i=0;i<fileList.size();i++){
        QString aFile = fileList.at(i);
        QFileInfo fileInfo(aFile);
        QListWidgetItem *aItem = new QListWidgetItem(fileInfo.fileName());
        aItem->setIcon(QIcon(":/images/images/musicFile.png"));
        aItem->setData(Qt::UserRole,QUrl::fromLocalFile(aFile)); //设置用户数据
        ui->listWidget->addItem(aItem);  //添加到界面上的列表
    }

    if(player->playbackState()!=QMediaPlayer::PlayingState){
        ui->listWidget->setCurrentRow(0);
        QUrl source = getUrlFromItem(ui->listWidget->currentItem()); //从当前项获取用户数据
        player->setSource(source); //设置播放媒介
    }
    player->play();//播放
}

//移除列表中的当前项
void MainWindow::on_btnRemove_clicked()
{
    int index = ui->listWidget->currentRow();
    if(index>=0){
        QListWidgetItem* item = ui->listWidget->takeItem(index);
        delete item;
    }
}

//清空列表项
void MainWindow::on_btnClear_clicked()
{
    loopPlay = false;//防止 do_stateChanged() 里切换曲目
    ui->listWidget->clear();
    player->stop();
}

//双击时切换曲目
void MainWindow::on_listWidget_doubleClicked(const QModelIndex &index)
{
    Q_UNUSED(index);
    loopPlay = false;
    player->setSource(getUrlFromItem(ui->listWidget->currentItem()));
    player->play();
    loopPlay= ui->btnLoop->isChecked();
}

//上一曲
void MainWindow::on_btnPrevious_clicked()
{
    int curRow = ui->listWidget->currentRow();
    curRow--;
    curRow = curRow<0?0:curRow;
    ui->listWidget->setCurrentRow(curRow);
    loopPlay=false;
    player->setSource(getUrlFromItem(ui->listWidget->currentItem()));
    player->play();
    loopPlay = ui->btnLoop->isChecked();
}

//下一曲
void MainWindow::on_btnNext_clicked()
{
    int count=ui->listWidget->count();
    int curRow=ui->listWidget->currentRow();
    curRow++;
    curRow= curRow>=count? count-1:curRow;
    ui->listWidget->setCurrentRow(curRow);

    loopPlay=false;     //暂时设置为false，防止do_stateChanged()里切换曲目
    player->setSource(getUrlFromItem(ui->listWidget->currentItem()));
    player->play();
    loopPlay=ui->btnLoop->isChecked();
}


void MainWindow::on_btnClose_clicked()
{



}

//开始播放
void MainWindow::on_btnPlay_clicked()
{
    if (ui->listWidget->currentRow()<0)   //没有选择文件，就播放第1个
        ui->listWidget->setCurrentRow(0);
    player->setSource(getUrlFromItem(ui->listWidget->currentItem()));
    player->play();
    loopPlay=ui->btnLoop->isChecked();  //是否循环播放
}

//暂停播放
void MainWindow::on_btnPause_clicked()
{
    player->pause();
}

//停止播放
void MainWindow::on_btnStop_clicked()
{
    loopPlay=false;
    player->stop();
}

//倍速控制
void MainWindow::on_doubleSpinBox_valueChanged(double arg1)
{
    player->setPlaybackRate(arg1);
}

//循环播放
void MainWindow::on_btnLoop_clicked(bool checked)
{
    loopPlay = checked;
}

//音量变化
void MainWindow::on_sliderVolumn_valueChanged(int value)
{
    player->audioOutput()->setVolume(value/100.0);//0~1之间
}

//静音控制
void MainWindow::on_btnSound_clicked()
{
    bool mute = player->audioOutput()->isMuted();
    player->audioOutput()->setMuted(!mute);
    if(mute){
        ui->btnSound->setIcon(QIcon(":/images/images/volumn.bmp"));
    }else{
        ui->btnSound->setIcon(QIcon(":/images/images/mute.bmp"));
    }
}

//播放进度控制
void MainWindow::on_sliderPosition_valueChanged(int value)
{
    player->setPosition(value);
}

/*******   自定义槽函数  **********/

//播放文件发生变化时
void MainWindow::do_sourceChanged(const QUrl& media)
{
    ui->labCurMedia->setText(media.fileName());//显示当前播放的曲目名称
}

//元数据发生变化时
void MainWindow::do_metaDataChanged()
{
    QMediaMetaData metaData = player->metaData();
    QVariant metaImg = metaData.value(QMediaMetaData::ThumbnailImage);  //图片数据
    if(metaImg.isValid()){
        QImage img = metaImg.value<QImage>();  //转换为 QImage 数据
        QPixmap musicPixmap = QPixmap::fromImage(img);
        if(ui->scrollArea->width() < musicPixmap.width()){
            ui->labPic->setPixmap(musicPixmap.scaledToWidth(ui->scrollArea->width()-30));
        }else{
            ui->labPic->setPixmap(musicPixmap);
        }
    }else{
        ui->labPic->clear();
    }
}

//播放源时长变化时执行，更新进度显示
void MainWindow::do_durationChanged(qint64 duration)
{
    ui->sliderPosition->setMaximum(duration);

    int   secs=duration/1000;  //秒
    int   mins=secs/60;        //分钟
    secs=secs % 60;            //余数秒
    durationTime=QString::asprintf("%d:%d",mins,secs);
    ui->labRatio->setText(positionTime+"/"+durationTime);
}

//播放位置变化时执行，更新进度显示
void MainWindow::do_positionChanged(qint64 position)
{
    if (ui->sliderPosition->isSliderDown())     //滑条正被鼠标拖动
        return;

    ui->sliderPosition->setSliderPosition(position);
    int   secs=position/1000;   //秒
    int   mins=secs/60;         //分钟
    secs=secs % 60;             //余数秒
    positionTime=QString::asprintf("%d:%d",mins,secs);
    ui->labRatio->setText(positionTime+"/"+durationTime);
}

//播放器状态变化时执行，更新按钮状态，或播放下一曲
void MainWindow::do_stateChanged(QMediaPlayer::PlaybackState state)
{
    ui->btnPlay->setEnabled(state!=QMediaPlayer::PlayingState);
    ui->btnPause->setEnabled(state==QMediaPlayer::PlayingState);
    ui->btnStop->setEnabled(state==QMediaPlayer::PlayingState);

    //播放完一曲后停止了，如果loopPlay为true，自动播放下一曲
    if (loopPlay && (state ==QMediaPlayer::StoppedState))
    {
        int count=ui->listWidget->count();
        int curRow=ui->listWidget->currentRow();
        curRow++;
        curRow= curRow>=count? 0:curRow;
        ui->listWidget->setCurrentRow(curRow);
        player->setSource(getUrlFromItem(ui->listWidget->currentItem()));
        player->play();
    }
}




void MainWindow::on_btnAudioOutput_clicked()
{
    foreach (QAudioDevice device, QMediaDevices::audioOutputs()) {
        ui->plainTextEdit->appendPlainText(device.description());
    }
}

