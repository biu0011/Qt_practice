#include "absolute.h"
#include <QDesktopWidget>
#include <QTextEdit>

Absolute::Absolute(QWidget *parent) : QWidget(parent)
{
    auto* ledit = new QTextEdit(this);
    ledit->setGeometry(5,5,200,150);
}

