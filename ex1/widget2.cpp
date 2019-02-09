#include "widget2.h"
#include "ui_widget2.h"
#include <unistd.h>
#include <QTimer>

widget2::widget2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::widget2)
{
    ui->setupUi(this);
    this->setFixedSize(this->width(), this->height());
    this->move(1200, 400);

    int pid = getpid();
    ui->label_2->setText(QString::number(pid, 10));

    sum = 0;
    num = 1;
    ui->label_4->setText(QString::number(sum, 10));

    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(Update()));
    timer->start(1000);
}

void widget2::Update(){
    if(num <= 1000)
        sum += num++;
    ui->label_4->setText(QString::number(sum, 10));
    ui->label_6->setText(QString::number(num - 1, 10));
}
widget2::~widget2()
{
    delete ui;
}
