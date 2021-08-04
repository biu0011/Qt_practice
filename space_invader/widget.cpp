#include "widget.h"
#include <QtGui>

const int PANEL_HEIGHT = 30;

Widget::Widget(QWidget* parent)
    :QFrame(parent), cur_width(0)
{
    setMinimumHeight(PANEL_HEIGHT);
}
