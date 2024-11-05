#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "fournisseur.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableView->setModel(Etmp.afficher()); // Afficher les fournisseur dans le tableau
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_ajouter_clicked()
{
    int id = ui->lineEdit_ID->text().toInt();
    QString nom = ui->lineEdit_nom->text();
    int telephone= ui->lineEdit_telephone->text().toInt();
    QString produitfournis = ui->lineEdit_produit->text();

    // Conversion de la date à partir d'une chaîne au format "yyyy-MM-dd"
    QDate datecollaboration = QDate::fromString(ui->lineEdit_date->text(), "yyyy-MM-dd");
    if (!datecollaboration.isValid()) {
        QMessageBox::warning(this, "Erreur", "Le format de la date doit être 'yyyy-MM-dd'.");
        return;
    }

    QString adresse = ui->lineEdit_adresse->text();

    // Vérifiez que les champs obligatoires ne sont pas vides
    if (nom.isEmpty() || produitfournis.isEmpty() || adresse.isEmpty()) {
        QMessageBox::warning(this, "Erreur", "Tous les champs doivent être remplis.");
        return;
    }

    fournisseur F(id, nom, telephone, produitfournis,datecollaboration,adresse);

    bool test = F.ajouter();

    if (test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Ajout effectué\n"
                                "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                 QObject::tr("Ajout non effectué.\n"
                             "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
    }
}

void MainWindow::on_pushButton_supprimer_clicked()
{
    int id = ui->lineEdit_IDS->text().toInt();
    bool test = Etmp.supprimer(id);

    if (test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                    QObject::tr("Suppression effectuée\n"
                                "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("Not OK"),
                    QObject::tr("Suppression non effectuée.\n"
                                "Cliquez sur Annuler pour quitter."), QMessageBox::Cancel);
    }
}

void MainWindow::on_pushButton_2_clicked()
{
    ui->tableView->setModel(Etmp.afficher()); // Actualiser l'affichage des fournisseurs
}
