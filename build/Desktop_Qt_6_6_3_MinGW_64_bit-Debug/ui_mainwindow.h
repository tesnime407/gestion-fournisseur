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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
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
    QLineEdit *materiauxLineEdit;
    QLineEdit *carboneLineEdit;
    QLabel *label_12;
    QLabel *label_13;
    QWidget *tab_2;
    QTableView *tableView;
    QPushButton *pushButton_2;
    QPushButton *pushButton_trier;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_4;
    QPushButton *pushButton_stats;
    QWidget *tab_3;
    QLabel *label_5;
    QLineEdit *lineEdit_IDS;
    QPushButton *pushButton_supprimer;
    QWidget *tab_4;
    QLineEdit *lineEdit_recherche;
    QLabel *label;
    QPushButton *pushButton_10;
    QWidget *tab_6;
    QPushButton *pb_pdf;
    QWidget *tab_5;
    QPushButton *calculerButton;
    QLabel *resultLabel;
    QLineEdit *fournisseurIdLineEdit;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_9;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1046, 777);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(40, 200, 991, 361));
        tabWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(27, 195, 181);"));
        tab = new QWidget();
        tab->setObjectName("tab");
        label_2 = new QLabel(tab);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 40, 81, 16));
        label_2->setTextFormat(Qt::TextFormat::RichText);
        label_3 = new QLabel(tab);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 90, 47, 14));
        label_4 = new QLabel(tab);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 120, 81, 21));
        lineEdit_ID = new QLineEdit(tab);
        lineEdit_ID->setObjectName("lineEdit_ID");
        lineEdit_ID->setGeometry(QRect(140, 30, 201, 31));
        lineEdit_ID->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_nom = new QLineEdit(tab);
        lineEdit_nom->setObjectName("lineEdit_nom");
        lineEdit_nom->setGeometry(QRect(140, 79, 201, 31));
        lineEdit_nom->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        lineEdit_telephone = new QLineEdit(tab);
        lineEdit_telephone->setObjectName("lineEdit_telephone");
        lineEdit_telephone->setGeometry(QRect(140, 119, 201, 31));
        lineEdit_telephone->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_ajouter = new QPushButton(tab);
        pushButton_ajouter->setObjectName("pushButton_ajouter");
        pushButton_ajouter->setGeometry(QRect(580, 250, 131, 41));
        label_6 = new QLabel(tab);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 200, 131, 20));
        lineEdit_date = new QLineEdit(tab);
        lineEdit_date->setObjectName("lineEdit_date");
        lineEdit_date->setGeometry(QRect(140, 200, 201, 31));
        lineEdit_date->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_7 = new QLabel(tab);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 160, 111, 31));
        lineEdit_produit = new QLineEdit(tab);
        lineEdit_produit->setObjectName("lineEdit_produit");
        lineEdit_produit->setGeometry(QRect(140, 159, 201, 31));
        lineEdit_produit->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label_8 = new QLabel(tab);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 260, 131, 20));
        lineEdit_adresse = new QLineEdit(tab);
        lineEdit_adresse->setObjectName("lineEdit_adresse");
        lineEdit_adresse->setGeometry(QRect(142, 249, 201, 31));
        lineEdit_adresse->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        materiauxLineEdit = new QLineEdit(tab);
        materiauxLineEdit->setObjectName("materiauxLineEdit");
        materiauxLineEdit->setGeometry(QRect(560, 40, 181, 31));
        carboneLineEdit = new QLineEdit(tab);
        carboneLineEdit->setObjectName("carboneLineEdit");
        carboneLineEdit->setGeometry(QRect(560, 155, 181, 31));
        label_12 = new QLabel(tab);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(400, 40, 141, 21));
        label_13 = new QLabel(tab);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(400, 160, 141, 21));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tableView = new QTableView(tab_2);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(20, 11, 651, 231));
        pushButton_2 = new QPushButton(tab_2);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(570, 280, 75, 23));
        pushButton_trier = new QPushButton(tab_2);
        pushButton_trier->setObjectName("pushButton_trier");
        pushButton_trier->setGeometry(QRect(390, 270, 93, 29));
        verticalLayoutWidget = new QWidget(tab_2);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(710, 20, 211, 271));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_4->setObjectName("verticalLayout_4");
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        pushButton_stats = new QPushButton(tab_2);
        pushButton_stats->setObjectName("pushButton_stats");
        pushButton_stats->setGeometry(QRect(210, 270, 93, 29));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName("tab_3");
        label_5 = new QLabel(tab_3);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(40, 80, 101, 41));
        lineEdit_IDS = new QLineEdit(tab_3);
        lineEdit_IDS->setObjectName("lineEdit_IDS");
        lineEdit_IDS->setGeometry(QRect(210, 80, 281, 41));
        lineEdit_IDS->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        pushButton_supprimer = new QPushButton(tab_3);
        pushButton_supprimer->setObjectName("pushButton_supprimer");
        pushButton_supprimer->setGeometry(QRect(510, 250, 181, 41));
        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName("tab_4");
        lineEdit_recherche = new QLineEdit(tab_4);
        lineEdit_recherche->setObjectName("lineEdit_recherche");
        lineEdit_recherche->setGeometry(QRect(300, 100, 241, 41));
        label = new QLabel(tab_4);
        label->setObjectName("label");
        label->setGeometry(QRect(100, 110, 171, 20));
        pushButton_10 = new QPushButton(tab_4);
        pushButton_10->setObjectName("pushButton_10");
        pushButton_10->setGeometry(QRect(520, 160, 171, 41));
        tabWidget->addTab(tab_4, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName("tab_6");
        pb_pdf = new QPushButton(tab_6);
        pb_pdf->setObjectName("pb_pdf");
        pb_pdf->setGeometry(QRect(580, 250, 93, 29));
        tabWidget->addTab(tab_6, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName("tab_5");
        calculerButton = new QPushButton(tab_5);
        calculerButton->setObjectName("calculerButton");
        calculerButton->setGeometry(QRect(340, 140, 93, 29));
        resultLabel = new QLabel(tab_5);
        resultLabel->setObjectName("resultLabel");
        resultLabel->setGeometry(QRect(730, 230, 151, 41));
        fournisseurIdLineEdit = new QLineEdit(tab_5);
        fournisseurIdLineEdit->setObjectName("fournisseurIdLineEdit");
        fournisseurIdLineEdit->setGeometry(QRect(252, 60, 251, 41));
        label_10 = new QLabel(tab_5);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(140, 70, 63, 20));
        label_11 = new QLabel(tab_5);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(590, 220, 141, 51));
        tabWidget->addTab(tab_5, QString());
        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(20, -20, 991, 791));
        label_9->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/462567079_1473864519921264_4196289955834579249_n (1).png")));
        MainWindow->setCentralWidget(centralwidget);
        label_9->raise();
        tabWidget->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1046, 26));
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
        label_2->setText(QCoreApplication::translate("MainWindow", "Id", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "nom", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "telephone", nullptr));
        pushButton_ajouter->setText(QCoreApplication::translate("MainWindow", "Ajouter ", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "date collaboration", nullptr));
        lineEdit_date->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "produit fournis", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "adresse", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "materiaux recyclees", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "empreinte carbone", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Nouveau fournisseur", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "AFFICHER", nullptr));
        pushButton_trier->setText(QCoreApplication::translate("MainWindow", "tri", nullptr));
        pushButton_stats->setText(QCoreApplication::translate("MainWindow", "stat", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "consulter la liste", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Id", nullptr));
        pushButton_supprimer->setText(QCoreApplication::translate("MainWindow", "Supprimer", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("MainWindow", "supprimer fournisseur", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "nom fournisseur", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "rechercher", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("MainWindow", "recherche", nullptr));
        pb_pdf->setText(QCoreApplication::translate("MainWindow", "pdf", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("MainWindow", "pdf", nullptr));
        calculerButton->setText(QCoreApplication::translate("MainWindow", "calculer", nullptr));
        resultLabel->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "id", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "resultat", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("MainWindow", "durabilite", nullptr));
        label_9->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
