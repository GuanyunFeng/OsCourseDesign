/********************************************************************************
** Form generated from reading UI file 'taskmanager.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKMANAGER_H
#define UI_TASKMANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskManager
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QWidget *tab_2;
    QGroupBox *groupBox_2;
    QProgressBar *progressBar_mem;
    QLabel *label_memused;
    QLabel *label_memtotal;
    QGroupBox *groupBox_3;
    QProgressBar *progressBar_cpu;
    QProgressBar *progressBar_cpu0;
    QProgressBar *progressBar_cpu1;
    QProgressBar *progressBar_cpu2;
    QProgressBar *progressBar_cpu3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBox_4;
    QProgressBar *progressBar_disk1;
    QLabel *label_6;
    QLabel *label_11;
    QProgressBar *progressBar_disk2;
    QLabel *label_14;
    QProgressBar *progressBar_disk3;
    QWidget *tab_3;
    QWidget *tab_4;

    void setupUi(QWidget *TaskManager)
    {
        if (TaskManager->objectName().isEmpty())
            TaskManager->setObjectName(QString::fromUtf8("TaskManager"));
        TaskManager->resize(721, 656);
        tabWidget = new QTabWidget(TaskManager);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 10, 701, 641));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableWidget = new QTableWidget(tab);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 691, 571));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(590, 580, 89, 25));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        groupBox_2 = new QGroupBox(tab_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 10, 661, 101));
        progressBar_mem = new QProgressBar(groupBox_2);
        progressBar_mem->setObjectName(QString::fromUtf8("progressBar_mem"));
        progressBar_mem->setGeometry(QRect(30, 40, 601, 23));
        progressBar_mem->setValue(24);
        label_memused = new QLabel(groupBox_2);
        label_memused->setObjectName(QString::fromUtf8("label_memused"));
        label_memused->setGeometry(QRect(40, 70, 241, 17));
        label_memtotal = new QLabel(groupBox_2);
        label_memtotal->setObjectName(QString::fromUtf8("label_memtotal"));
        label_memtotal->setGeometry(QRect(510, 70, 131, 20));
        groupBox_3 = new QGroupBox(tab_2);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 130, 661, 191));
        progressBar_cpu = new QProgressBar(groupBox_3);
        progressBar_cpu->setObjectName(QString::fromUtf8("progressBar_cpu"));
        progressBar_cpu->setGeometry(QRect(40, 50, 591, 23));
        progressBar_cpu->setValue(24);
        progressBar_cpu0 = new QProgressBar(groupBox_3);
        progressBar_cpu0->setObjectName(QString::fromUtf8("progressBar_cpu0"));
        progressBar_cpu0->setGeometry(QRect(40, 130, 118, 23));
        progressBar_cpu0->setValue(24);
        progressBar_cpu1 = new QProgressBar(groupBox_3);
        progressBar_cpu1->setObjectName(QString::fromUtf8("progressBar_cpu1"));
        progressBar_cpu1->setGeometry(QRect(190, 130, 118, 23));
        progressBar_cpu1->setValue(24);
        progressBar_cpu2 = new QProgressBar(groupBox_3);
        progressBar_cpu2->setObjectName(QString::fromUtf8("progressBar_cpu2"));
        progressBar_cpu2->setGeometry(QRect(350, 130, 118, 23));
        progressBar_cpu2->setValue(24);
        progressBar_cpu3 = new QProgressBar(groupBox_3);
        progressBar_cpu3->setObjectName(QString::fromUtf8("progressBar_cpu3"));
        progressBar_cpu3->setGeometry(QRect(510, 130, 118, 23));
        progressBar_cpu3->setValue(24);
        label = new QLabel(groupBox_3);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(90, 160, 67, 17));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(230, 160, 67, 17));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(390, 160, 67, 17));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(540, 160, 67, 17));
        label_5 = new QLabel(groupBox_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(320, 90, 67, 17));
        groupBox_4 = new QGroupBox(tab_2);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(20, 340, 661, 251));
        progressBar_disk1 = new QProgressBar(groupBox_4);
        progressBar_disk1->setObjectName(QString::fromUtf8("progressBar_disk1"));
        progressBar_disk1->setGeometry(QRect(40, 30, 591, 23));
        progressBar_disk1->setValue(24);
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(310, 60, 67, 17));
        label_11 = new QLabel(groupBox_4);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(310, 140, 67, 17));
        progressBar_disk2 = new QProgressBar(groupBox_4);
        progressBar_disk2->setObjectName(QString::fromUtf8("progressBar_disk2"));
        progressBar_disk2->setGeometry(QRect(40, 100, 591, 23));
        progressBar_disk2->setValue(24);
        label_14 = new QLabel(groupBox_4);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(310, 220, 67, 17));
        progressBar_disk3 = new QProgressBar(groupBox_4);
        progressBar_disk3->setObjectName(QString::fromUtf8("progressBar_disk3"));
        progressBar_disk3->setGeometry(QRect(40, 180, 591, 23));
        progressBar_disk3->setValue(24);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tabWidget->addTab(tab_4, QString());

        retranslateUi(TaskManager);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(TaskManager);
    } // setupUi

    void retranslateUi(QWidget *TaskManager)
    {
        TaskManager->setWindowTitle(QApplication::translate("TaskManager", "TaskManager", nullptr));
        pushButton->setText(QApplication::translate("TaskManager", "\347\273\223\346\235\237\350\277\233\347\250\213", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("TaskManager", "\350\277\233\347\250\213", nullptr));
        groupBox_2->setTitle(QApplication::translate("TaskManager", "Memory Usage", nullptr));
        label_memused->setText(QApplication::translate("TaskManager", "TextLabel", nullptr));
        label_memtotal->setText(QApplication::translate("TaskManager", "TextLabel", nullptr));
        groupBox_3->setTitle(QApplication::translate("TaskManager", "Cpu Usage", nullptr));
        label->setText(QApplication::translate("TaskManager", "core0", nullptr));
        label_2->setText(QApplication::translate("TaskManager", "core1", nullptr));
        label_3->setText(QApplication::translate("TaskManager", "core2", nullptr));
        label_4->setText(QApplication::translate("TaskManager", "core3", nullptr));
        label_5->setText(QApplication::translate("TaskManager", "usage", nullptr));
        groupBox_4->setTitle(QApplication::translate("TaskManager", "Disk Usage", nullptr));
        label_6->setText(QApplication::translate("TaskManager", "disk1", nullptr));
        label_11->setText(QApplication::translate("TaskManager", "disk2", nullptr));
        label_14->setText(QApplication::translate("TaskManager", "disk3", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("TaskManager", "\346\200\247\350\203\275", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("TaskManager", "Page", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("TaskManager", "Page", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskManager: public Ui_TaskManager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKMANAGER_H
