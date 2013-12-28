#include "Arduino.h"
#include "SerialDebug.h"

SerialDebug::SerialDebug(long baudrate) {
   Serial.begin(baudrate);
}

void SerialDebug::print(String type, String message) {
   Serial.print(type);
   Serial.print("\t");
   Serial.print(message);
   Serial.println();
}

void SerialDebug::info(String message) {
   this->print("INFO", message);
}

void SerialDebug::warn(String message) {
   this->print("WARN", message);
}

void SerialDebug::error(String message) {
   this->print("ERROR", message);
}