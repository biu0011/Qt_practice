#ifndef MOVE_H
#define MOVE_H

#include <QWidget>

class Move : public QWidget
{
    Q_OBJECT
public:
    explicit Move(QWidget *parent = nullptr);

protected:
    void moveEvent(QMoveEvent* e);

};

#endif // MOVE_H
