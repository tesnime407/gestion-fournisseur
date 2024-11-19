#include "fournisseur.h"
#include <QDebug>  // Include this to use qDebug
#include <QSqlError>  // Include this for detailed SQL error messages
#include <QMessageBox>
#include <cmath> // Pour des calculs éventuels




// Default Constructor
fournisseur::fournisseur() {}

// Parameterized Constructor
fournisseur::fournisseur(int id, QString nom, QString telephone, QString produitfournis, QString datecollaboration, QString adresse,float materiauxRecycles, float empreinteCarbone)
    : id(id), nom(nom), telephone(telephone), produitfournis(produitfournis),  datecollaboration(datecollaboration), adresse(adresse),materiauxRecycles(materiauxRecycles), empreinteCarbone(empreinteCarbone){}

// Getters
int fournisseur::getID() const { return id; }
QString fournisseur::getNom() const { return nom; }
QString fournisseur::getTelephone() const { return telephone; }
QString fournisseur::getProduitfournis() const { return produitfournis; }
QString fournisseur::getDatecollaboration() const { return datecollaboration; }
QString fournisseur::getAdresse() const { return adresse; }

// Setters
void fournisseur::setID(int id) { id= id; }
void fournisseur::setNom(const QString &nom) { this->nom = nom; }
void fournisseur::setTelephone(const QString &telephone) { this->telephone = telephone; }
void fournisseur::setProduitfournis(const QString &produitfournis) { this->produitfournis = produitfournis; }
void fournisseur::setDatecollaboration(const QString &datecollaboration) { this->datecollaboration = datecollaboration; }
void fournisseur::setAdresse(const QString &adresse) { this->adresse = adresse; }
void fournisseur::setMateriauxRecycles(float materiauxRecycles) {
    this->materiauxRecycles = materiauxRecycles;
}

void fournisseur::setEmpreinteCarbone(float empreinteCarbone) {
    this->empreinteCarbone = empreinteCarbone;
}


bool fournisseur::ajouter() {
    QSqlQuery query;

    query.prepare("INSERT INTO FOURNISSEURS (ID,NOM,TELEPHONE,PRODUIT_FOURNIS,DATE_COLLABORATION,ADRESSE,MATERIAUX_RECYCLES, EMPREINTE_CARBONE) VALUES (:ID,:NOM,:TELEPHONE,:PRODUIT_FOURNIS,:DATE_COLLABORATION,:ADRESSE,:MATERIAUX_RECYCLES, :EMPREINTE_CARBONE)");
    query.bindValue(":ID", id);
    query.bindValue(":NOM", nom);
    query.bindValue(":TELEPHONE", telephone);
    query.bindValue(":PRODUIT_FOURNIS", produitfournis);
    query.bindValue(":DATE_COLLABORATION", datecollaboration);
    query.bindValue(":ADRESSE", adresse);
    query.bindValue(":MATERIAUX_RECYCLES", materiauxRecycles);
    query.bindValue(":EMPREINTE_CARBONE", empreinteCarbone);


    if (!query.exec()) {
        qDebug() << "erreur"<< query.lastError().text();
        return false;
    }
    qDebug() << "fournisseur added succefully" << query.lastError().text();
    return true;



}

QSqlQueryModel * fournisseur::afficher()
{
    QSqlQueryModel * model = new QSqlQueryModel();

    model->setQuery("SELECT * FROM FOURNISSEURS");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NOM"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("TELEPHONE"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("PRODUIT FOURNIS"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("DATE COLLABORATION"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("ADRESSE"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Matériaux Recyclés (%)"));
    model->setHeaderData(7, Qt::Horizontal, QObject::tr("Empreinte Carbone (kg CO2)"));

    return model;
}


// Method to delete a client
bool fournisseur::supprimer(int id) {
    QSqlQuery query;
    query.prepare("DELETE FROM fournisseurs WHERE ID = :id");
    query.bindValue(":id", id);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la suppression du fournisseur :" << query.lastError().text();
        return false;
    }
    qDebug() << "fournisseur deleted successfully from database.";
    return true;
}


bool fournisseur::chercherParID(int id) {
    QSqlQuery query;
    query.prepare("SELECT * FROM FOURNISSEURS WHERE ID = :id");
    query.bindValue(":id", id);

    if (!query.exec()) {
        qDebug() << "Erreur lors de la recherche du fournisseur par ID :" << query.lastError().text();
        return false;
    }

    if (query.next()) {
        // Si au moins un résultat est trouvé, le fournisseur existe
        return true;
    }

    // Si aucun résultat n'est trouvé, le fournisseur n'existe pas
    return false;
}




