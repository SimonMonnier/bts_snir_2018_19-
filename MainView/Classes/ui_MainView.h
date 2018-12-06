/********************************************************************************
** Form generated from reading UI file 'MainView.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLCDNumber>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainView
{
public:
    QWidget *centralwidget;
    QLCDNumber *lcdNumber;
    QLabel *label;
    QLineEdit *passwd;
    QPushButton *pbClose;
    QPushButton *pbValid;
    QLabel *valeurpass;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainView)
    {
        if (MainView->objectName().isEmpty())
            MainView->setObjectName(QString::fromUtf8("MainView"));
        MainView->resize(652, 218);
        MainView->setMaximumSize(QSize(652, 218));
        centralwidget = new QWidget(MainView);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName(QString::fromUtf8("lcdNumber"));
        lcdNumber->setGeometry(QRect(10, 20, 631, 71));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 120, 91, 31));
        passwd = new QLineEdit(centralwidget);
        passwd->setObjectName(QString::fromUtf8("passwd"));
        passwd->setGeometry(QRect(110, 120, 391, 31));
        pbClose = new QPushButton(centralwidget);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));
        pbClose->setGeometry(QRect(580, 120, 61, 31));
        pbValid = new QPushButton(centralwidget);
        pbValid->setObjectName(QString::fromUtf8("pbValid"));
        pbValid->setGeometry(QRect(510, 120, 61, 31));
        valeurpass = new QLabel(centralwidget);
        valeurpass->setObjectName(QString::fromUtf8("valeurpass"));
        valeurpass->setGeometry(QRect(110, 160, 391, 20));
        MainView->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainView);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 652, 20));
        MainView->setMenuBar(menubar);
        statusbar = new QStatusBar(MainView);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainView->setStatusBar(statusbar);

        retranslateUi(MainView);

        QMetaObject::connectSlotsByName(MainView);
    } // setupUi

    void retranslateUi(QMainWindow *MainView)
    {
        MainView->setWindowTitle(QApplication::translate("MainView", "MainWindow", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainView", "Mot de passe :", 0, QApplication::UnicodeUTF8));
        pbClose->setText(QApplication::translate("MainView", "Fermer", 0, QApplication::UnicodeUTF8));
        pbValid->setText(QApplication::translate("MainView", "Valider", 0, QApplication::UnicodeUTF8));
        valeurpass->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
