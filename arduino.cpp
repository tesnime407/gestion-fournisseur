#include "arduino.h"
#include <QDebug>

Arduino::Arduino(QObject *parent) : QObject(parent), serial(nullptr)
{
    serial = new QSerialPort(this);
}

Arduino::~Arduino()
{
    closeSerialPort(); // Fermer le port série si l'objet est détruit
}

void Arduino::setupSerialPort(const QString &portName)
{
    serial->setPortName("COM8"); // Nom du port série
    serial->setBaudRate(QSerialPort::Baud9600);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl(QSerialPort::NoFlowControl);

    if (serial->open(QIODevice::ReadWrite)) {
        connect(serial, &QSerialPort::readyRead, this, &Arduino::readData);
        qDebug() << "Port série ouvert.";
    } else {
        qDebug() << "Échec de l'ouverture du port série.";
    }
}

void Arduino::closeSerialPort()
{
    if (serial->isOpen()) {
        serial->close(); // Fermer le port série
        qDebug() << "Port série fermé.";
    }
}

void Arduino::startReading()
{
    // Vérifiez si le port série est ouvert

}

void Arduino::readData()
{
    QByteArray data = serial->readAll(); // Lire les données du port série
    QString uid = QString(data).trimmed(); // Convertir en QString et enlever les espaces

    qDebug() << "UID reçu : " << uid;
    emit rfidUIDReceived(uid); // Émettre un signal avec l'UID reçu
}
