#include <SPI.h>
#include <MFRC522.h>

// Broches pour le module RFID
#define SS_PIN 10
#define RST_PIN 9

MFRC522 rfid(SS_PIN, RST_PIN); // Initialisation du module MFRC522

void setup() {
    // Initialiser la communication série
    Serial.begin(9600);
    while (!Serial); // Attendre que le port série soit prêt
    Serial.println("Initialisation du lecteur RFID...");
    
    // Initialiser le SPI et le module RFID
    SPI.begin();
    rfid.PCD_Init();
    Serial.println("Lecteur RFID prêt. Scannez une carte ou un tag.");
}

void loop() {
    // Vérifier si une carte est détectée
    if (!rfid.PICC_IsNewCardPresent()) {
        return;
    }

    // Lire l'UID de la carte
    if (!rfid.PICC_ReadCardSerial()) {
        return;
    }

    Serial.print("UID de la carte : ");
    for (byte i = 0; i < rfid.uid.size; i++) {
        Serial.print(rfid.uid.uidByte[i] < 0x10 ? " 0" : " ");
        Serial.print(rfid.uid.uidByte[i], HEX); // Afficher en hexadécimal
    }
    Serial.println();

    // Arrêter la communication avec la carte
    rfid.PICC_HaltA();
}
