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
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_Diagnostics
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_Diagnostics;
    QSpacerItem *horizontalSpacer_13;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *groupBox_NetworkUtilities;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_7;
    QLineEdit *lineEdit_Address;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_9;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pushButton_1;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_11;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_12;
    QSpacerItem *horizontalSpacer_14;
    QTextEdit *diagnosticresultText;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *Diagnostics)
    {
        if (Diagnostics->objectName().isEmpty())
            Diagnostics->setObjectName(QStringLiteral("Diagnostics"));
        Diagnostics->resize(796, 705);
        verticalLayout = new QVBoxLayout(Diagnostics);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_Diagnostics = new QLabel(Diagnostics);
        label_Diagnostics->setObjectName(QStringLiteral("label_Diagnostics"));
        label_Diagnostics->setMaximumSize(QSize(91, 21));
        label_Diagnostics->setStyleSheet(QLatin1String("font: 75 italic 12pt \"Century Schoolbook L\"\n"
""));
        label_Diagnostics->setFrameShadow(QFrame::Plain);
        label_Diagnostics->setTextFormat(Qt::RichText);
        label_Diagnostics->setScaledContents(false);

        horizontalLayout_4->addWidget(label_Diagnostics);

        horizontalSpacer_13 = new QSpacerItem(25, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_13);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        groupBox_NetworkUtilities = new QGroupBox(Diagnostics);
        groupBox_NetworkUtilities->setObjectName(QStringLiteral("groupBox_NetworkUtilities"));
        groupBox_NetworkUtilities->setMaximumSize(QSize(531, 141));
        QFont font;
        groupBox_NetworkUtilities->setFont(font);
        groupBox_NetworkUtilities->setStyleSheet(QStringLiteral("font: 9pt \"Sans Serif\";"));
        verticalLayout_2 = new QVBoxLayout(groupBox_NetworkUtilities);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_8 = new QSpacerItem(25, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_8);

        horizontalSpacer_7 = new QSpacerItem(25, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_7);

        lineEdit_Address = new QLineEdit(groupBox_NetworkUtilities);
        lineEdit_Address->setObjectName(QStringLiteral("lineEdit_Address"));
        lineEdit_Address->setMaximumSize(QSize(141, 22));

        horizontalLayout->addWidget(lineEdit_Address);

        horizontalSpacer_6 = new QSpacerItem(25, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        horizontalSpacer_9 = new QSpacerItem(25, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer_10 = new QSpacerItem(25, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        pushButton_1 = new QPushButton(groupBox_NetworkUtilities);
        pushButton_1->setObjectName(QStringLiteral("pushButton_1"));
        pushButton_1->setMaximumSize(QSize(80, 21));
        pushButton_1->setStyleSheet(QStringLiteral("font: 8pt \"Sans Serif\";"));

        horizontalLayout_2->addWidget(pushButton_1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton_11 = new QPushButton(groupBox_NetworkUtilities);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setMaximumSize(QSize(80, 21));
        pushButton_11->setStyleSheet(QStringLiteral("font: 8pt \"Sans Serif\";"));

        horizontalLayout_2->addWidget(pushButton_11);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_4);

        pushButton_12 = new QPushButton(groupBox_NetworkUtilities);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setMaximumSize(QSize(80, 21));
        pushButton_12->setStyleSheet(QStringLiteral("font: 8pt \"Sans Serif\";"));

        horizontalLayout_2->addWidget(pushButton_12);


        verticalLayout_2->addLayout(horizontalLayout_2);


        horizontalLayout_5->addWidget(groupBox_NetworkUtilities);

        horizontalSpacer_14 = new QSpacerItem(25, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_14);


        verticalLayout->addLayout(horizontalLayout_5);

        diagnosticresultText = new QTextEdit(Diagnostics);
        diagnosticresultText->setObjectName(QStringLiteral("diagnosticresultText"));
        diagnosticresultText->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        diagnosticresultText->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);

        verticalLayout->addWidget(diagnosticresultText);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalSpacer_12 = new QSpacerItem(25, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_12);

        horizontalSpacer_11 = new QSpacerItem(25, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_11);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        pushButton_6 = new QPushButton(Diagnostics);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMaximumSize(QSize(80, 21));
        pushButton_6->setStyleSheet(QStringLiteral("font: 8pt \"Sans Serif\";"));

        horizontalLayout_3->addWidget(pushButton_6);

        pushButton_5 = new QPushButton(Diagnostics);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(80, 21));
        pushButton_5->setStyleSheet(QStringLiteral("font: 8pt \"Sans Serif\";"));

        horizontalLayout_3->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(Diagnostics);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(80, 21));
        pushButton_4->setStyleSheet(QStringLiteral("font: 8pt \"Sans Serif\";"));

        horizontalLayout_3->addWidget(pushButton_4);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_2 = new QSpacerItem(20, 257, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


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
