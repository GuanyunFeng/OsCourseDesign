#ifndef WIDGET2_H
#define WIDGET2_H

#include <QWidget>

namespace Ui {
class widget2;
}

class widget2 : public QWidget
{
    Q_OBJECT

public:
    explicit widget2(QWidget *parent = nullptr);
    ~widget2();

public slots:
    void Update();

private:
    int sum, num;
    Ui::widget2 *ui;
};

#endif // WIDGET2_H
