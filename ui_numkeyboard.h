/********************************************************************************
** Form generated from reading UI file 'numkeyboard.ui'
**
** Created: Wed Apr 10 10:56:10 2013
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NUMKEYBOARD_H
#define UI_NUMKEYBOARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Numkeyboard
{
public:
    QLineEdit *numlineEdit;
    QPushButton *numButton7;
    QPushButton *numButton5;
    QPushButton *numButton4;
    QPushButton *numButton3;
    QPushButton *numButtonj;
    QPushButton *numButtonx;
    QPushButton *numButton8;
    QPushButton *numButton1;
    QPushButton *numButton6;
    QPushButton *numButton9;
    QPushButton *numButton2;
    QPushButton *numButton0;

    void setupUi(QWidget *Numkeyboard)
    {
        if (Numkeyboard->objectName().isEmpty())
            Numkeyboard->setObjectName(QString::fromUtf8("Numkeyboard"));
        Numkeyboard->resize(210, 230);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(91, 91, 91, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        Numkeyboard->setPalette(palette);
        numlineEdit = new QLineEdit(Numkeyboard);
        numlineEdit->setObjectName(QString::fromUtf8("numlineEdit"));
        numlineEdit->setGeometry(QRect(0, 0, 210, 35));
        numButton7 = new QPushButton(Numkeyboard);
        numButton7->setObjectName(QString::fromUtf8("numButton7"));
        numButton7->setGeometry(QRect(6, 168, 50, 50));
        QPalette palette1;
        QBrush brush2(QColor(159, 152, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        QBrush brush3(QColor(120, 120, 120, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        numButton7->setPalette(palette1);
        QFont font;
        font.setFamily(QString::fromUtf8("Adobe Caslon Pro"));
        font.setPointSize(14);
        numButton7->setFont(font);
        numButton5 = new QPushButton(Numkeyboard);
        numButton5->setObjectName(QString::fromUtf8("numButton5"));
        numButton5->setGeometry(QRect(56, 114, 50, 50));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        numButton5->setPalette(palette2);
        numButton5->setFont(font);
        numButton4 = new QPushButton(Numkeyboard);
        numButton4->setObjectName(QString::fromUtf8("numButton4"));
        numButton4->setGeometry(QRect(6, 114, 50, 50));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        numButton4->setPalette(palette3);
        numButton4->setFont(font);
        numButton3 = new QPushButton(Numkeyboard);
        numButton3->setObjectName(QString::fromUtf8("numButton3"));
        numButton3->setGeometry(QRect(106, 60, 50, 50));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        numButton3->setPalette(palette4);
        numButton3->setFont(font);
        numButtonj = new QPushButton(Numkeyboard);
        numButtonj->setObjectName(QString::fromUtf8("numButtonj"));
        numButtonj->setGeometry(QRect(156, 168, 50, 50));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        numButtonj->setPalette(palette5);
        numButtonj->setFont(font);
        numButtonx = new QPushButton(Numkeyboard);
        numButtonx->setObjectName(QString::fromUtf8("numButtonx"));
        numButtonx->setGeometry(QRect(156, 60, 50, 50));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        numButtonx->setPalette(palette6);
        numButtonx->setFont(font);
        numButton8 = new QPushButton(Numkeyboard);
        numButton8->setObjectName(QString::fromUtf8("numButton8"));
        numButton8->setGeometry(QRect(56, 168, 50, 50));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        numButton8->setPalette(palette7);
        numButton8->setFont(font);
        numButton1 = new QPushButton(Numkeyboard);
        numButton1->setObjectName(QString::fromUtf8("numButton1"));
        numButton1->setGeometry(QRect(6, 60, 50, 50));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        numButton1->setPalette(palette8);
        numButton1->setFont(font);
        numButton6 = new QPushButton(Numkeyboard);
        numButton6->setObjectName(QString::fromUtf8("numButton6"));
        numButton6->setGeometry(QRect(106, 114, 50, 50));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        numButton6->setPalette(palette9);
        numButton6->setFont(font);
        numButton9 = new QPushButton(Numkeyboard);
        numButton9->setObjectName(QString::fromUtf8("numButton9"));
        numButton9->setGeometry(QRect(106, 168, 50, 50));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        numButton9->setPalette(palette10);
        numButton9->setFont(font);
        numButton2 = new QPushButton(Numkeyboard);
        numButton2->setObjectName(QString::fromUtf8("numButton2"));
        numButton2->setGeometry(QRect(56, 60, 50, 50));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        numButton2->setPalette(palette11);
        numButton2->setFont(font);
        numButton0 = new QPushButton(Numkeyboard);
        numButton0->setObjectName(QString::fromUtf8("numButton0"));
        numButton0->setGeometry(QRect(156, 114, 50, 50));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        numButton0->setPalette(palette12);
        numButton0->setFont(font);

        retranslateUi(Numkeyboard);

        QMetaObject::connectSlotsByName(Numkeyboard);
    } // setupUi

    void retranslateUi(QWidget *Numkeyboard)
    {
        Numkeyboard->setWindowTitle(QApplication::translate("Numkeyboard", "Form", 0, QApplication::UnicodeUTF8));
        numButton7->setText(QApplication::translate("Numkeyboard", "7", 0, QApplication::UnicodeUTF8));
        numButton5->setText(QApplication::translate("Numkeyboard", "5", 0, QApplication::UnicodeUTF8));
        numButton4->setText(QApplication::translate("Numkeyboard", "4", 0, QApplication::UnicodeUTF8));
        numButton3->setText(QApplication::translate("Numkeyboard", "3", 0, QApplication::UnicodeUTF8));
        numButtonj->setText(QApplication::translate("Numkeyboard", "#", 0, QApplication::UnicodeUTF8));
        numButtonx->setText(QApplication::translate("Numkeyboard", "*", 0, QApplication::UnicodeUTF8));
        numButton8->setText(QApplication::translate("Numkeyboard", "8", 0, QApplication::UnicodeUTF8));
        numButton1->setText(QApplication::translate("Numkeyboard", "1", 0, QApplication::UnicodeUTF8));
        numButton6->setText(QApplication::translate("Numkeyboard", "6", 0, QApplication::UnicodeUTF8));
        numButton9->setText(QApplication::translate("Numkeyboard", "9", 0, QApplication::UnicodeUTF8));
        numButton2->setText(QApplication::translate("Numkeyboard", "2", 0, QApplication::UnicodeUTF8));
        numButton0->setText(QApplication::translate("Numkeyboard", "0", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Numkeyboard: public Ui_Numkeyboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NUMKEYBOARD_H
