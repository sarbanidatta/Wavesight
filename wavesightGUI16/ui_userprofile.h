/********************************************************************************
** Form generated from reading UI file 'userprofile.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERPROFILE_H
#define UI_USERPROFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_UserProfile
{
public:
    QLabel *label_UserProfile;
    QFrame *frame;
    QLabel *label_UserProfileEmailID;
    QLabel *label_UserProfileContact;
    QLineEdit *lineEdit_UserProfileContactText;
    QLabel *label_UserProfileUID;
    QLabel *label_UserProfileUIdText;
    QLabel *label_UserProfileUName;
    QLabel *label_UserProfileUNameText;
    QLabel *label_UserProfileUName_2;
    QLabel *label_UserProfileUTypeText;
    QLineEdit *lineEdit_UserProfileEmailIdText;
    QLineEdit *lineEdit_UserProfilePasswordText;
    QLabel *label_UserProfilePassword;
    QLineEdit *lineEdit_UserProfileCPasswordText;
    QLabel *label_UserProfileCPassword;
    QLabel *label_EmailEdit;
    QLabel *label_EmailUpdate;
    QLabel *label_ContactEdit;
    QLabel *label_ContactUpdate;
    QLabel *label_PasswordEdit;
    QLabel *label_CPasswordUpdate;

    void setupUi(QWidget *UserProfile)
    {
        if (UserProfile->objectName().isEmpty())
            UserProfile->setObjectName(QStringLiteral("UserProfile"));
        UserProfile->resize(643, 506);
        label_UserProfile = new QLabel(UserProfile);
        label_UserProfile->setObjectName(QStringLiteral("label_UserProfile"));
        label_UserProfile->setGeometry(QRect(30, 20, 131, 31));
        label_UserProfile->setStyleSheet(QLatin1String("\n"
"font: 75 bold 14pt \"Padauk\";"));
        frame = new QFrame(UserProfile);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(30, 60, 591, 421));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_UserProfileEmailID = new QLabel(frame);
        label_UserProfileEmailID->setObjectName(QStringLiteral("label_UserProfileEmailID"));
        label_UserProfileEmailID->setGeometry(QRect(97, 130, 91, 21));
        label_UserProfileContact = new QLabel(frame);
        label_UserProfileContact->setObjectName(QStringLiteral("label_UserProfileContact"));
        label_UserProfileContact->setGeometry(QRect(96, 160, 111, 23));
        lineEdit_UserProfileContactText = new QLineEdit(frame);
        lineEdit_UserProfileContactText->setObjectName(QStringLiteral("lineEdit_UserProfileContactText"));
        lineEdit_UserProfileContactText->setGeometry(QRect(250, 160, 191, 23));
        lineEdit_UserProfileContactText->setReadOnly(true);
        label_UserProfileUID = new QLabel(frame);
        label_UserProfileUID->setObjectName(QStringLiteral("label_UserProfileUID"));
        label_UserProfileUID->setGeometry(QRect(97, 40, 59, 15));
        label_UserProfileUIdText = new QLabel(frame);
        label_UserProfileUIdText->setObjectName(QStringLiteral("label_UserProfileUIdText"));
        label_UserProfileUIdText->setGeometry(QRect(250, 40, 151, 20));
        label_UserProfileUName = new QLabel(frame);
        label_UserProfileUName->setObjectName(QStringLiteral("label_UserProfileUName"));
        label_UserProfileUName->setGeometry(QRect(97, 70, 81, 16));
        label_UserProfileUNameText = new QLabel(frame);
        label_UserProfileUNameText->setObjectName(QStringLiteral("label_UserProfileUNameText"));
        label_UserProfileUNameText->setGeometry(QRect(250, 70, 151, 20));
        label_UserProfileUName_2 = new QLabel(frame);
        label_UserProfileUName_2->setObjectName(QStringLiteral("label_UserProfileUName_2"));
        label_UserProfileUName_2->setGeometry(QRect(97, 100, 81, 20));
        label_UserProfileUTypeText = new QLabel(frame);
        label_UserProfileUTypeText->setObjectName(QStringLiteral("label_UserProfileUTypeText"));
        label_UserProfileUTypeText->setGeometry(QRect(250, 100, 151, 20));
        lineEdit_UserProfileEmailIdText = new QLineEdit(frame);
        lineEdit_UserProfileEmailIdText->setObjectName(QStringLiteral("lineEdit_UserProfileEmailIdText"));
        lineEdit_UserProfileEmailIdText->setGeometry(QRect(250, 130, 191, 23));
        lineEdit_UserProfileEmailIdText->setReadOnly(true);
        lineEdit_UserProfilePasswordText = new QLineEdit(frame);
        lineEdit_UserProfilePasswordText->setObjectName(QStringLiteral("lineEdit_UserProfilePasswordText"));
        lineEdit_UserProfilePasswordText->setGeometry(QRect(250, 190, 191, 23));
        lineEdit_UserProfilePasswordText->setEchoMode(QLineEdit::Password);
        lineEdit_UserProfilePasswordText->setReadOnly(true);
        label_UserProfilePassword = new QLabel(frame);
        label_UserProfilePassword->setObjectName(QStringLiteral("label_UserProfilePassword"));
        label_UserProfilePassword->setGeometry(QRect(96, 190, 71, 23));
        lineEdit_UserProfileCPasswordText = new QLineEdit(frame);
        lineEdit_UserProfileCPasswordText->setObjectName(QStringLiteral("lineEdit_UserProfileCPasswordText"));
        lineEdit_UserProfileCPasswordText->setGeometry(QRect(250, 220, 191, 23));
        lineEdit_UserProfileCPasswordText->setEchoMode(QLineEdit::Password);
        label_UserProfileCPassword = new QLabel(frame);
        label_UserProfileCPassword->setObjectName(QStringLiteral("label_UserProfileCPassword"));
        label_UserProfileCPassword->setGeometry(QRect(96, 220, 131, 23));
        label_EmailEdit = new QLabel(frame);
        label_EmailEdit->setObjectName(QStringLiteral("label_EmailEdit"));
        label_EmailEdit->setGeometry(QRect(451, 130, 45, 21));
        label_EmailEdit->setCursor(QCursor(Qt::PointingHandCursor));
        label_EmailEdit->setStyleSheet(QLatin1String("font: 9pt \"Sans Serif\";\n"
"\n"
"color: rgb(0, 85, 255);"));
        label_EmailEdit->setWordWrap(false);
        label_EmailUpdate = new QLabel(frame);
        label_EmailUpdate->setObjectName(QStringLiteral("label_EmailUpdate"));
        label_EmailUpdate->setGeometry(QRect(500, 130, 81, 21));
        label_EmailUpdate->setCursor(QCursor(Qt::PointingHandCursor));
        label_EmailUpdate->setStyleSheet(QLatin1String("font: 9pt \"Sans Serif\";\n"
"color: rgb(0, 85, 255);"));
        label_ContactEdit = new QLabel(frame);
        label_ContactEdit->setObjectName(QStringLiteral("label_ContactEdit"));
        label_ContactEdit->setGeometry(QRect(451, 160, 41, 21));
        label_ContactEdit->setCursor(QCursor(Qt::PointingHandCursor));
        label_ContactEdit->setStyleSheet(QLatin1String("font: 9pt \"Sans Serif\";\n"
"\n"
"color: rgb(0, 85, 255);"));
        label_ContactUpdate = new QLabel(frame);
        label_ContactUpdate->setObjectName(QStringLiteral("label_ContactUpdate"));
        label_ContactUpdate->setGeometry(QRect(500, 160, 81, 21));
        label_ContactUpdate->setCursor(QCursor(Qt::PointingHandCursor));
        label_ContactUpdate->setStyleSheet(QLatin1String("font: 9pt \"Sans Serif\";\n"
"color: rgb(0, 85, 255);"));
        label_PasswordEdit = new QLabel(frame);
        label_PasswordEdit->setObjectName(QStringLiteral("label_PasswordEdit"));
        label_PasswordEdit->setGeometry(QRect(451, 190, 41, 21));
        label_PasswordEdit->setCursor(QCursor(Qt::PointingHandCursor));
        label_PasswordEdit->setStyleSheet(QLatin1String("font: 9pt \"Sans Serif\";\n"
"color: rgb(0, 85, 255);"));
        label_CPasswordUpdate = new QLabel(frame);
        label_CPasswordUpdate->setObjectName(QStringLiteral("label_CPasswordUpdate"));
        label_CPasswordUpdate->setGeometry(QRect(451, 220, 81, 21));
        label_CPasswordUpdate->setCursor(QCursor(Qt::PointingHandCursor));
        label_CPasswordUpdate->setStyleSheet(QLatin1String("font: 9pt \"Sans Serif\";\n"
"color: rgb(0, 85, 255);"));

        retranslateUi(UserProfile);

        QMetaObject::connectSlotsByName(UserProfile);
    } // setupUi

    void retranslateUi(QWidget *UserProfile)
    {
        UserProfile->setWindowTitle(QApplication::translate("UserProfile", "WaveSight|Profile", 0));
        label_UserProfile->setText(QApplication::translate("UserProfile", "User Profile", 0));
        label_UserProfileEmailID->setText(QApplication::translate("UserProfile", "Email ID               ", 0));
        label_UserProfileContact->setText(QApplication::translate("UserProfile", "Contact No", 0));
        label_UserProfileUID->setText(QApplication::translate("UserProfile", "User ID", 0));
        label_UserProfileUIdText->setText(QApplication::translate("UserProfile", "root", 0));
        label_UserProfileUName->setText(QApplication::translate("UserProfile", "User Name", 0));
        label_UserProfileUNameText->setText(QApplication::translate("UserProfile", "spanidea", 0));
        label_UserProfileUName_2->setText(QApplication::translate("UserProfile", "User Type", 0));
        label_UserProfileUTypeText->setText(QApplication::translate("UserProfile", "Administrator", 0));
        lineEdit_UserProfilePasswordText->setText(QString());
        label_UserProfilePassword->setText(QApplication::translate("UserProfile", "Password", 0));
        label_UserProfileCPassword->setText(QApplication::translate("UserProfile", "Confirm Password   ", 0));
        label_EmailEdit->setText(QApplication::translate("UserProfile", "Edit", 0));
        label_EmailUpdate->setText(QApplication::translate("UserProfile", "Update", 0));
        label_ContactEdit->setText(QApplication::translate("UserProfile", "Edit", 0));
        label_ContactUpdate->setText(QApplication::translate("UserProfile", "Update", 0));
        label_PasswordEdit->setText(QApplication::translate("UserProfile", "Edit", 0));
        label_CPasswordUpdate->setText(QApplication::translate("UserProfile", "Update", 0));
    } // retranslateUi

};

namespace Ui {
    class UserProfile: public Ui_UserProfile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERPROFILE_H
