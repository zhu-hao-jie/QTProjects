#include "tdicethread.h"
#include <QRandomGenerator>>
TDiceThread::TDiceThread(QObject *parent):QThread{parent}
{

}
void TDiceThread::diceBegin()
{
    m_paused = false;//开始掷骰子
}
void TDiceThread::dicePause()
{
    m_paused=true;
}
void TDiceThread::stopThread()
{
    m_stop = true;
}

void TDiceThread::run()
{
    m_stop = false;
    m_paused = true;
    m_seq = 0;
    while(!m_stop)
    {
        if(!m_paused)
        {
            m_diceValue = QRandomGenerator::global()->bounded(1,7);
            m_seq++;
            //emit : 发射信号的作用
            emit newValue(m_seq,m_diceValue);//发射信号
        }
        msleep(1000);
    }
    quit();
}
