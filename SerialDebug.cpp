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
