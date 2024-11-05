#ifndef FOURNISSEUR_H
#define FOURNISSEUR_H
#include <QDate>
#include <QString>
#include <QSqlQuery>
#include <QSqlQueryModel>

class fournisseur
{
    int id;
    QString nom;
    int telephone;
    QString produitfournis;
    QDate datecollaboration;
    QString adresse;



public:
    fournisseur();
    fournisseur(int, QString,int, QString,QDate,QString);

    int getID() { return id; }
    QString getNom() { return nom; }
    int getTelephone() { return telephone; }
    QString getProduitfournis() { return produitfournis; }
    QDate getDatecollaboration() { return datecollaboration; }
    QString getAdresse() { return adresse; }

    void setID(int id) { this->id = id; }
    void setNom(QString nom) { nom = nom; }
    void setTelephone(int telephone) { telephone= telephone; }
    void setProduitfournis(QString produit) { produitfournis = produit; }
    void setDatecollaboration(QDate date) { datecollaboration = date; }
    void setAdresse(QString adresse) { adresse = adresse; }

    bool ajouter();
    QSqlQueryModel * afficher();
    bool supprimer(int);
};

#endif // FOURNISSEUR_H
