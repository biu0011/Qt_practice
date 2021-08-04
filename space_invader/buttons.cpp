#include "buttons.h"
#include <QVBoxLayout>
#include <QHBoxLayout>

Buttons::Buttons(QWidget* parent)
    :QWidget(parent)
{
    auto* okBtn = new QPushButton("OK",this);
    auto* applyBtn = new QPushButton("Apply",this);

    auto* vBox = new QVBoxLayout(this);
    auto* hBox = new QHBoxLayout(this);

    hBox->addWidget(okBtn, 1, Qt::AlignRight);
    hBox->addWidget(applyBtn, 0);

    vBox->addStretch(1);
    vBox->addLayout(hBox);

//    setLayout(vBox);
}
