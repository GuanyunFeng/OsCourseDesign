#include "widget1.h"
#include "ui_widget1.h"
#include <unistd.h>
#include <QTimer>

widget1::widget1(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget1)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
    this->move(900,400);

    int pid = getpid();
    ui->label_2->setText(QString::number(pid, 10));

    num = 0;
    ui->label_4->setText(QString::number(num, 10));

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(Update()));
    timer->start(1000);
}

void widget1::Update(){
    num = (num + 1) % 10;
    ui->label_4->setText(QString::number(num, 10));
}

widget1::~widget1()
{
    delete ui;
}
