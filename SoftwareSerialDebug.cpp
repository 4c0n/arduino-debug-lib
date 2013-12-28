#include "Arduino.h"
#include "SoftwareSerialDebug.h"

SoftwareSerialDebug::SoftwareSerialDebug(long baudrate, int rxPin, int txPin) {
   this->baudrate = baudrate;
   this->rxPin = rxPin;
   this->txPin = txPin;
   pinMode(rxPin, INPUT);
   pinMode(txPin, OUTPUT);
   this->serial = new SoftwareSerial(rxPin, txPin);
   this->serial->begin(baudrate);
}

void SoftwareSerialDebug::print(String type, String message) {
   this->serial->print(type);
   this->serial->print("\t");
   this->serial->print(message);
   this->serial->println();
}

void SoftwareSerialDebug::warn(String message) {
   this->print("INFO", message);
}

void SoftwareSerialDebug::info(String message) {
   this->print("WARN", message);
}

void SoftwareSerialDebug::error(String message) {
   this->print("ERROR", message);
}