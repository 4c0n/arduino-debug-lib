#ifndef SoftwareSerialDebug_h
#define SoftwareSerialDebug_h

#include "Arduino.h"
#include "AbstractDebug.h"
#include <SoftwareSerial.h>

class SoftwareSerialDebug : public AbstractDebug {
   private:
      long baudrate;
      int rxPin;
      int txPin;
      SoftwareSerial * serial;
   public:
      SoftwareSerialDebug(long baudrate, int rxPin, int txPin);
   private:
      void print(String type, String message);
   public:
      void info(String message);
      void warn(String message);
      void error(String message);
};

#endif