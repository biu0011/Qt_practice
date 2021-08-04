#ifndef PLUSMINUS_H
#define PLUSMINUS_H

#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLabel>


class plusminus : public QWidget
{
    Q_OBJECT
public:
    explicit plusminus(QWidget *parent = nullptr);

private slots:
    void onPlus();
    void onMinus();

private:
    QLabel* lbl;
};

#endif // PLUSMINUS_H
