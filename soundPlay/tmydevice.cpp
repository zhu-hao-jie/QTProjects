#include "tmydevice.h"
#include <QtCharts/QXYSeries>

TMyDevice::TMyDevice(QObject *parent) :
    QIODevice(parent)
{
}

//代替 open 函数
void TMyDevice::openDAQ(qint64 pointsCount, bool drawChart, QLineSeries *series, bool saveToFile, QString filename)
{
    m_range=pointsCount;   //序列的数据点最多个数
    m_drawChart=drawChart;  //是否绘制曲线
    m_series= series;       //序列

    m_saveToFile=saveToFile;    //是否保存到文件
    m_fileName=filename;        //文件名
    this->open(QIODeviceBase::WriteOnly);   //打开本设备

    //如果需要保存到文件，就需要打开文件设备，以备写入数据
    if (!m_saveToFile)
        return;
    if (QFile::exists(m_fileName))
        QFile::remove(m_fileName);      //删除原有文件
    m_file.setFileName(m_fileName);
    m_file.open(QIODeviceBase::WriteOnly);  //打开文件设备
}

void TMyDevice::closeDAQ()
{
    if (m_saveToFile)
        m_file.close(); //关闭文件

    this->close();      //关闭本IO设备
}

//
qint64 TMyDevice::readData(char * data, qint64 maxSize)
{//读数据，不做处理
    Q_UNUSED(data)
    Q_UNUSED(maxSize)
    return -1;
}

qint64 TMyDevice::writeData(const char * data, qint64 maxSize)
{//写缓冲区的数据
    if (m_saveToFile)
        m_file.write(data, maxSize);    //缓冲区的数据写入文件

    if(m_drawChart)     //需要绘制曲线
    {
        QList<QPointF> points;
        points.reserve(m_range);  //预分配空间,可加快处理速度
        int oldCount=m_series->points().size(); //现在序列的数据点数

        if (oldCount< m_range)    //序列的数据未满
            points = m_series->points();
        else
        {
            for (int i = maxSize; i < oldCount; i++)
                points.append(QPointF(i - maxSize, m_series->points().at(i).y()));
        }

        int curCount = points.size();
        for (int k = 0; k < maxSize; k++)  //添加新数据
            points.append(QPointF(k + curCount, (quint8)(data[k])));
        m_series->replace(points);         //最快的方式
    }

    //发射信号
    emit updateBlockSize(maxSize);
    return maxSize;
}
