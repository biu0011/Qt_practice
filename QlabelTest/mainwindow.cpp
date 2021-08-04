#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QTextBlockFormat>
#include <QTextCursor>
#include <QGraphicsTextItem>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QString strInfo = QString("您好，世界");
    QGraphicsTextItem * textItem  = new QGraphicsTextItem(strInfo,this);
    textItem->setTextWidth(200);
    QTextBlockFormat format;
    format.setAlignment(Qt::AlignCenter);
    QTextCursor cursor = textItem->textCursor();
    cursor.select(QTextCursor::Document);
    cursor.mergeBlockFormat(format);
    cursor.clearSelection();
    textItem->setTextCursor(cursor);
}

MainWindow::~MainWindow()
{
    delete ui;
}

