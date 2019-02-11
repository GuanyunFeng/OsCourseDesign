#include "widget.h"
#include "widget1.h"
#include "widget2.h"
#include <QApplication>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
    int pid;
    if((pid  = fork()) == 0){
        QApplication a(argc, argv);
        widget1 w;
        w.setWindowTitle("0-9循环显示");
        w.show();
        a.exec();
        exit(0);
    }
    if((pid  = fork()) == 0){
        QApplication a(argc, argv);
        widget2 w;
        w.setWindowTitle("1-1000累加求和");
        w.show();
        a.exec();
        exit(0);
    }
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("时间显示窗口");
    w.show();
    return a.exec();
}
