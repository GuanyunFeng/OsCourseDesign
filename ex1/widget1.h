#ifndef WIDGET1_H
#define WIDGET1_H

#include <QWidget>

namespace Ui {
class widget1;
}

class widget1 : public QWidget
{
    Q_OBJECT

public:
    explicit widget1(QWidget *parent = nullptr);
    ~widget1();

public slots:
    void Update();

private:
    int num;
    Ui::widget1 *ui;
};

#endif // WIDGET1_H
