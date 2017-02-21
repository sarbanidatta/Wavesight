/********************************************************************************
** Form generated from reading UI file 'home.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOME_H
#define UI_HOME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Home
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_Header;
    QLabel *wavesightlogo;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_Profile;
    QLabel *Label_Home;
    QSpacerItem *horizontalSpacer_Profile;
    QPushButton *pushbutton_profile;
    QPushButton *pushButton_logout;
    QTabWidget *tabWidget;
    QWidget *tab_signin;
    QLabel *label_forgotpassword;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_authorization;
    QLabel *label_enter;
    QPushButton *pushButton_reset;
    QPushButton *pushButton_login;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit_userid;
    QLabel *label_3;
    QLineEdit *lineEdit_password;
    QLabel *label_error;
    QWidget *tab_adminsettings;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_adminerror;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label_UserId;
    QLineEdit *adminUserid;
    QLabel *label_UserName;
    QLineEdit *adminUserName;
    QLabel *label_UserTyoe;
    QComboBox *adminUsertype;
    QLabel *label_Emaild;
    QLineEdit *adminEmailId;
    QLabel *label_ContactNo;
    QLineEdit *adminContactNo;
    QLabel *label_password;
    QLineEdit *adminPassword;
    QLabel *label_confirmPassword;
    QLineEdit *admincnfpwd;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_adminSave;
    QPushButton *pushButton_adminDelete;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_14;
    QSpacerItem *verticalSpacer_3;
    QSpacerItem *verticalSpacer_4;
    QWidget *tab_deviceslist;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_devicelist1;
    QSpacerItem *horizontalSpacer_devicesdiscovered;
    QLabel *label_devicesdiscovered;
    QLabel *label_0;
    QHBoxLayout *horizontalLayout_devicelist2;
    QSpacerItem *verticalSpacer_devicelist1;
    QSpacerItem *verticalSpacer_devicelist2;
    QFrame *frame_devicelist1;
    QHBoxLayout *horizontalLayout_11;
    QFrame *frame_devicelist2;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_devicelist;
    QPushButton *pushButton_selectall;
    QPushButton *pushButton_deselect;
    QPushButton *pushButton_configviaweb;
    QPushButton *pushButton_snmp;
    QPushButton *pushButton_multidevices;
    QPushButton *pushButton_statistics;
    QPushButton *pushButton_diagnostics;
    QPushButton *pushButton_commissioning;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_5;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_devicelist3;
    QSpacerItem *verticalSpacer_devicelist3;
    QSpacerItem *verticalSpacer_devicelist4;
    QHBoxLayout *horizontalLayout_devicelist5;
    QLabel *label_refreshText;
    QSpacerItem *horizontalSpacer_devicelist5;

    void setupUi(QWidget *Home)
    {
        if (Home->objectName().isEmpty())
            Home->setObjectName(QStringLiteral("Home"));
        Home->setEnabled(true);
        Home->resize(568, 701);
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(239, 235, 231, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(247, 245, 243, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(119, 117, 115, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(159, 157, 154, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        Home->setPalette(palette);
        verticalLayout = new QVBoxLayout(Home);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        frame = new QFrame(Home);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        horizontalLayout_Header = new QHBoxLayout();
        horizontalLayout_Header->setSpacing(6);
        horizontalLayout_Header->setObjectName(QStringLiteral("horizontalLayout_Header"));
        wavesightlogo = new QLabel(frame);
        wavesightlogo->setObjectName(QStringLiteral("wavesightlogo"));
        wavesightlogo->setEnabled(false);
        wavesightlogo->setStyleSheet(QStringLiteral("border-image: url(:/wavesight.svg);"));

        horizontalLayout_Header->addWidget(wavesightlogo);

        horizontalSpacer = new QSpacerItem(118, 58, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Header->addItem(horizontalSpacer);


        verticalLayout_3->addLayout(horizontalLayout_Header);

        horizontalLayout_Profile = new QHBoxLayout();
        horizontalLayout_Profile->setSpacing(6);
        horizontalLayout_Profile->setObjectName(QStringLiteral("horizontalLayout_Profile"));
        Label_Home = new QLabel(frame);
        Label_Home->setObjectName(QStringLiteral("Label_Home"));
        QFont font;
        font.setFamily(QStringLiteral("Comic Sans MS"));
        font.setPointSize(11);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        Label_Home->setFont(font);
        Label_Home->setStyleSheet(QStringLiteral("font: 11pt \"Comic Sans MS\";"));

        horizontalLayout_Profile->addWidget(Label_Home);

        horizontalSpacer_Profile = new QSpacerItem(138, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_Profile->addItem(horizontalSpacer_Profile);

        pushbutton_profile = new QPushButton(frame);
        pushbutton_profile->setObjectName(QStringLiteral("pushbutton_profile"));
        pushbutton_profile->setCheckable(false);

        horizontalLayout_Profile->addWidget(pushbutton_profile);

        pushButton_logout = new QPushButton(frame);
        pushButton_logout->setObjectName(QStringLiteral("pushButton_logout"));
        pushButton_logout->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_Profile->addWidget(pushButton_logout);


        verticalLayout_3->addLayout(horizontalLayout_Profile);

        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        tabWidget->setPalette(palette1);
        tab_signin = new QWidget();
        tab_signin->setObjectName(QStringLiteral("tab_signin"));
        label_forgotpassword = new QLabel(tab_signin);
        label_forgotpassword->setObjectName(QStringLiteral("label_forgotpassword"));
        label_forgotpassword->setGeometry(QRect(247, 207, 111, 16));
        label_forgotpassword->setCursor(QCursor(Qt::PointingHandCursor));
        label_forgotpassword->setMouseTracking(false);
        label_forgotpassword->setStyleSheet(QLatin1String("text-decoration: underline;\n"
"font: 8pt \"Comic Sans MS\";\n"
"color: rgb(69, 97, 255);"));
        layoutWidget = new QWidget(tab_signin);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 20, 331, 49));
        verticalLayout_7 = new QVBoxLayout(layoutWidget);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_authorization = new QLabel(layoutWidget);
        label_authorization->setObjectName(QStringLiteral("label_authorization"));
        label_authorization->setStyleSheet(QLatin1String("font: 12pt \"Comic Sans MS\";\n"
""));

        verticalLayout_7->addWidget(label_authorization);

        label_enter = new QLabel(layoutWidget);
        label_enter->setObjectName(QStringLiteral("label_enter"));

        verticalLayout_7->addWidget(label_enter);

        pushButton_reset = new QPushButton(tab_signin);
        pushButton_reset->setObjectName(QStringLiteral("pushButton_reset"));
        pushButton_reset->setGeometry(QRect(170, 230, 80, 27));
        pushButton_reset->setFocusPolicy(Qt::TabFocus);
        pushButton_reset->setAcceptDrops(false);
        pushButton_login = new QPushButton(tab_signin);
        pushButton_login->setObjectName(QStringLiteral("pushButton_login"));
        pushButton_login->setGeometry(QRect(260, 230, 80, 27));
        pushButton_login->setFocusPolicy(Qt::TabFocus);
        pushButton_login->setAutoDefault(false);
        pushButton_login->setDefault(false);
        layoutWidget1 = new QWidget(tab_signin);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(90, 140, 251, 61));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(9);
        gridLayout->setVerticalSpacing(3);
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        lineEdit_userid = new QLineEdit(layoutWidget1);
        lineEdit_userid->setObjectName(QStringLiteral("lineEdit_userid"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit_userid->sizePolicy().hasHeightForWidth());
        lineEdit_userid->setSizePolicy(sizePolicy);
        lineEdit_userid->setMaximumSize(QSize(180, 60));
        lineEdit_userid->setSizeIncrement(QSize(0, 0));

        gridLayout->addWidget(lineEdit_userid, 0, 1, 1, 1);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        lineEdit_password = new QLineEdit(layoutWidget1);
        lineEdit_password->setObjectName(QStringLiteral("lineEdit_password"));
        lineEdit_password->setEnabled(true);
        sizePolicy.setHeightForWidth(lineEdit_password->sizePolicy().hasHeightForWidth());
        lineEdit_password->setSizePolicy(sizePolicy);
        lineEdit_password->setMaximumSize(QSize(180, 60));
        lineEdit_password->setSizeIncrement(QSize(0, 0));
        lineEdit_password->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(lineEdit_password, 1, 1, 1, 1);

        label_error = new QLabel(tab_signin);
        label_error->setObjectName(QStringLiteral("label_error"));
        label_error->setGeometry(QRect(50, 90, 351, 20));
        tabWidget->addTab(tab_signin, QString());
        tab_adminsettings = new QWidget();
        tab_adminsettings->setObjectName(QStringLiteral("tab_adminsettings"));
        verticalLayout_2 = new QVBoxLayout(tab_adminsettings);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalSpacer_2 = new QSpacerItem(20, 35, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_adminerror = new QLabel(tab_adminsettings);
        label_adminerror->setObjectName(QStringLiteral("label_adminerror"));

        horizontalLayout_2->addWidget(label_adminerror);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        verticalSpacer = new QSpacerItem(20, 34, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        groupBox = new QGroupBox(tab_adminsettings);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_4 = new QHBoxLayout(groupBox);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        widget = new QWidget(groupBox);
        widget->setObjectName(QStringLiteral("widget"));
        formLayout = new QFormLayout(widget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label_UserId = new QLabel(widget);
        label_UserId->setObjectName(QStringLiteral("label_UserId"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_UserId);

        adminUserid = new QLineEdit(widget);
        adminUserid->setObjectName(QStringLiteral("adminUserid"));

        formLayout->setWidget(0, QFormLayout::FieldRole, adminUserid);

        label_UserName = new QLabel(widget);
        label_UserName->setObjectName(QStringLiteral("label_UserName"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_UserName);

        adminUserName = new QLineEdit(widget);
        adminUserName->setObjectName(QStringLiteral("adminUserName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, adminUserName);

        label_UserTyoe = new QLabel(widget);
        label_UserTyoe->setObjectName(QStringLiteral("label_UserTyoe"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_UserTyoe);

        adminUsertype = new QComboBox(widget);
        adminUsertype->setObjectName(QStringLiteral("adminUsertype"));

        formLayout->setWidget(2, QFormLayout::FieldRole, adminUsertype);

        label_Emaild = new QLabel(widget);
        label_Emaild->setObjectName(QStringLiteral("label_Emaild"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_Emaild);

        adminEmailId = new QLineEdit(widget);
        adminEmailId->setObjectName(QStringLiteral("adminEmailId"));

        formLayout->setWidget(3, QFormLayout::FieldRole, adminEmailId);

        label_ContactNo = new QLabel(widget);
        label_ContactNo->setObjectName(QStringLiteral("label_ContactNo"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_ContactNo);

        adminContactNo = new QLineEdit(widget);
        adminContactNo->setObjectName(QStringLiteral("adminContactNo"));

        formLayout->setWidget(4, QFormLayout::FieldRole, adminContactNo);

        label_password = new QLabel(widget);
        label_password->setObjectName(QStringLiteral("label_password"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_password);

        adminPassword = new QLineEdit(widget);
        adminPassword->setObjectName(QStringLiteral("adminPassword"));
        adminPassword->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(5, QFormLayout::FieldRole, adminPassword);

        label_confirmPassword = new QLabel(widget);
        label_confirmPassword->setObjectName(QStringLiteral("label_confirmPassword"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_confirmPassword);

        admincnfpwd = new QLineEdit(widget);
        admincnfpwd->setObjectName(QStringLiteral("admincnfpwd"));
        admincnfpwd->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(6, QFormLayout::FieldRole, admincnfpwd);


        horizontalLayout_3->addWidget(widget);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        horizontalLayout_4->addLayout(horizontalLayout_3);


        verticalLayout_2->addWidget(groupBox);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        pushButton_adminSave = new QPushButton(tab_adminsettings);
        pushButton_adminSave->setObjectName(QStringLiteral("pushButton_adminSave"));

        horizontalLayout->addWidget(pushButton_adminSave);

        pushButton_adminDelete = new QPushButton(tab_adminsettings);
        pushButton_adminDelete->setObjectName(QStringLiteral("pushButton_adminDelete"));

        horizontalLayout->addWidget(pushButton_adminDelete);

        horizontalSpacer_12 = new QSpacerItem(78, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);

        horizontalSpacer_14 = new QSpacerItem(58, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_14);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_3 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        verticalSpacer_4 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        tabWidget->addTab(tab_adminsettings, QString());
        tab_deviceslist = new QWidget();
        tab_deviceslist->setObjectName(QStringLiteral("tab_deviceslist"));
        verticalLayout_6 = new QVBoxLayout(tab_deviceslist);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        horizontalLayout_devicelist1 = new QHBoxLayout();
        horizontalLayout_devicelist1->setSpacing(6);
        horizontalLayout_devicelist1->setObjectName(QStringLiteral("horizontalLayout_devicelist1"));
        horizontalSpacer_devicesdiscovered = new QSpacerItem(218, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_devicelist1->addItem(horizontalSpacer_devicesdiscovered);

        label_devicesdiscovered = new QLabel(tab_deviceslist);
        label_devicesdiscovered->setObjectName(QStringLiteral("label_devicesdiscovered"));
        label_devicesdiscovered->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));

        horizontalLayout_devicelist1->addWidget(label_devicesdiscovered);

        label_0 = new QLabel(tab_deviceslist);
        label_0->setObjectName(QStringLiteral("label_0"));
        label_0->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));

        horizontalLayout_devicelist1->addWidget(label_0);


        verticalLayout_6->addLayout(horizontalLayout_devicelist1);

        horizontalLayout_devicelist2 = new QHBoxLayout();
        horizontalLayout_devicelist2->setSpacing(6);
        horizontalLayout_devicelist2->setObjectName(QStringLiteral("horizontalLayout_devicelist2"));
        verticalSpacer_devicelist1 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_devicelist2->addItem(verticalSpacer_devicelist1);

        verticalSpacer_devicelist2 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_devicelist2->addItem(verticalSpacer_devicelist2);


        verticalLayout_6->addLayout(horizontalLayout_devicelist2);

        frame_devicelist1 = new QFrame(tab_deviceslist);
        frame_devicelist1->setObjectName(QStringLiteral("frame_devicelist1"));
        frame_devicelist1->setFrameShape(QFrame::StyledPanel);
        frame_devicelist1->setFrameShadow(QFrame::Raised);
        horizontalLayout_11 = new QHBoxLayout(frame_devicelist1);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        frame_devicelist2 = new QFrame(frame_devicelist1);
        frame_devicelist2->setObjectName(QStringLiteral("frame_devicelist2"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        frame_devicelist2->setPalette(palette2);
        frame_devicelist2->setFrameShape(QFrame::StyledPanel);
        frame_devicelist2->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frame_devicelist2);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        verticalLayout_devicelist = new QVBoxLayout();
        verticalLayout_devicelist->setSpacing(6);
        verticalLayout_devicelist->setObjectName(QStringLiteral("verticalLayout_devicelist"));
        pushButton_selectall = new QPushButton(frame_devicelist2);
        pushButton_selectall->setObjectName(QStringLiteral("pushButton_selectall"));
        pushButton_selectall->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));

        verticalLayout_devicelist->addWidget(pushButton_selectall);

        pushButton_deselect = new QPushButton(frame_devicelist2);
        pushButton_deselect->setObjectName(QStringLiteral("pushButton_deselect"));
        pushButton_deselect->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));

        verticalLayout_devicelist->addWidget(pushButton_deselect);

        pushButton_configviaweb = new QPushButton(frame_devicelist2);
        pushButton_configviaweb->setObjectName(QStringLiteral("pushButton_configviaweb"));
        pushButton_configviaweb->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));

        verticalLayout_devicelist->addWidget(pushButton_configviaweb);

        pushButton_snmp = new QPushButton(frame_devicelist2);
        pushButton_snmp->setObjectName(QStringLiteral("pushButton_snmp"));
        pushButton_snmp->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));

        verticalLayout_devicelist->addWidget(pushButton_snmp);

        pushButton_multidevices = new QPushButton(frame_devicelist2);
        pushButton_multidevices->setObjectName(QStringLiteral("pushButton_multidevices"));
        pushButton_multidevices->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));

        verticalLayout_devicelist->addWidget(pushButton_multidevices);

        pushButton_statistics = new QPushButton(frame_devicelist2);
        pushButton_statistics->setObjectName(QStringLiteral("pushButton_statistics"));
        pushButton_statistics->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));

        verticalLayout_devicelist->addWidget(pushButton_statistics);

        pushButton_diagnostics = new QPushButton(frame_devicelist2);
        pushButton_diagnostics->setObjectName(QStringLiteral("pushButton_diagnostics"));
        pushButton_diagnostics->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));

        verticalLayout_devicelist->addWidget(pushButton_diagnostics);

        pushButton_commissioning = new QPushButton(frame_devicelist2);
        pushButton_commissioning->setObjectName(QStringLiteral("pushButton_commissioning"));
        pushButton_commissioning->setStyleSheet(QStringLiteral("font: 8pt \"Comic Sans MS\";"));

        verticalLayout_devicelist->addWidget(pushButton_commissioning);


        verticalLayout_5->addLayout(verticalLayout_devicelist);


        horizontalLayout_11->addWidget(frame_devicelist2);

        frame_5 = new QFrame(frame_devicelist1);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        tableWidget = new QTableWidget(frame_5);
        if (tableWidget->columnCount() < 9)
            tableWidget->setColumnCount(9);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        tableWidget->setPalette(palette3);
        tableWidget->setStyleSheet(QLatin1String("\n"
"font: 8pt \"MS Shell Dlg 2\";"));
        tableWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        tableWidget->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        tableWidget->setShowGrid(false);
        tableWidget->setGridStyle(Qt::SolidLine);
        tableWidget->setWordWrap(false);
        tableWidget->setColumnCount(9);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setDefaultSectionSize(100);
        tableWidget->horizontalHeader()->setHighlightSections(true);
        tableWidget->horizontalHeader()->setMinimumSectionSize(100);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setCascadingSectionResizes(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(100);
        tableWidget->verticalHeader()->setMinimumSectionSize(100);
        tableWidget->verticalHeader()->setStretchLastSection(false);

        horizontalLayout_5->addWidget(tableWidget);


        horizontalLayout_11->addWidget(frame_5);


        verticalLayout_6->addWidget(frame_devicelist1);

        horizontalLayout_devicelist3 = new QHBoxLayout();
        horizontalLayout_devicelist3->setSpacing(6);
        horizontalLayout_devicelist3->setObjectName(QStringLiteral("horizontalLayout_devicelist3"));
        verticalSpacer_devicelist3 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_devicelist3->addItem(verticalSpacer_devicelist3);

        verticalSpacer_devicelist4 = new QSpacerItem(20, 48, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_devicelist3->addItem(verticalSpacer_devicelist4);


        verticalLayout_6->addLayout(horizontalLayout_devicelist3);

        horizontalLayout_devicelist5 = new QHBoxLayout();
        horizontalLayout_devicelist5->setSpacing(6);
        horizontalLayout_devicelist5->setObjectName(QStringLiteral("horizontalLayout_devicelist5"));
        label_refreshText = new QLabel(tab_deviceslist);
        label_refreshText->setObjectName(QStringLiteral("label_refreshText"));
        label_refreshText->setStyleSheet(QLatin1String("font: 8pt \"Comic Sans MS\";\n"
"color: rgb(50, 43, 255);"));

        horizontalLayout_devicelist5->addWidget(label_refreshText);

        horizontalSpacer_devicelist5 = new QSpacerItem(198, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_devicelist5->addItem(horizontalSpacer_devicelist5);


        verticalLayout_6->addLayout(horizontalLayout_devicelist5);

        tabWidget->addTab(tab_deviceslist, QString());

        verticalLayout_3->addWidget(tabWidget);


        verticalLayout->addWidget(frame);


        retranslateUi(Home);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(Home);
    } // setupUi

    void retranslateUi(QWidget *Home)
    {
        Home->setWindowTitle(QApplication::translate("Home", "Wavesight Home", 0));
        wavesightlogo->setText(QApplication::translate("Home", "                                .     ", 0));
        Label_Home->setText(QApplication::translate("Home", "Home", 0));
        pushbutton_profile->setText(QApplication::translate("Home", "Profile", 0));
        pushButton_logout->setText(QApplication::translate("Home", "Logout", 0));
        label_forgotpassword->setText(QApplication::translate("Home", "Forgot password", 0));
        label_authorization->setText(QApplication::translate("Home", "Authorization Required", 0));
        label_enter->setText(QApplication::translate("Home", "Please enter your username and password", 0));
        pushButton_reset->setText(QApplication::translate("Home", "reset", 0));
        pushButton_login->setText(QApplication::translate("Home", "Login", 0));
        label_2->setText(QApplication::translate("Home", "UserId ", 0));
        label_3->setText(QApplication::translate("Home", "Password   ", 0));
        label_error->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_signin), QApplication::translate("Home", "Sign In", 0));
        label_adminerror->setText(QString());
        groupBox->setTitle(QApplication::translate("Home", "UserProfile", 0));
        label_UserId->setText(QApplication::translate("Home", "User ID", 0));
        adminUserid->setText(QString());
        label_UserName->setText(QApplication::translate("Home", "UserName", 0));
        label_UserTyoe->setText(QApplication::translate("Home", "User Type", 0));
        adminUsertype->clear();
        adminUsertype->insertItems(0, QStringList()
         << QApplication::translate("Home", "Administrator", 0)
         << QApplication::translate("Home", "Engineer", 0)
         << QApplication::translate("Home", "End-User", 0)
        );
        label_Emaild->setText(QApplication::translate("Home", "Email ID", 0));
        label_ContactNo->setText(QApplication::translate("Home", "Contact No", 0));
        label_password->setText(QApplication::translate("Home", "Password", 0));
        label_confirmPassword->setText(QApplication::translate("Home", "Confirm Password", 0));
        pushButton_adminSave->setText(QApplication::translate("Home", "Save", 0));
        pushButton_adminDelete->setText(QApplication::translate("Home", "Delete", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_adminsettings), QApplication::translate("Home", "Admin Settings", 0));
        label_devicesdiscovered->setText(QApplication::translate("Home", "Devices Discovered:", 0));
        label_0->setText(QApplication::translate("Home", "0", 0));
        pushButton_selectall->setText(QApplication::translate("Home", "Select All", 0));
        pushButton_deselect->setText(QApplication::translate("Home", "Deselect All", 0));
        pushButton_configviaweb->setText(QApplication::translate("Home", "Configure Via Web", 0));
        pushButton_snmp->setText(QApplication::translate("Home", "Configure Via SNMP", 0));
        pushButton_multidevices->setText(QApplication::translate("Home", "Configure Multiple", 0));
        pushButton_statistics->setText(QApplication::translate("Home", "Statistics", 0));
        pushButton_diagnostics->setText(QApplication::translate("Home", "Diagnostics", 0));
        pushButton_commissioning->setText(QApplication::translate("Home", "Commissioning Tool", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Home", "DEVICE", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Home", "CHASSIS ID", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Home", "PORT ID", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Home", "SYSTEM DESCRIPTION", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Home", "PROTOCOL", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("Home", "MANAGEMENT ADDRESS", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("Home", "STATE", 0));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QApplication::translate("Home", "TIME STAMP", 0));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QApplication::translate("Home", "SNMP TRAP", 0));
        label_refreshText->setText(QApplication::translate("Home", "Auto refresh in every 120 seconds...!", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_deviceslist), QApplication::translate("Home", "Devices List", 0));
    } // retranslateUi

};

namespace Ui {
    class Home: public Ui_Home {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOME_H
