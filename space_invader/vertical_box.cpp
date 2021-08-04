#include "vertical_box.h"
#include <QPushButton>
#include <QVBoxLayout>

Vertical_box::Vertical_box(QWidget* parent)
    :QWidget(parent)
{
    auto* vbox = new QVBoxLayout(this);
    vbox->setSpacing(3);

    auto* settings = new QPushButton("Setting",this);
    settings->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);

    auto* accounts = new QPushButton("Accounts",this);
    accounts->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    auto* loans = new QPushButton("Loans",this);
    loans->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    auto *cash = new QPushButton("Cash", this);
    cash->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    auto *debts = new QPushButton("Debts", this);
    debts->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    vbox->addWidget(settings);
    vbox->addWidget(accounts);
    vbox->addWidget(loans);
    vbox->addWidget(cash);
    vbox->addWidget(debts);

    setLayout(vbox);
}
