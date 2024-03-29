#ifndef SerialDebug_h
#define SerialDebug_h

#include "Arduino.h"
#include "AbstractDebug.h"

class SerialDebug : public AbstractDebug {
	public:
		SerialDebug(long baudrate);
	private:
		void print(String type, String message);
};

#endif
