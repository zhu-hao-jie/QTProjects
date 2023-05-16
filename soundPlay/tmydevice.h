#ifndef TMYDEVICE_H
#define TMYDEVICE_H

#include <QIODevice>
#include <QtCharts>

class TMyDevice : public QIODevice
{
    Q_OBJECT

private:
    qint64 m_range = 4000;
    bool m_drawChart= true;
    QLineSeries* m_series;
    bool m_saveToFile = false;
    QString m_fileName;
    QFile m_file; //最终的文件存于此

public:
    TMyDevice(QObject *parent = nullptr);
    void openDAQ(qint64 pointsCount,bool drawChart,QLineSeries* series,bool saveToFile,QString filename);
    void closeDAQ();

protected:
    qint64 readData(char* data,qint64 maxSize);//从设备读取数据到缓冲区
    qint64 writeData(const char* data,qint64 maxSize);//将数据写入设备

signals:
    void updateBlockSize(qint64 blockSize); //在 writeData 里发射的一个信号
};

#endif // TMYDEVICE_H
