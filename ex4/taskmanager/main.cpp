#include "taskmanager.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TaskManager w;
    w.show();

    return a.exec();
}