bool fournisseur::exporterPDF(const QString &nomFichier, QAbstractItemModel *model) {
    QPdfWriter pdfWriter(nomFichier);
    pdfWriter.setPageSize(QPageSize(QPageSize::A3));
    pdfWriter.setPageMargins(QMargins(30, 30, 30, 30));

    QPainter painter(&pdfWriter);
    if (!painter.isActive()) {
        qDebug() << "Erreur lors de l'initialisation du QPainter pour le PDF.";
        return false;
    }

    // Set PDF parameters
    painter.setPen(Qt::black);
    painter.setFont(QFont("Arial", 20));

    // Title
    painter.drawText(2500, 1100, "Liste des fournisseurs");

    // Table coordinates and cell dimensions
    int startX = 200;
    int startY = 1800;
    int cellWidth = 1100;
    int cellHeight = 450;

    // Table headers
    QStringList headers = {"ID", "Nom", "telephone", "produit fournis", "date collaboration", "adresse","materiaux recycles","empreinte carbone"};
    painter.setFont(QFont("Arial", 10, QFont::Bold));
    for (int col = 0; col < headers.size(); ++col) {
        painter.drawText(startX + col * cellWidth, startY, cellWidth, cellHeight, Qt::AlignCenter, headers[col]);
    }

    // fournisseur data
    int rowCount = model->rowCount();
    painter.setFont(QFont("Arial", 10));
    for (int row = 0; row < rowCount; ++row) {
        QColor bgColor = (row % 2 == 0) ? Qt::lightGray : Qt::white;

        for (int col = 0; col < headers.size(); ++col) {
            QString data = model->data(model->index(row, col)).toString();
            QRect cellRect(startX + col * cellWidth, startY + (row + 1) * cellHeight, cellWidth, cellHeight);

            painter.fillRect(cellRect, bgColor);
            painter.drawText(cellRect, Qt::AlignCenter, data);
            painter.drawRect(cellRect);
        }
    }

    painter.end();
    QMessageBox::information(nullptr, "PDF Créé", "Un fichier PDF a été créé.");
    return true;
}


QSqlQueryModel* fournisseur::trierParID(bool asc) {
    QSqlQueryModel* model = new QSqlQueryModel();
    QSqlQuery query;

    // Build the query string for the 'FOURNISSEURS' table
    QString queryString = "SELECT * FROM FOURNISSEURS ORDER BY ID";
    queryString += asc ? " ASC" : " DESC";

    query.prepare(queryString);

    if (!query.exec()) {
        qDebug() << "Erreur lors du tri des fournisseurs par ID :" << query.lastError().text();
        delete model;
        return nullptr;
    }

    model->setQuery(std::move(query));
    return model;
}
float fournisseur::calculerDurabilite() const {
    return (materiauxRecycles ) - (empreinteCarbone );
}
bool fournisseur::chargerFournisseurParId(int id)
{
    // Charger les informations du fournisseur en fonction de son ID
    QSqlQuery query;
    query.prepare("SELECT NOM, MATERIAUX_RECYCLES, EMPREINTE_CARBONE FROM FOURNISSEURS WHERE ID = :id");
    query.bindValue(":id", id);

    if (!query.exec()) {
        qDebug() << "Erreur de requête : " << query.lastError().text();
        return false;
    }

    if (query.next()) {
        this->id = query.value("ID").toInt();
        this->nom = query.value("NOM").toString();
        this->materiauxRecycles = query.value("MATERIAUX_RECYCLES").toFloat();  // À ajouter à votre table
        this->empreinteCarbone = query.value("EMPREINTE_CARBONE").toFloat();  // À ajouter à votre table
        return true;
    }
    return false;
}

QMap<QString, int> fournisseur::statistiquesFournisseur() {
    QMap<QString, int> statistiques;
    QSqlQuery query;

    // Exemple de requête SQL : compter le nombre de fois que chaque fournisseur a fourni un produit
    query.prepare("SELECT nom, COUNT(*) FROM FOURNISSEURS GROUP BY nom");

    if (query.exec()) {
        while (query.next()) {
            QString fournisseurNom = query.value(0).toString();  // Récupère le PRODUIT du fournisseur
            int count = query.value(1).toInt();  // Récupère le nombre de fois que ce fournisseur a fourni
            statistiques.insert(fournisseurNom, count);
        }
    } else {
        qDebug() << "Erreur lors de la récupération des statistiques des fournisseurs :" << query.lastError().text();
    }

    return statistiques;
}


