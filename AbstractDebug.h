#ifndef AbstractDebug_h
#define AbstractDebug_h

#include "Arduino.h"

class AbstractDebug {
   public:
      virtual void info(String message) = 0;
      virtual void warn(String message) = 0;
      virtual void error(String message) = 0;
};

#endif