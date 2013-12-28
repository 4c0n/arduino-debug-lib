#ifndef AbstractDebug_h
#define AbstractDebug_h

#include "Arduino.h"

class AbstractDebug {
	protected:
		virtual void print(String message) = 0;
	public:
		virtual void info(String message) {
			this->print("INFO", message);
		}

		virtual void warn(String message) {
			this->print("WARN", message);
		}

		virtual void error(String message) {
			this->print("ERROR", message);
		}
};

#endif
