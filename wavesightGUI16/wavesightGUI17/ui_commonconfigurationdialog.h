/********************************************************************************
** Form generated from reading UI file 'commonconfigurationdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMONCONFIGURATIONDIALOG_H
#define UI_COMMONCONFIGURATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QColumnView>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CommonConfigurationDialog
{
public:
    QLabel *label;
    QGroupBox *groupBox_protocol;
    QColumnView *columnView;
    QLabel *label_protocol;
    QComboBox *comboBox_protocol;
    QGroupBox *groupBox_DHCP;
    QColumnView *columnView_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_dhcp_1;
    QLabel *label_dhcp_2;
    QLabel *label_dhcp_3;
    QLabel *label_dhcp_4;
    QLabel *label_dhcp_5;
    QLabel *label_dhcp_6;
    QLabel *label_dhcp_7;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *lineEdit_dhcp_1;
    QLineEdit *lineEdit_dhcp_2;
    QLineEdit *lineEdit_dhcp_3;
    QLineEdit *lineEdit_dhcp_4;
    QLineEdit *lineEdit_dhcp_5;
    QLineEdit *lineEdit_dhcp_6;
    QLineEdit *lineEdit_dhcp_7;
    QGroupBox *groupBox_static;
    QColumnView *columnView_3;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_static_1;
    QLabel *label_static_2;
    QLabel *label_static_3;
    QLabel *label_static_4;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_6;
    QLineEdit *lineEdit_static_1;
    QLineEdit *lineEdit_static_2;
    QLineEdit *lineEdit_static_3;
    QLineEdit *lineEdit_static_4;
    QPushButton *pushButton_cancle;
    QPushButton *pushButton_apply;

    void setupUi(QDialog *CommonConfigurationDialog)
    {
        if (CommonConfigurationDialog->objectName().isEmpty())
            CommonConfigurationDialog->setObjectName(QStringLiteral("CommonConfigurationDialog"));
        CommonConfigurationDialog->resize(764, 616);
        label = new QLabel(CommonConfigurationDialog);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 171, 16));
        groupBox_protocol = new QGroupBox(CommonConfigurationDialog);
        groupBox_protocol->setObjectName(QStringLiteral("groupBox_protocol"));
        groupBox_protocol->setGeometry(QRect(30, 40, 591, 80));
        columnView = new QColumnView(groupBox_protocol);
        columnView->setObjectName(QStringLiteral("columnView"));
        columnView->setGeometry(QRect(0, 20, 591, 61));
        label_protocol = new QLabel(groupBox_protocol);
        label_protocol->setObjectName(QStringLiteral("label_protocol"));
        label_protocol->setGeometry(QRect(10, 40, 59, 14));
        comboBox_protocol = new QComboBox(groupBox_protocol);
        comboBox_protocol->setObjectName(QStringLiteral("comboBox_protocol"));
        comboBox_protocol->setEnabled(true);
        comboBox_protocol->setGeometry(QRect(360, 40, 191, 22));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(comboBox_protocol->sizePolicy().hasHeightForWidth());
        comboBox_protocol->setSizePolicy(sizePolicy);
        columnView->raise();
        label_protocol->raise();
        comboBox_protocol->raise();
        groupBox_DHCP = new QGroupBox(CommonConfigurationDialog);
        groupBox_DHCP->setObjectName(QStringLiteral("groupBox_DHCP"));
        groupBox_DHCP->setGeometry(QRect(30, 140, 591, 231));
        columnView_2 = new QColumnView(groupBox_DHCP);
        columnView_2->setObjectName(QStringLiteral("columnView_2"));
        columnView_2->setGeometry(QRect(0, 20, 591, 211));
        verticalLayoutWidget = new QWidget(groupBox_DHCP);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 20, 176, 211));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_dhcp_1 = new QLabel(verticalLayoutWidget);
        label_dhcp_1->setObjectName(QStringLiteral("label_dhcp_1"));

        verticalLayout_3->addWidget(label_dhcp_1);

        label_dhcp_2 = new QLabel(verticalLayoutWidget);
        label_dhcp_2->setObjectName(QStringLiteral("label_dhcp_2"));

        verticalLayout_3->addWidget(label_dhcp_2);

        label_dhcp_3 = new QLabel(verticalLayoutWidget);
        label_dhcp_3->setObjectName(QStringLiteral("label_dhcp_3"));

        verticalLayout_3->addWidget(label_dhcp_3);

        label_dhcp_4 = new QLabel(verticalLayoutWidget);
        label_dhcp_4->setObjectName(QStringLiteral("label_dhcp_4"));

        verticalLayout_3->addWidget(label_dhcp_4);

        label_dhcp_5 = new QLabel(verticalLayoutWidget);
        label_dhcp_5->setObjectName(QStringLiteral("label_dhcp_5"));

        verticalLayout_3->addWidget(label_dhcp_5);

        label_dhcp_6 = new QLabel(verticalLayoutWidget);
        label_dhcp_6->setObjectName(QStringLiteral("label_dhcp_6"));

        verticalLayout_3->addWidget(label_dhcp_6);

        label_dhcp_7 = new QLabel(verticalLayoutWidget);
        label_dhcp_7->setObjectName(QStringLiteral("label_dhcp_7"));

        verticalLayout_3->addWidget(label_dhcp_7);

        verticalLayoutWidget_2 = new QWidget(groupBox_DHCP);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(360, 20, 201, 211));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        lineEdit_dhcp_1 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_dhcp_1->setObjectName(QStringLiteral("lineEdit_dhcp_1"));

        verticalLayout_4->addWidget(lineEdit_dhcp_1);

        lineEdit_dhcp_2 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_dhcp_2->setObjectName(QStringLiteral("lineEdit_dhcp_2"));

        verticalLayout_4->addWidget(lineEdit_dhcp_2);

        lineEdit_dhcp_3 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_dhcp_3->setObjectName(QStringLiteral("lineEdit_dhcp_3"));

        verticalLayout_4->addWidget(lineEdit_dhcp_3);

        lineEdit_dhcp_4 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_dhcp_4->setObjectName(QStringLiteral("lineEdit_dhcp_4"));

        verticalLayout_4->addWidget(lineEdit_dhcp_4);

        lineEdit_dhcp_5 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_dhcp_5->setObjectName(QStringLiteral("lineEdit_dhcp_5"));

        verticalLayout_4->addWidget(lineEdit_dhcp_5);

        lineEdit_dhcp_6 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_dhcp_6->setObjectName(QStringLiteral("lineEdit_dhcp_6"));

        verticalLayout_4->addWidget(lineEdit_dhcp_6);

        lineEdit_dhcp_7 = new QLineEdit(verticalLayoutWidget_2);
        lineEdit_dhcp_7->setObjectName(QStringLiteral("lineEdit_dhcp_7"));

        verticalLayout_4->addWidget(lineEdit_dhcp_7);

        groupBox_static = new QGroupBox(CommonConfigurationDialog);
        groupBox_static->setObjectName(QStringLiteral("groupBox_static"));
        groupBox_static->setGeometry(QRect(30, 390, 591, 171));
        columnView_3 = new QColumnView(groupBox_static);
        columnView_3->setObjectName(QStringLiteral("columnView_3"));
        columnView_3->setGeometry(QRect(0, 20, 591, 151));
        verticalLayoutWidget_3 = new QWidget(groupBox_static);
        verticalLayoutWidget_3->setObjectName(QStringLiteral("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(10, 20, 121, 151));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_static_1 = new QLabel(verticalLayoutWidget_3);
        label_static_1->setObjectName(QStringLiteral("label_static_1"));

        verticalLayout_5->addWidget(label_static_1);

        label_static_2 = new QLabel(verticalLayoutWidget_3);
        label_static_2->setObjectName(QStringLiteral("label_static_2"));

        verticalLayout_5->addWidget(label_static_2);

        label_static_3 = new QLabel(verticalLayoutWidget_3);
        label_static_3->setObjectName(QStringLiteral("label_static_3"));

        verticalLayout_5->addWidget(label_static_3);

        label_static_4 = new QLabel(verticalLayoutWidget_3);
        label_static_4->setObjectName(QStringLiteral("label_static_4"));

        verticalLayout_5->addWidget(label_static_4);

        verticalLayoutWidget_4 = new QWidget(groupBox_static);
        verticalLayoutWidget_4->setObjectName(QStringLiteral("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(360, 20, 201, 151));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        lineEdit_static_1 = new QLineEdit(verticalLayoutWidget_4);
        lineEdit_static_1->setObjectName(QStringLiteral("lineEdit_static_1"));

        verticalLayout_6->addWidget(lineEdit_static_1);

        lineEdit_static_2 = new QLineEdit(verticalLayoutWidget_4);
        lineEdit_static_2->setObjectName(QStringLiteral("lineEdit_static_2"));

        verticalLayout_6->addWidget(lineEdit_static_2);

        lineEdit_static_3 = new QLineEdit(verticalLayoutWidget_4);
        lineEdit_static_3->setObjectName(QStringLiteral("lineEdit_static_3"));

        verticalLayout_6->addWidget(lineEdit_static_3);

        lineEdit_static_4 = new QLineEdit(verticalLayoutWidget_4);
        lineEdit_static_4->setObjectName(QStringLiteral("lineEdit_static_4"));

        verticalLayout_6->addWidget(lineEdit_static_4);

        pushButton_cancle = new QPushButton(CommonConfigurationDialog);
        pushButton_cancle->setObjectName(QStringLiteral("pushButton_cancle"));
        pushButton_cancle->setGeometry(QRect(540, 560, 80, 22));
        pushButton_apply = new QPushButton(CommonConfigurationDialog);
        pushButton_apply->setObjectName(QStringLiteral("pushButton_apply"));
        pushButton_apply->setGeometry(QRect(460, 560, 80, 22));
        label->raise();
        groupBox_protocol->raise();
        groupBox_DHCP->raise();
        groupBox_static->raise();
        pushButton_cancle->raise();
        pushButton_apply->raise();

        retranslateUi(CommonConfigurationDialog);

        QMetaObject::connectSlotsByName(CommonConfigurationDialog);
    } // setupUi

    void retranslateUi(QDialog *CommonConfigurationDialog)
    {
        CommonConfigurationDialog->setWindowTitle(QApplication::translate("CommonConfigurationDialog", "WaveSight | WiFy Configuration via SNMP", 0));
        label->setText(QApplication::translate("CommonConfigurationDialog", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Common Cofiguration</span></p></body></html>", 0));
        groupBox_protocol->setTitle(QApplication::translate("CommonConfigurationDialog", "Protocol Configuration", 0));
        label_protocol->setText(QApplication::translate("CommonConfigurationDialog", "Protocol", 0));
        comboBox_protocol->clear();
        comboBox_protocol->insertItems(0, QStringList()
         << QApplication::translate("CommonConfigurationDialog", "DHCP", 0)
         << QApplication::translate("CommonConfigurationDialog", "Static", 0)
        );
        groupBox_DHCP->setTitle(QApplication::translate("CommonConfigurationDialog", "DHCP Configuration", 0));
        label_dhcp_1->setText(QApplication::translate("CommonConfigurationDialog", "DHCP Server IP Start", 0));
        label_dhcp_2->setText(QApplication::translate("CommonConfigurationDialog", "DHCP Server IP End", 0));
        label_dhcp_3->setText(QApplication::translate("CommonConfigurationDialog", "DHCP Netmask", 0));
        label_dhcp_4->setText(QApplication::translate("CommonConfigurationDialog", "DHCP Server Gateway", 0));
        label_dhcp_5->setText(QApplication::translate("CommonConfigurationDialog", "DHCP Server Primary DNS", 0));
        label_dhcp_6->setText(QApplication::translate("CommonConfigurationDialog", "DHCP Server Secondary DNS", 0));
        label_dhcp_7->setText(QApplication::translate("CommonConfigurationDialog", "DHCP Server Lease Time", 0));
        groupBox_static->setTitle(QApplication::translate("CommonConfigurationDialog", "Static Configuration", 0));
        label_static_1->setText(QApplication::translate("CommonConfigurationDialog", "IPV4 Address", 0));
        label_static_2->setText(QApplication::translate("CommonConfigurationDialog", "IPV4 Netmask", 0));
        label_static_3->setText(QApplication::translate("CommonConfigurationDialog", "Gateway", 0));
        label_static_4->setText(QApplication::translate("CommonConfigurationDialog", "DNS Server", 0));
        pushButton_cancle->setText(QApplication::translate("CommonConfigurationDialog", "Cancel", 0));
        pushButton_apply->setText(QApplication::translate("CommonConfigurationDialog", "Apply", 0));
    } // retranslateUi

};

namespace Ui {
    class CommonConfigurationDialog: public Ui_CommonConfigurationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMONCONFIGURATIONDIALOG_H
