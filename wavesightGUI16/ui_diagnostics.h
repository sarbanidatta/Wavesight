/********************************************************************************
** Form generated from reading UI file 'diagnostics.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIAGNOSTICS_H
#define UI_DIAGNOSTICS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Diagnostics
{
public:
    QLabel *label_Diagnostics;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_diagnostics2;
    QVBoxLayout *verticalLayout_diagnostics;
    QGroupBox *groupBox_NetworkUtilities;
    QLineEdit *lineEdit_Address;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_diagnostics2;
    QPushButton *pushButton_1;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_11;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_12;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QHBoxLayout *horizontalLayout_diagnostics;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;

    void setupUi(QDialog *Diagnostics)
    {
        if (Diagnostics->objectName().isEmpty())
            Diagnostics->setObjectName(QStringLiteral("Diagnostics"));
        Diagnostics->resize(796, 705);
        label_Diagnostics = new QLabel(Diagnostics);
        label_Diagnostics->setObjectName(QStringLiteral("label_Diagnostics"));
        label_Diagnostics->setGeometry(QRect(20, 10, 91, 21));
        label_Diagnostics->setMaximumSize(QSize(91, 21));
        label_Diagnostics->setStyleSheet(QLatin1String("font: 75 italic 12pt \"Century Schoolbook L\"\n"
""));
        label_Diagnostics->setFrameShadow(QFrame::Plain);
        label_Diagnostics->setTextFormat(Qt::RichText);
        label_Diagnostics->setScaledContents(false);
        layoutWidget = new QWidget(Diagnostics);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 30, 541, 421));
        verticalLayout_diagnostics2 = new QVBoxLayout(layoutWidget);
        verticalLayout_diagnostics2->setSpacing(6);
        verticalLayout_diagnostics2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_diagnostics2->setObjectName(QStringLiteral("verticalLayout_diagnostics2"));
        verticalLayout_diagnostics2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_diagnostics = new QVBoxLayout();
        verticalLayout_diagnostics->setSpacing(6);
        verticalLayout_diagnostics->setObjectName(QStringLiteral("verticalLayout_diagnostics"));
        groupBox_NetworkUtilities = new QGroupBox(layoutWidget);
        groupBox_NetworkUtilities->setObjectName(QStringLiteral("groupBox_NetworkUtilities"));
        groupBox_NetworkUtilities->setMaximumSize(QSize(531, 141));
        groupBox_NetworkUtilities->setStyleSheet(QStringLiteral("font: 8pt \"Sans Serif\";"));
        lineEdit_Address = new QLineEdit(groupBox_NetworkUtilities);
        lineEdit_Address->setObjectName(QStringLiteral("lineEdit_Address"));
        lineEdit_Address->setGeometry(QRect(200, 40, 141, 22));
        lineEdit_Address->setMaximumSize(QSize(141, 22));
        layoutWidget_2 = new QWidget(groupBox_NetworkUtilities);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(77, 90, 391, 31));
        layoutWidget_2->setMaximumSize(QSize(391, 31));
        horizontalLayout_diagnostics2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_diagnostics2->setSpacing(6);
        horizontalLayout_diagnostics2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_diagnostics2->setObjectName(QStringLiteral("horizontalLayout_diagnostics2"));
        horizontalLayout_diagnostics2->setContentsMargins(0, 0, 0, 0);
        pushButton_1 = new QPushButton(layoutWidget_2);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setMaximumSize(QSize(80, 21));
        pushButton_1->setStyleSheet(QStringLiteral("font: 8pt \"Sans Serif\";"));

        horizontalLayout_diagnostics2->addWidget(pushButton_1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_diagnostics2->addItem(horizontalSpacer_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_diagnostics2->addItem(horizontalSpacer);

        pushButton_11 = new QPushButton(layoutWidget_2);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setMaximumSize(QSize(80, 21));
        pushButton_11->setStyleSheet(QStringLiteral("font: 8pt \"Sans Serif\";"));

        horizontalLayout_diagnostics2->addWidget(pushButton_11);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_diagnostics2->addItem(horizontalSpacer_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_diagnostics2->addItem(horizontalSpacer_4);

        pushButton_12 = new QPushButton(layoutWidget_2);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setMaximumSize(QSize(80, 21));
        pushButton_12->setStyleSheet(QStringLiteral("font: 8pt \"Sans Serif\";"));

        horizontalLayout_diagnostics2->addWidget(pushButton_12);


        verticalLayout_diagnostics->addWidget(groupBox_NetworkUtilities);

        scrollArea = new QScrollArea(layoutWidget);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setMaximumSize(QSize(531, 221));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QStringLiteral("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 529, 219));
        scrollArea->setWidget(scrollAreaWidgetContents_2);

        verticalLayout_diagnostics->addWidget(scrollArea);


        verticalLayout_diagnostics2->addLayout(verticalLayout_diagnostics);

        horizontalLayout_diagnostics = new QHBoxLayout();
        horizontalLayout_diagnostics->setSpacing(6);
        horizontalLayout_diagnostics->setObjectName(QStringLiteral("horizontalLayout_diagnostics"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_diagnostics->addItem(horizontalSpacer_5);

        pushButton_6 = new QPushButton(layoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMaximumSize(QSize(80, 21));
        pushButton_6->setStyleSheet(QStringLiteral("font: 8pt \"Sans Serif\";"));

        horizontalLayout_diagnostics->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(80, 21));
        pushButton_5->setStyleSheet(QStringLiteral("font: 8pt \"Sans Serif\";"));

        horizontalLayout_diagnostics->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(80, 21));
        pushButton_4->setStyleSheet(QStringLiteral("font: 8pt \"Sans Serif\";"));

        horizontalLayout_diagnostics->addWidget(pushButton_4);


        verticalLayout_diagnostics2->addLayout(horizontalLayout_diagnostics);


        retranslateUi(Diagnostics);

        QMetaObject::connectSlotsByName(Diagnostics);
    } // setupUi

    void retranslateUi(QDialog *Diagnostics)
    {
        Diagnostics->setWindowTitle(QApplication::translate("Diagnostics", "Wavesight | Diagnostics", 0));
        label_Diagnostics->setText(QApplication::translate("Diagnostics", "Diagnostics", 0));
        groupBox_NetworkUtilities->setTitle(QApplication::translate("Diagnostics", "Network Utilities", 0));
        pushButton_1->setText(QApplication::translate("Diagnostics", "Ping", 0));
        pushButton_11->setText(QApplication::translate("Diagnostics", "Traceroute", 0));
        pushButton_12->setText(QApplication::translate("Diagnostics", "NSlookup", 0));
        pushButton_6->setText(QApplication::translate("Diagnostics", "Reset", 0));
        pushButton_5->setText(QApplication::translate("Diagnostics", "Save", 0));
        pushButton_4->setText(QApplication::translate("Diagnostics", "Browse", 0));
    } // retranslateUi

};

namespace Ui {
    class Diagnostics: public Ui_Diagnostics {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIAGNOSTICS_H
