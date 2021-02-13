/********************************************************************************
** Form generated from reading UI file 'deployqt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPLOYQT_H
#define UI_DEPLOYQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DEPLOYQT
{
public:
    QGridLayout *gridLayout_4;
    QWidget *widget;
    QPushButton *PB_chooseExe;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QTextEdit *TE_output;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QTextEdit *TE_errors;

    void setupUi(QWidget *DEPLOYQT)
    {
        if (DEPLOYQT->objectName().isEmpty())
            DEPLOYQT->setObjectName(QString::fromUtf8("DEPLOYQT"));
        DEPLOYQT->resize(621, 664);
        gridLayout_4 = new QGridLayout(DEPLOYQT);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        widget = new QWidget(DEPLOYQT);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMaximumSize(QSize(16777215, 350));
        PB_chooseExe = new QPushButton(widget);
        PB_chooseExe->setObjectName(QString::fromUtf8("PB_chooseExe"));
        PB_chooseExe->setGeometry(QRect(13, 13, 112, 34));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(PB_chooseExe->sizePolicy().hasHeightForWidth());
        PB_chooseExe->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(widget, 0, 0, 1, 1);

        groupBox = new QGroupBox(DEPLOYQT);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        TE_output = new QTextEdit(groupBox);
        TE_output->setObjectName(QString::fromUtf8("TE_output"));

        gridLayout_2->addWidget(TE_output, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(DEPLOYQT);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMaximumSize(QSize(16777215, 150));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        TE_errors = new QTextEdit(groupBox_2);
        TE_errors->setObjectName(QString::fromUtf8("TE_errors"));

        gridLayout_3->addWidget(TE_errors, 0, 0, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 2, 0, 1, 1);


        retranslateUi(DEPLOYQT);

        QMetaObject::connectSlotsByName(DEPLOYQT);
    } // setupUi

    void retranslateUi(QWidget *DEPLOYQT)
    {
        DEPLOYQT->setWindowTitle(QApplication::translate("DEPLOYQT", "DEPLOYQT", nullptr));
        PB_chooseExe->setText(QApplication::translate("DEPLOYQT", "\351\200\211\346\213\251EXE\345\271\266\346\211\223\345\214\205", nullptr));
        groupBox->setTitle(QApplication::translate("DEPLOYQT", "\350\276\223\345\207\272", nullptr));
        groupBox_2->setTitle(QApplication::translate("DEPLOYQT", "\351\224\231\350\257\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DEPLOYQT: public Ui_DEPLOYQT {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPLOYQT_H
