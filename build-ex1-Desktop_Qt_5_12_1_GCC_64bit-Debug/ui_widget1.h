/********************************************************************************
** Form generated from reading UI file 'widget1.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET1_H
#define UI_WIDGET1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget1
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;

    void setupUi(QWidget *widget1)
    {
        if (widget1->objectName().isEmpty())
            widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->resize(285, 126);
        layoutWidget = new QWidget(widget1);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 20, 209, 89));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(widget1);

        QMetaObject::connectSlotsByName(widget1);
    } // setupUi

    void retranslateUi(QWidget *widget1)
    {
        widget1->setWindowTitle(QApplication::translate("widget1", "Widget", nullptr));
        label->setText(QApplication::translate("widget1", "\345\275\223\345\211\215\350\277\233\347\250\213pid:", nullptr));
        label_2->setText(QApplication::translate("widget1", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("widget1", "0-9\345\276\252\347\216\257\346\230\276\347\244\272:", nullptr));
        label_4->setText(QApplication::translate("widget1", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class widget1: public Ui_widget1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET1_H
