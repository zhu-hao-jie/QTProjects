#ifndef TDICETHREAD_H
#define TDICETHREAD_H

#include <QThread>

class TDiceThread : public QThread
{
    Q_OBJECT
public:
    //TDiceThread();
    explicit TDiceThread(QObject* parent=nullptr);
    void diceBegin();
    void dicePause();
    void stopThread();

private:
    int m_seq = 0;
    int m_diceValue;
    bool m_paused = true;
    bool m_stop = false;

protected:
    void run();


signals:
    void newValue(int seq,int diceValue);

};

#endif // TDICETHREAD_H
