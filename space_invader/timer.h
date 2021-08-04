#ifndef TIMER_H
#define TIMER_H

#include <QWidget>
#include <QTime>
#include <QLabel>

class Timer : public QWidget
{
public:
    explicit Timer(QWidget *parent = nullptr);

protected:
    void timerEvent(QTimerEvent* e);

private:
    QLabel* label;

};

#endif // TIMER_H
