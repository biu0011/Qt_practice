#ifndef BUTTONS_H
#define BUTTONS_H

#include <QWidget>
#include <QPushButton>

class Buttons : public QWidget
{
public:
    Buttons(QWidget* parents = nullptr);

private:
    QPushButton* okBtn;
    QPushButton* applyBtn;
};

#endif // BUTTONS_H
