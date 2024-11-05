#include "fournisseur.h"
#include <QDate>
#include <QDebug>  // Include this to use qDebug
#include <QSqlError>  // Include this for detailed SQL error messages

fournisseur::fournisseur() : id(0), nom(""), telephone(0), produitfournis("") ,datecollaboration(QDate()), adresse(""){
    // Corps du constructeur par défaut
}

fournisseur::fournisseur(int id , QString nom,int telephone, QString produitfournis,QDate datecollaboration,QString adresse) {
    this->id = id;
    this->nom= nom;
    this->telephone = telephone;
    this->produitfournis = produitfournis;
    this->datecollaboration = datecollaboration;
    this->adresse = adresse;

}

bool fournisseur::ajouter() {
    QSqlQuery query;
    QString res = QString::number(id);
    QString res1 = QString::number(telephone);
    QString res2 = datecollaboration.toString("yyyy-MM-dd");
    qDebug() << "Adding fournisseur with the following details:";
    qDebug() << "ID:" << res << "Nom:" << nom << "Telephone:" << res1;
    qDebug() << "Produit Fournis:" << produitfournis << "Date Collaboration:" << res2 << "Adresse:" << adresse;

    query.prepare("INSERT INTO FOURNISSEUR (ID,NOM,TELEPHONE,PRODUIT_FOURNIS,DATE_COLLABORATION,ADRESSE) VALUES (:ID,:NOM,:TELEPHONE,:PRODUIT_FOURNIS,:DATE_COLLABORATION,:ADRESSE)");
    query.bindValue(":ID", res);
    query.bindValue(":NOM", nom);
    query.bindValue(":TELEPHONE", res1);
    query.bindValue(":PRODUIT_FOURNIS", produitfournis);
    query.bindValue(":DATE_COLLABORATION", res2);
    query.bindValue(":ADRESSE", adresse);

    if (query.exec()) {
        qDebug() << "Insertion réussie dans la table FOURNISSEUR";
        return true;
    } else {
        qDebug() << "Erreur lors de l'insertion dans la table FOURNISSEUR:" << query.lastError().text();
        return false;
    }


}

QSqlQueryModel * fournisseur::afficher()
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("SELECT * FROM FOURNISSEUR");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("TELEPHONE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRODUIT FOURNIS"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("DATE COLLABORATION"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("ADRESSE"));

    return model;
}


bool fournisseur::supprimer(int id)
{
    // First, check if the ID exists
    QSqlQuery checkQuery;
    checkQuery.prepare("SELECT COUNT(*) FROM SERVICE WHERE ID = :id");
    checkQuery.bindValue(":id", id);

    if (!checkQuery.exec() || !checkQuery.next() || checkQuery.value(0).toInt() == 0)
    {
        qDebug() << "Service with ID" << id << "does not exist.";
        return false; // ID does not exist
    }

    // Proceed to delete
    QSqlQuery query;
    query.prepare("DELETE FROM SERVICE WHERE ID = :id");
    query.bindValue(":id", id);

    if (!query.exec())
    {
        qDebug() << "Delete failed: " << query.lastError().text(); // Log the error
        return false; // Indicate failure
    }

    return true; // Indicate success
}


