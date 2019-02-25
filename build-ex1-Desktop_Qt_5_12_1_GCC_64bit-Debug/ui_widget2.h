/********************************************************************************
** Form generated from reading UI file 'widget2.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET2_H
#define UI_WIDGET2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_widget2
{
public:
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_4;

    void setupUi(QWidget *widget2)
    {
        if (widget2->objectName().isEmpty())
            widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->resize(285, 125);
        widget = new QWidget(widget2);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 20, 234, 89));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_2->addWidget(label_3);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_2->addWidget(label_4);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(widget2);

        QMetaObject::connectSlotsByName(widget2);
    } // setupUi

    void retranslateUi(QWidget *widget2)
    {
        widget2->setWindowTitle(QApplication::translate("widget2", "Widget", nullptr));
        label->setText(QApplication::translate("widget2", "\345\275\223\345\211\215\350\277\233\347\250\213pid:", nullptr));
        label_2->setText(QApplication::translate("widget2", "TextLabel", nullptr));
        label_5->setText(QApplication::translate("widget2", "\345\275\223\345\211\215\347\264\257\345\212\240\346\225\260:", nullptr));
        label_6->setText(QApplication::translate("widget2", "TextLabel", nullptr));
        label_3->setText(QApplication::translate("widget2", "1-1000\347\264\257\345\212\240\345\222\214:", nullptr));
        label_4->setText(QApplication::translate("widget2", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class widget2: public Ui_widget2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET2_H
