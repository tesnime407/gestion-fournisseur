#ifndef ARDUINO_H
#define ARDUINO_H

#include <QObject>
#include <QSerialPort>
#include <QSerialPortInfo>

class Arduino : public QObject
{
    Q_OBJECT

public:
    explicit Arduino(QObject *parent = nullptr);
    ~Arduino();

    void setupSerialPort(const QString &portName); // Configurer le port série
    void closeSerialPort(); // Fermer le port série
    void startReading(); // Commencer à lire les données du port série

signals:
    void rfidUIDReceived(const QString &uid); // Signal émis lorsque l'UID est reçu

private slots:
    void readData(); // Slot pour lire les données du port série

private:
    QSerialPort *serial; // Objet pour gérer la communication série
};

#endif // ARDUINO_H
