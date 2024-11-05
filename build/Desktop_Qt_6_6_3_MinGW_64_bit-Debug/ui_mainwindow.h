/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QTabWidget *tabWidget;
    QWidget *tab;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_ID;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_telephone;
    QPushButton *pushButton_ajouter;
    QLabel *label_6;
    QLineEdit *lineEdit_date;
    QLabel *label_7;
    QLineEdit *lineEdit_produit;
    QLabel *label_8;
    QLineEdit *lineEdit_adresse;
    QWidget *tab_2;
    QTableView *tableView;
    QPushButton *pushButton_2;
    QWidget *tab_3;
    QLabel *label_5;
    QLineEdit *lineEdit_IDS;
    QPushButton *pushButton_supprimer;
    QLabel *label_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 110, 47, 14));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(110, 90, 511, 301));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 170, 255);\n"
"background-color: rgb(2, 90, 37);"));
        tab = new QWidget();
        tab->setObjectName("tab");
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 40, 47, 14));
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 90, 47, 14));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 130, 81, 21));
        lineEdit_ID = new QLineEdit(tab);
        lineEdit_ID->setObjectName("lineEdit_ID");
        lineEdit_ID->setGeometry(QRect(140, 50, 113, 20));
        lineEdit_ID->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_nom = new QLineEdit(tab);
        lineEdit_nom->setObjectName("lineEdit_nom");
        lineEdit_nom->setGeometry(QRect(140, 90, 113, 20));
        lineEdit_nom->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_telephone = new QLineEdit(tab);
        lineEdit_telephone->setObjectName("lineEdit_telephone");
        lineEdit_telephone->setGeometry(QRect(140, 130, 113, 20));
        lineEdit_telephone->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_ajouter = new QPushButton(tab);
        pushButton_ajouter->setObjectName("pushButton_ajouter");
        pushButton_ajouter->setGeometry(QRect(350, 160, 75, 23));
        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 200, 131, 20));
        lineEdit_date = new QLineEdit(tab);
        lineEdit_date->setObjectName("lineEdit_date");
        lineEdit_date->setGeometry(QRect(140, 200, 113, 20));
        lineEdit_date->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 160, 111, 31));
        lineEdit_produit = new QLineEdit(tab);
        lineEdit_produit->setObjectName("lineEdit_produit");
        lineEdit_produit->setGeometry(QRect(140, 170, 113, 20));
        lineEdit_produit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_8 = new QLabel(tab);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 230, 131, 20));
        lineEdit_adresse = new QLineEdit(tab);
        lineEdit_adresse->setObjectName("lineEdit_adresse");
        lineEdit_adresse->setGeometry(QRect(140, 230, 113, 20));
        lineEdit_adresse->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tableView = new QTableView(tab_2);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 11, 361, 231));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(390, 60, 75, 23));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        label_5 = new QLabel(tab_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 50, 47, 14));
        lineEdit_IDS = new QLineEdit(tab_3);
        lineEdit_IDS->setObjectName("lineEdit_IDS");
        lineEdit_IDS->setGeometry(QRect(100, 50, 113, 20));
        lineEdit_IDS->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_supprimer = new QPushButton(tab_3);
        pushButton_supprimer->setObjectName("pushButton_supprimer");
        pushButton_supprimer->setGeometry(QRect(110, 160, 75, 23));
        tabWidget->addTab(tab_3, QString());
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(0, 0, 801, 591));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/image.png")));
        MainWindow->setCentralWidget(centralwidget);
        label_9->raise();
        label->raise();
        tabWidget->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        label_2->setText(QCoreApplication::translate("MainWindow", "Id", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "nom", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "telephone", nullptr));
        pushButton_ajouter->setText(QCoreApplication::translate("MainWindow", "Ajouter ", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "date collaboration", nullptr));
        lineEdit_date->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "produit fournis", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "adresse", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Nouveau fournisseur", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "AFFICHER", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "consulter la liste", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Id", nullptr));
        pushButton_supprimer->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "supprimer fournisseur", nullptr));
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
